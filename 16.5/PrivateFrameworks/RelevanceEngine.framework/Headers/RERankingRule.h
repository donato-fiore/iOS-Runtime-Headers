// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RERANKINGRULE_H
#define RERANKINGRULE_H

@protocol REAutomaticExportedInterface;


#import "RERule.h"
#import "REConditionEvaluator.h"
#import "REComparisonCondition.h"
#import "RECondition.h"

@interface RERankingRule : RERule <REAutomaticExportedInterface>

 {
    REConditionEvaluator *_leftConditionEvaluator;
    REConditionEvaluator *_rightConditionEvaluator;
    REConditionEvaluator *_comparisonConditionEvaluator;
}


@property (readonly, nonatomic) REComparisonCondition *comparison; // ivar: _comparison
@property (readonly, nonatomic) REConditionEvaluator *comparisonConditionEvaluator;
@property (readonly, nonatomic) RECondition *leftCondition; // ivar: _leftCondition
@property (readonly, nonatomic) REConditionEvaluator *leftConditionEvaluator;
@property (readonly, nonatomic) NSInteger order; // ivar: _order
@property (readonly, nonatomic) RECondition *rightCondition; // ivar: _rightCondition
@property (readonly, nonatomic) REConditionEvaluator *rightConditionEvaluator;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLeftCondition:(id)arg0 rightCondition:(id)arg1 comparisonCondition:(id)arg2 order:(NSInteger)arg3 ;


@end


#endif