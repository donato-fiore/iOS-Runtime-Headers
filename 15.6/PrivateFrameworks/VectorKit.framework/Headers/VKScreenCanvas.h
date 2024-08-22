// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKSCREENCANVAS_H
#define VKSCREENCANVAS_H

@class ARSession;
@protocol MDRenderTarget, MDMapControllerDelegate;

#import <Foundation/Foundation.h>

#import "VKCameraController.h"

@interface VKScreenCanvas : NSObject {
    *RunLoopController _runLoopController;
    *AnimationRunner _animationRunner;
    shared_ptr<md::TaskContext> _taskContext;
    _retain_ptr<VKCamera *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _vkCamera;
    ? _camera;
    id<MDRenderTarget> *_displayTarget;
    BOOL _userIsGesturing;
    VKCameraController *_cameraController;
    VKEdgeInsets _edgeInsets;
    BOOL _deallocing;
    *void _mapRenderer;
    *void _layoutContext;
    PerspectiveView<double> _view;
    ARSession *_arSession;
}


@property ? camera;
@property (nonatomic) VKEdgeInsets edgeInsets;
@property (nonatomic) VKEdgeInsets fullyOccludedEdgeInsets; // ivar: _fullyOccludedEdgeInsets
@property (nonatomic, getter=isGesturing) BOOL gesturing;
@property (nonatomic) NSObject<MDMapControllerDelegate> *mapDelegate; // ivar: _mapDelegate
@property (readonly, nonatomic) *void mapEngine; // ivar: _mapEngine
@property ? vkCamera;


-(id)initWithMapEngine:(*void)arg0 inBackground:(BOOL)arg1 ;
-(id)markerAtScreenPoint:(struct CGPoint )arg0 enableExtendedFeatureMarkers:(BOOL)arg1 ;
-(void)cameraController:(id)arg0 requestsDisplayRate:(NSInteger)arg1 ;
-(void)didReceiveMemoryWarning:(BOOL)arg0 beAggressive:(BOOL)arg1 ;
-(void)enterARSessionAtCoordinate:(struct ? )arg0 ;
-(void)runAnimation:(id)arg0 ;
-(void)transferStateFromCanvas:(id)arg0 ;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;


@end


#endif