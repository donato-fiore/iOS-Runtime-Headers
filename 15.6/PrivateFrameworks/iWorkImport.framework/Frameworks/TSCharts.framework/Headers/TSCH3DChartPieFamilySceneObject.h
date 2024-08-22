// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTPIEFAMILYSCENEOBJECT_H
#define TSCH3DCHARTPIEFAMILYSCENEOBJECT_H



#import "TSCH3DChartElementSceneObject.h"

@interface TSCH3DChartPieFamilySceneObject : TSCH3DChartElementSceneObject



+(BOOL)shouldCreateMeshSeriesStorage;
+(Class)propertiesClass;
+(NSUInteger)p_boundsStepsForAngle:(CGFloat)arg0 ;
+(float)calculateHalfAngleForSeries:(id)arg0 ;
+(float)geometrySpaceRadius;
+(id)chartSeriesType;
+(id)createBoundsForSeries:(id)arg0 ;
+(id)createGeometryWithStartAngle:(float)arg0 endAngle:(float)arg1 bevel:(BOOL)arg2 bevelEdges:(BOOL)arg3 ;
+(id)createMeshForSeries:(id)arg0 ;
+(id)p_boundsDataBufferWithDepthFactor:(float)arg0 angleRange:(*void)arg1 includeEndPoints:(BOOL)arg2 ;
+(id)p_wholePieBounds;
+(id)wholePieBoundsResource;
-(BOOL)shouldRenderEachValue;
-(BOOL)transparencyDepthMask;
-(Class)chartBoundsLayoutSceneDelegateClass;
-(Class)getBounds3DClass;
-(Class)resizer3DClass;
-(float)explosionAtElementIndex:(*void)arg0 forScene:(id)arg1 ;
-(void)renderLabelsSceneObject:(id)arg0 pipeline:(id)arg1 enumerator:(id)arg2 properties:(id)arg3 ;
-(void)setExplosion:(float)arg0 atElementIndex:(*void)arg1 forScene:(id)arg2 ;
-(void)sortElements:(*id)arg0 pipeline:(id)arg1 ;
-(void)updateElementEffectsStates:(id)arg0 depthToWidthRatio:(float)arg1 ;
-(void)updateTilingEffect:(*void)arg0 properties:(id)arg1 textureTiling:(id)arg2 depth:(float)arg3 percentOfTotal:(float)arg4 ;


@end


#endif