// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _REHASFEATURERULECONDITION_H
#define _REHASFEATURERULECONDITION_H

@protocol REAutomaticExportedInterface;


#import "RECondition.h"
#import "REFeature.h"

@interface _REHasFeatureRuleCondition : RECondition <REAutomaticExportedInterface>



@property (readonly, nonatomic) BOOL contains; // ivar: _contains
@property (readonly, nonatomic) REFeature *feature; // ivar: _feature


-(BOOL)_acceptsFeatureMap:(id)arg0 predictionSet:(id)arg1 explanation:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dependentFeatures;
-(id)_inflectionFeatureValuePairs;
-(id)_notCondition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFeature:(id)arg0 contains:(BOOL)arg1 ;


@end


#endif