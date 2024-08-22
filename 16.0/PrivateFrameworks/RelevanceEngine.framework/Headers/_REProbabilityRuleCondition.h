// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _REPROBABILITYRULECONDITION_H
#define _REPROBABILITYRULECONDITION_H

@class NSString;
@protocol REAutomaticExportedInterface;


#import "RECondition.h"
#import "REFeature.h"

@interface _REProbabilityRuleCondition : RECondition <REAutomaticExportedInterface>



@property (readonly, nonatomic) REFeature *feature; // ivar: _feature
@property (readonly, nonatomic) NSString *interaction; // ivar: _interaction
@property (readonly, nonatomic) NSInteger relation; // ivar: _relation
@property (readonly, nonatomic) float threshold; // ivar: _threshold


-(BOOL)_acceptsFeatureMap:(id)arg0 predictionSet:(id)arg1 explanation:(*id)arg2 ;
-(BOOL)_needsProbability;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dependentFeatures;
-(id)_inflectionFeatureValuePairs;
-(id)_notCondition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProbability:(id)arg0 relation:(NSInteger)arg1 feature:(id)arg2 threshold:(float)arg3 ;


@end


#endif