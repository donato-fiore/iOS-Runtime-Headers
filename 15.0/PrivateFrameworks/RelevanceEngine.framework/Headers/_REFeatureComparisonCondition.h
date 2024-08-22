// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _REFEATURECOMPARISONCONDITION_H
#define _REFEATURECOMPARISONCONDITION_H

@protocol REAutomaticExportedInterface;


#import "REComparisonCondition.h"
#import "REFeature.h"

@interface _REFeatureComparisonCondition : REComparisonCondition <REAutomaticExportedInterface>



@property (readonly, nonatomic) REFeature *leftFeature; // ivar: _leftFeature
@property (readonly, nonatomic) NSInteger relation; // ivar: _relation
@property (readonly, nonatomic) REFeature *rightFeature; // ivar: _rightFeature


-(BOOL)_acceptsLeftFeatureMap:(id)arg0 rightFeatureMap:(id)arg1 ;
-(BOOL)_requiresTwoFeatures;
-(BOOL)_validForRanking;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dependentFeatures;
-(id)_inflectionFeatureValuePairs;
-(id)_notCondition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLeftFeature:(id)arg0 relation:(NSInteger)arg1 rightFeature:(id)arg2 ;


@end


#endif