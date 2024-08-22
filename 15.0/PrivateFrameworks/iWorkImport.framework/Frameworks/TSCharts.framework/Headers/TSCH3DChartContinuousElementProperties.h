// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTCONTINUOUSELEMENTPROPERTIES_H
#define TSCH3DCHARTCONTINUOUSELEMENTPROPERTIES_H



#import "TSCH3DChartBasicElementProperties.h"

@interface TSCH3DChartContinuousElementProperties : TSCH3DChartBasicElementProperties {
    NSUInteger _maxLimitingSeries;
}


@property (readonly, nonatomic) float depthLimitFactor; // ivar: _depthLimitFactor
@property (readonly, nonatomic) float p_sageInterSetDepthGapProperty; // ivar: _depthGapFactor
@property (readonly, nonatomic) NSInteger seriesCount;
@property (readonly, nonatomic) float shadowCameraDepthLimitAdjustmentFactor; // ivar: _shadowCameraDepthLimitAdjustmentFactor


-(BOOL)applyElementTransform:(*void)arg0 series:(id)arg1 index:(struct tvec2<int> )arg2 propertyAccessor:(id)arg3 ;
-(float)chartMinZForScene:(id)arg0 ;
-(float)depthForScene:(id)arg0 ;
-(float)p_depthLimitedChartInitialDepthOffset;
-(float)p_interSetDepthGapProperty;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct tvec2<int> )seriesSize;
-(void)reset;
-(void)resetWithEnumerator:(id)arg0 layoutSettings:(struct ? )arg1 ;
-(void)updateLabels;


@end


#endif