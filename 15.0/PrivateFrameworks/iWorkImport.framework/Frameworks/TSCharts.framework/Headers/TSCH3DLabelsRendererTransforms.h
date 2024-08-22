// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DLABELSRENDERERTRANSFORMS_H
#define TSCH3DLABELSRENDERERTRANSFORMS_H


#import <Foundation/Foundation.h>

#import "TSCH3DChartScenePropertyAccessor.h"
#import "TSCH3DCamera.h"
#import "TSCH3DScene.h"

@interface TSCH3DLabelsRendererTransforms : NSObject {
    TSCH3DChartScenePropertyAccessor *_accessor;
    tmat4x4<float> _projector;
    tmat4x4<float> _unitToWorld;
    tmat4x4<float> _stageToWorld;
    tmat4x4<float> _worldToStage;
    bitset<5> _validBits;
}


@property (retain, nonatomic) TSCH3DCamera *camera; // ivar: _camera
@property (retain, nonatomic) TSCH3DScene *scene; // ivar: _scene


+(id)transforms;
-(*void)p_projector;
-(*void)p_stageToWorld;
-(*void)unitToWorld;
-(*void)worldToStage;
-(id)accessor;
-(struct tvec3<float> )projectPoint:(*void)arg0 ;
-(struct tvec3<float> )samples;
-(void)resetWithScene:(id)arg0 camera:(id)arg1 ;


@end


#endif