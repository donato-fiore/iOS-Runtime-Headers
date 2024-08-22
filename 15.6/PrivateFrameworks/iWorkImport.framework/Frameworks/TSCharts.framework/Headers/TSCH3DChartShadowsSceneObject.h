// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTSHADOWSSCENEOBJECT_H
#define TSCH3DCHARTSHADOWSSCENEOBJECT_H



#import "TSCH3DSceneObject.h"

@interface TSCH3DChartShadowsSceneObject : TSCH3DSceneObject



+(void)invalidateShadowsForScene:(id)arg0 ;
+(void)setShadowPlanePadding:(struct box<glm::detail::tvec3<float>> )arg0 forScene:(id)arg1 ;
-(float)p_chartOpacityForScene:(id)arg0 ;
-(id)TSDShadowFromScene:(id)arg0 ;
-(id)effects;
-(id)propertiesForScene:(id)arg0 ;
-(struct box<glm::detail::tvec3<float>> )p_shadowPlanePaddingForScene:(id)arg0 ;
-(struct tvec3<float> )calculateShadowCameraPosition:(float)arg0 center:(struct tvec3<float> )arg1 shadowQuality:(float)arg2 depthLimitAdjustment:(float)arg3 ;
-(void)getBounds:(id)arg0 ;
-(void)prerender:(id)arg0 ;
-(void)prerenderShadows:(id)arg0 blurslack:(float)arg1 angle:(float)arg2 quality:(float)arg3 targetFBO:(id)arg4 ;
-(void)render:(id)arg0 ;
-(void)renderShadowScene:(id)arg0 ;
-(void)renderShadows:(id)arg0 ;


@end


#endif