// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEBLENDNODEDEFINITION_H
#define PHASEBLENDNODEDEFINITION_H

@class NSMutableArray;


#import "PHASESoundEventNodeDefinition.h"
#import "PHASENumberMetaParameterDefinition.h"
#import "PHASESpatialMixerDefinition.h"

@interface PHASEBlendNodeDefinition : PHASESoundEventNodeDefinition

@property (readonly, nonatomic) PHASENumberMetaParameterDefinition *blendParameterDefinition; // ivar: _blendParameterDefinition
@property (retain, nonatomic) NSMutableArray *ranges; // ivar: _ranges
@property (readonly, nonatomic) PHASESpatialMixerDefinition *spatialMixerDefinitionForDistance; // ivar: _spatialMixerDefinitionForDistance


+(id)new;
-(id)children;
-(id)init;
-(id)initDistanceBlendWithSpatialMixerDefinition:(id)arg0 ;
-(id)initDistanceBlendWithSpatialMixerDefinition:(id)arg0 identifier:(id)arg1 ;
-(id)initDistanceBlendWithSpatialMixerDefinition:(id)arg0 uid:(id)arg1 ;
-(id)initWithBlendMetaParameterDefinition:(id)arg0 ;
-(id)initWithBlendMetaParameterDefinition:(id)arg0 identifier:(id)arg1 ;
-(id)initWithBlendMetaParameterDefinition:(id)arg0 uid:(id)arg1 ;
-(void)addRangeForInputValuesAbove:(CGFloat)arg0 fullGainAtValue:(CGFloat)arg1 fadeCurveType:(NSInteger)arg2 subTree:(id)arg3 ;
-(void)addRangeForInputValuesAbove:(CGFloat)arg0 fullGainAtValue:(CGFloat)arg1 fadeCurveType:(NSInteger)arg2 subtree:(id)arg3 ;
-(void)addRangeForInputValuesBelow:(CGFloat)arg0 fullGainAtValue:(CGFloat)arg1 fadeCurveType:(NSInteger)arg2 subTree:(id)arg3 ;
-(void)addRangeForInputValuesBelow:(CGFloat)arg0 fullGainAtValue:(CGFloat)arg1 fadeCurveType:(NSInteger)arg2 subtree:(id)arg3 ;
-(void)addRangeForInputValuesBetween:(CGFloat)arg0 highValue:(CGFloat)arg1 fullGainAtLowValue:(CGFloat)arg2 fullGainAtHighValue:(CGFloat)arg3 lowFadeCurveType:(NSInteger)arg4 highFadeCurveType:(NSInteger)arg5 subTree:(id)arg6 ;
-(void)addRangeForInputValuesBetween:(CGFloat)arg0 highValue:(CGFloat)arg1 fullGainAtLowValue:(CGFloat)arg2 fullGainAtHighValue:(CGFloat)arg3 lowFadeCurveType:(NSInteger)arg4 highFadeCurveType:(NSInteger)arg5 subtree:(id)arg6 ;
-(void)addRangeWithEnvelope:(id)arg0 subTree:(id)arg1 ;
-(void)addRangeWithEnvelope:(id)arg0 subtree:(id)arg1 ;


@end


#endif