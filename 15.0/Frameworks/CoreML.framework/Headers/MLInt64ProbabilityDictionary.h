// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLINT64PROBABILITYDICTIONARY_H
#define MLINT64PROBABILITYDICTIONARY_H



#import "MLProbabilityDictionary.h"

@interface MLInt64ProbabilityDictionary : MLProbabilityDictionary {
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapIntLabelToIndex;
}


@property ? mapIntLabelToIndex;


+(id)probabilityDictionaryForInt64Labels:(id)arg0 ;
-(id)initWithIntLabels:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;


@end


#endif