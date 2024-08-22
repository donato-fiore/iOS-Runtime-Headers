// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REFILTERINGRULE_H
#define REFILTERINGRULE_H

@protocol REAutomaticExportedInterface;


#import "RERule.h"
#import "REConditionEvaluator.h"
#import "RECondition.h"

@interface REFilteringRule : RERule <REAutomaticExportedInterface>

 {
    REConditionEvaluator *_conditionEvaluator;
}


@property (readonly, nonatomic) RECondition *condition; // ivar: _condition
@property (readonly, nonatomic) REConditionEvaluator *conditionEvaluator;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCondition:(id)arg0 ;
-(id)initWithCondition:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif