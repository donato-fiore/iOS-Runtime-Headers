// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REFEATURERULECONDITION_H
#define _REFEATURERULECONDITION_H

@protocol REAutomaticExportedInterface;


#import "RECondition.h"
#import "REFeature.h"

@interface _REFeatureRuleCondition : RECondition <REAutomaticExportedInterface>



@property (readonly, nonatomic) REFeature *firstFeature; // ivar: _firstFeature
@property (readonly, nonatomic) NSInteger relation; // ivar: _relation
@property (readonly, nonatomic) REFeature *secondFeature; // ivar: _secondFeature


-(BOOL)_acceptsFeatureMap:(id)arg0 predictionSet:(id)arg1 explanation:(*id)arg2 ;
-(BOOL)_requiresTwoFeatures;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dependentFeatures;
-(id)_inflectionFeatureValuePairs;
-(id)_notCondition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFeature:(id)arg0 relation:(NSInteger)arg1 feature:(id)arg2 ;


@end


#endif