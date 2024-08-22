// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DVTKTRACESYMBOLSINFORMATION_H
#define DVTKTRACESYMBOLSINFORMATION_H


#import <Foundation/Foundation.h>


@interface DVTKtraceSymbolsInformation : NSObject {
    map<unsigned long long, std::pair<unsigned long long, id>, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::pair<unsigned long long, id>>>> _symbolInfos;
}




-(id)getSymbolInfoForAddress:(NSUInteger)arg0 ;
-(void)addSymbolInfoForRange:(NSUInteger)arg0 length:(NSUInteger)arg1 symbolInfo:(id)arg2 ;


@end


#endif