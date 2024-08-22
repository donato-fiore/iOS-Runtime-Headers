// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLSTRINGPROBABILITYDICTIONARY_H
#define MLSTRINGPROBABILITYDICTIONARY_H



#import "MLProbabilityDictionary.h"

@interface MLStringProbabilityDictionary : MLProbabilityDictionary {
    map<std::string, unsigned long, std::less<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> _mapStrLabelToIndex;
}


@property ? mapStrLabelToIndex;


+(id)probabilityDictionaryForStringLabels:(id)arg0 ;
-(id)initWithStrLabels:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;


@end


#endif