// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DGETBOUNDSPROJECTOR_H
#define TSCH3DGETBOUNDSPROJECTOR_H


#import <Foundation/Foundation.h>

#import "TSCH3DCamera.h"
#import "TSCH3DChartScenePropertyAccessor.h"

@interface TSCH3DGetBoundsProjector : NSObject {
    tmat4x4<float> _modelView;
    tmat4x4<float> _constantDepthModelView;
    tmat4x4<float> _projection;
    tmat4x4<float> _MVP;
    TSCH3DCamera *_camera;
    TSCH3DChartScenePropertyAccessor *_accessor;
    BOOL _useAggressiveBackProjection;
}




-(id)init;
-(struct box<glm::detail::tvec3<float>> )projectBounds:(*void)arg0 type:(int)arg1 ;
-(struct tvec3<float> )backProjectModelViewPoint:(*void)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)resetTransformsForLayoutBounds;
-(void)resetTransformsForRenderBounds;
-(void)setCamera:(id)arg0 accessor:(id)arg1 ;


@end


#endif