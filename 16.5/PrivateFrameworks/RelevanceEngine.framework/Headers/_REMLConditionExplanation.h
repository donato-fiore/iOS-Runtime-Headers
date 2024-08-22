// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REMLCONDITIONEXPLANATION_H
#define _REMLCONDITIONEXPLANATION_H



#import "REMLExplanation.h"
#import "RECondition.h"

@interface _REMLConditionExplanation : REMLExplanation {
    RECondition *_condition;
    NSUInteger _type;
}




-(NSInteger)_rankExplanationToSimilarExplanation:(id)arg0 ;
-(id)_constantConditionExplanationWithStyle:(NSUInteger)arg0 ;
-(id)_featureRuleExplanation:(id)arg0 withStyle:(NSUInteger)arg1 ;
-(id)_hasFeatureExplanation:(id)arg0 withStyle:(NSUInteger)arg1 ;
-(id)_probabilityExplanation:(id)arg0 withStyle:(NSUInteger)arg1 ;
-(id)_valueExplanation:(id)arg0 withStyle:(NSUInteger)arg1 ;
-(id)explanationByCombiningWithExplanation:(id)arg0 ;
-(id)explanationWithStyle:(NSUInteger)arg0 ;
-(id)initWithCondition:(id)arg0 ;


@end


#endif