// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKIMAGECANVAS_H
#define VKIMAGECANVAS_H

@class GEOMapRegion;
@protocol MDRenderTarget;

#import <Foundation/Foundation.h>

#import "VKCamera.h"

@interface VKImageCanvas : NSObject {
    _retain_ptr<VKCameraController *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _cameraController;
    shared_ptr<md::TaskContext> _taskContext;
    _retain_ptr<VKCamera *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _vkCamera;
    ? _camera;
    id<MDRenderTarget> *_displayTarget;
    *void _mapRenderer;
    *void _layoutContext;
    *RunLoopController _runLoopController;
}


@property ? camera;
@property (nonatomic) VKEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) int mapType; // ivar: _mapType
@property (readonly, nonatomic) CGFloat pitch;
@property ? taskContext;
@property (readonly, nonatomic) VKCamera *vkCamera;
@property (readonly, nonatomic) CGFloat yaw;


-(id)initWithMapEngine:(*void)arg0 ;
-(void)didReceiveMemoryWarning:(BOOL)arg0 ;
-(void)renderSceneWithEngine:(*void)arg0 completion:(struct function<void ()> )arg1 ;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;


@end


#endif