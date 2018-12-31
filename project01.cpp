/*
练习3.14

用cin读入一组整数；
存入一个vector对象；

注意：因为for （auto c ： str）支持c++11标准，所以需执行g++ -std=c++11 project01.cpp
完成时间：2018.12.30
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> vInt;
    int i;
    char cont = 'y';
    while (cin >> i)
    {
        vInt.push_back(i);
        cout << " 您要继续吗（y or n）？" << endl;
        cin >> cont;
        if (cont != 'y' && cont != 'Y')
            break;
    }
    for (auto mem : vInt)
        cout << mem << " ";
    cout << endl;
    return 0;         
}