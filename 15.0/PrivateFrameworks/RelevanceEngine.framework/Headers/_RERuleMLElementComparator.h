// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _RERULEMLELEMENTCOMPARATOR_H
#define _RERULEMLELEMENTCOMPARATOR_H

@class NSArray;


#import "REMLElementComparator.h"

@interface _RERuleMLElementComparator : REMLElementComparator {
    NSArray *_filteringRules;
    NSArray *_rankingRules;
    NSArray *_filteringEvaluators;
    NSArray *_leftRankingEvaluators;
    NSArray *_rightRankingEvaluators;
    NSArray *_comparisonRankingEvaluators;
}




+(id)comparatorWithFilteringRules:(id)arg0 rankingRules:(id)arg1 model:(id)arg2 ;
-(BOOL)shouldHideElement:(id)arg0 ;
-(NSInteger)compareElement:(id)arg0 toElement:(id)arg1 level:(NSUInteger)arg2 ;
-(NSUInteger)comparisonLevels;
-(float)_relevanceForElement:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFilteringRules:(id)arg0 rankingRules:(id)arg1 model:(id)arg2 ;


@end


#endif