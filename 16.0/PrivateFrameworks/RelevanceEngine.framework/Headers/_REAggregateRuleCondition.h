// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _REAGGREGATERULECONDITION_H
#define _REAGGREGATERULECONDITION_H

@class NSSet;
@protocol REAutomaticExportedInterface;


#import "RECondition.h"

@interface _REAggregateRuleCondition : RECondition <REAutomaticExportedInterface>



@property (readonly, nonatomic) NSSet *conditions; // ivar: _conditions
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)_acceptsFeatureMap:(id)arg0 predictionSet:(id)arg1 explanation:(*id)arg2 ;
-(BOOL)_acceptsLeftFeatureMap:(id)arg0 rightFeatureMap:(id)arg1 ;
-(BOOL)_needsProbability;
-(BOOL)_requiresTwoFeatures;
-(BOOL)_validForRanking;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dependentFeatures;
-(id)_inflectionFeatureValuePairs;
-(id)_notCondition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithConditions:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif