// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTORTHOGRAPHICSHADOWSSCENEOBJECT_H
#define TSCH3DCHARTORTHOGRAPHICSHADOWSSCENEOBJECT_H



#import "TSCH3DChartShadowsSceneObject.h"

@interface TSCH3DChartOrthographicShadowsSceneObject : TSCH3DChartShadowsSceneObject



+(id)blurParametersArray;
-(id)createCamera;
-(id)createShadowsRenderer;
-(void)updateCoordsAndTexcoords:(*void)arg0 zOffset:(float)arg1 cameraPosition:(*void)arg2 quad:(id)arg3 texcoords:(id)arg4 ;
-(void)updateShadowPlane:(id)arg0 texcoords:(id)arg1 scene:(id)arg2 blurslack:(float)arg3 angle:(float)arg4 quality:(float)arg5 planePadding:(struct box<glm::detail::tvec3<float>> )arg6 ;


@end


#endif