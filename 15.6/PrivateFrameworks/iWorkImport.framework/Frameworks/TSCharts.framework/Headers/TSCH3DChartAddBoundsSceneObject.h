// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTADDBOUNDSSCENEOBJECT_H
#define TSCH3DCHARTADDBOUNDSSCENEOBJECT_H



#import "TSCH3DSceneObject.h"

@interface TSCH3DChartAddBoundsSceneObject : TSCH3DSceneObject



+(id)p_rotationBoundsModeForScene:(id)arg0 ;
+(id)p_setBoundsModeClass:(Class)arg0 forScene:(id)arg1 ;
+(void)setDepthBoundsForScene:(id)arg0 ;
+(void)setRadialBoundsFactor:(float)arg0 forScene:(id)arg1 ;
+(void)setXYRotationBoundsForScene:(id)arg0 ;
+(void)setYRotationBoundsForScene:(id)arg0 ;
-(void)getBounds:(id)arg0 ;
-(void)rayPick:(id)arg0 ;
-(void)render:(id)arg0 ;


@end


#endif