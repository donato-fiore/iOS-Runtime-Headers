// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTELEMENTSCENEOBJECT_H
#define TSCH3DCHARTELEMENTSCENEOBJECT_H



#import "TSCH3DSceneObject.h"

@interface TSCH3DChartElementSceneObject : TSCH3DSceneObject



+(BOOL)isHorizontalChart;
+(BOOL)shouldCreateMeshSeriesStorage;
+(id)partWithEnumerator:(id)arg0 layoutSettings:(struct ? )arg1 ;
+(id)resetSeriesStorage:(id)arg0 forSeries:(id)arg1 ;
+(id)scenePropertiesKey;
+(void)setLowDetailedGeometriesForScene:(id)arg0 ;
-(BOOL)applyEffectsForProperties:(id)arg0 series:(id)arg1 index:(*void)arg2 pipeline:(id)arg3 injectEffectsUsingBlock:(id)arg4 ;
-(BOOL)p_isRenderPassDelayedForDelegate:(id)arg0 ;
-(BOOL)shouldDelayForChartOpacity:(float)arg0 ;
-(BOOL)shouldRenderEachValue;
-(BOOL)shouldRenderSeries:(id)arg0 ;
-(BOOL)transparencyDepthMask;
-(Class)getBounds3DClass;
-(Class)resizer3DClass;
-(float)chartOpacityForScene:(id)arg0 ;
-(float)depthForScene:(id)arg0 ;
-(id)delegateFromScene:(id)arg0 ;
-(id)elementPropertiesFromScene:(id)arg0 ;
-(id)geometryForSeries:(id)arg0 index:(*void)arg1 scene:(id)arg2 ;
-(id)modelEnumeratorFromScene:(id)arg0 ;
-(id)scenePartForScene:(id)arg0 ;
-(id)scenePropertiesKey;
-(id)selectionPathForInfo:(id)arg0 scene:(id)arg1 pickedPoint:(id)arg2 ;
-(struct ElementRenderPass )render:(id)arg0 pushMatrix:(BOOL)arg1 delayedPass:(BOOL)arg2 ;
-(struct tvec2<float> )labelObjectSpacePosition:(unsigned int)arg0 axisValue:(CGFloat)arg1 intercept:(CGFloat)arg2 ;
-(struct tvec2<float> )labelOffset:(unsigned int)arg0 labelSize:(*void)arg1 textureSize:(*void)arg2 dataSpaceValue:(float)arg3 ;
-(struct tvec3<float> )adjustedScaleForInfoChartScale:(*void)arg0 scene:(id)arg1 ;
-(void)getBounds:(id)arg0 ;
-(void)getSceneObjectElementsBounds:(id)arg0 ;
-(void)getSelectionKnobsPositions:(id)arg0 ;
-(void)p_processItems:(id)arg0 processItemsClass:(Class)arg1 ;
-(void)postrenderElement:(id)arg0 ;
-(void)prerenderElement:(id)arg0 ;
-(void)rayPick:(id)arg0 ;
-(void)render:(id)arg0 ;
-(void)renderElement:(id)arg0 ;
-(void)renderLabelsSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(void)renderSeriesLabelsSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(void)renderTwoPassGeometry:(BOOL)arg0 processor:(id)arg1 renderBlock:(id)arg2 ;
-(void)setTransparencyBlendingForProcessor:(id)arg0 ;
-(void)updateLightingEffectsState:(id)arg0 scene:(id)arg1 ;


@end


#endif