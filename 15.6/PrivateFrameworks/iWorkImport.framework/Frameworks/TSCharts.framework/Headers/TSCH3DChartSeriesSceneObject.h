// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTSERIESSCENEOBJECT_H
#define TSCH3DCHARTSERIESSCENEOBJECT_H



#import "TSCH3DChartElementSceneObject.h"

@interface TSCH3DChartSeriesSceneObject : TSCH3DChartElementSceneObject



+(BOOL)shouldCreateMeshSeriesStorage;
+(Class)propertiesClass;
+(float)chartSeriesPolygonOffset;
+(float)depthLimitFactorForSeriesCount:(NSInteger)arg0 maxLimitingSeries:(NSInteger)arg1 ;
+(id)createBoundsForSeries:(id)arg0 ;
-(BOOL)shouldRenderSeries:(id)arg0 ;
-(BOOL)transparencyDepthMask;
-(float)chartMinZForScene:(id)arg0 ;
-(float)depthForScene:(id)arg0 ;
-(float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)arg0 ;
-(void)postrenderElement:(id)arg0 ;
-(void)prerenderElement:(id)arg0 ;
-(void)renderLabelsSceneObject:(id)arg0 pipeline:(id)arg1 enumerator:(id)arg2 properties:(id)arg3 ;
-(void)sortElements:(*id)arg0 pipeline:(id)arg1 ;
-(void)updateElementEffectsStates:(id)arg0 depthToWidthRatio:(float)arg1 ;
-(void)updateTilingEffect:(*void)arg0 properties:(id)arg1 textureTiling:(id)arg2 size:(*void)arg3 ;


@end


#endif