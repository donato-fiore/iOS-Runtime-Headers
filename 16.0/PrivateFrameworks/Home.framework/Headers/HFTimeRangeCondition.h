// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTIMERANGECONDITION_H
#define HFTIMERANGECONDITION_H

@class HFTimeCondition<HFPrimitiveTimeCondition>;


#import "HFTimeCondition.h"

@interface HFTimeRangeCondition : HFTimeCondition

@property (readonly, nonatomic) HFTimeCondition<HFPrimitiveTimeCondition> *endCondition; // ivar: _endCondition
@property (readonly, nonatomic) HFTimeCondition<HFPrimitiveTimeCondition> *startCondition; // ivar: _startCondition


+(id)_primitiveTimePredicateClasses;
-(NSUInteger)timeConditionType;
-(id)description;
-(id)initWithPredicate:(id)arg0 ;
-(id)initWithStartCondition:(id)arg0 endCondition:(id)arg1 ;


@end


#endif