// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKSCREENCAMERACONTROLLER_H
#define VKSCREENCAMERACONTROLLER_H

@class NSString;
@protocol VKAnnotationTrackingCameraController, VKGesturingCameraController, VKTrackableAnnotation;


#import "VKCameraController.h"
#import "VKTimedAnimation.h"
#import "VKAnnotationTrackingCameraController.h"
#import "VKGestureCameraBehavior.h"
#import "VKCameraRegionRestriction.h"

@interface VKScreenCameraController : VKCameraController <VKAnnotationTrackingCameraController, VKGesturingCameraController>

 {
    VKTimedAnimation *_zoomAnimation;
    VKTimedAnimation *_pitchAnimation;
    VKTimedAnimation *_rotationAnimation;
    VKTimedAnimation *_regionAnimation;
    VKAnnotationTrackingCameraController *_annotationTrackingCameraController;
    VKGestureCameraBehavior *_gestureCameraControllerBehavior;
    BOOL _isPitchIncreasing;
}


@property (readonly, nonatomic, getter=isAnimatingToTrackAnnotation) BOOL animatingToTrackAnnotation;
@property (nonatomic) ? annotationTrackingBehavior; // ivar: _annotationTrackingBehavior
@property (nonatomic) NSInteger annotationTrackingHeadingAnimationDisplayRate; // ivar: _annotationTrackingHeadingAnimationDisplayRate
@property (nonatomic) ? centerCoordinateDistanceRange; // ivar: _centerCoordinateDistanceRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAnimatingToTrackAnnotation;
@property (readonly, nonatomic) BOOL isTrackingHeading;
@property (retain, nonatomic) VKCameraRegionRestriction *regionRestriction; // ivar: _regionRestriction
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<VKTrackableAnnotation> *trackingAnnotation;
@property (readonly, nonatomic, getter=isTrackingHeading) BOOL trackingHeading;
@property (nonatomic) BOOL userChangedZoomSinceLastProgrammaticRegionChange; // ivar: _userChangedZoomSinceLastProgrammaticRegionChange


-(?)initWithMapDataAccess:(?)arg0 animationRunner:(?)arg1 runLoopControllercameraDelegate;
-(BOOL)canEnter3DMode;
-(BOOL)isAnimating;
-(BOOL)snapMapIfNecessary:(BOOL)arg0 ;
-(BOOL)tapAtPoint:(struct CGPoint )arg0 ;
-(CGFloat)durationToAnimateToMapRegion:(id)arg0 ;
-(NSInteger)tileSize;
-(void)clampZoomLevelIfNecessary;
-(void)dealloc;
-(void)enter3DMode;
-(void)exit3DMode;
-(void)panWithOffset:(struct CGPoint )arg0 relativeToScreenPoint:(struct CGPoint )arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(void)setCamera:(struct shared_ptr<gdc::Camera> )arg0 ;
// -(void)setCenterCoordinate3D:(struct ? )arg0 altitude:(CGFloat)arg1 yaw:(CGFloat)arg2 pitch:(CGFloat)arg3 duration:(CGFloat)arg4 animationStyle:(NSInteger)arg5 timingCurve:(id)arg6 completion:(unk)arg7  ;
// -(void)setCenterCoordinate:(struct ? )arg0 altitude:(CGFloat)arg1 yaw:(CGFloat)arg2 pitch:(CGFloat)arg3 duration:(CGFloat)arg4 animationStyle:(NSInteger)arg5 timingCurve:(id)arg6 completion:(unk)arg7  ;
-(void)setEdgeInsets:(struct VKEdgeInsets )arg0 ;
// -(void)setMapRegion:(id)arg0 pitch:(CGFloat)arg1 yaw:(CGFloat)arg2 duration:(CGFloat)arg3 timingCurve:(id)arg4 completion:(unk)arg5  ;
-(void)setVkCamera:(id)arg0 ;
-(void)setYaw:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)startPanningAtPoint:(struct CGPoint )arg0 panAtStartPoint:(BOOL)arg1 ;
-(void)startPinchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)startPitchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)startRotatingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)startTrackingAnnotation:(id)arg0 trackHeading:(BOOL)arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 timingFunction:(id)arg4 ;
-(void)stopAnimations;
-(void)stopPanningAtPoint:(struct CGPoint )arg0 ;
-(void)stopPinchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)stopPitchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)stopRegionAnimation;
-(void)stopRotatingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)stopSnappingAnimations;
-(void)stopTrackingAnnotation;
-(void)transferGestureState:(id)arg0 ;
-(void)updatePanWithTranslation:(struct CGPoint )arg0 ;
-(void)updatePinchWithFocusPoint:(struct CGPoint )arg0 oldFactor:(CGFloat)arg1 newFactor:(CGFloat)arg2 ;
-(void)updatePitchWithFocusPoint:(struct CGPoint )arg0 degrees:(CGFloat)arg1 ;
-(void)updatePitchWithFocusPoint:(struct CGPoint )arg0 translation:(CGFloat)arg1 ;
-(void)updateRotationWithFocusPoint:(struct CGPoint )arg0 newValue:(CGFloat)arg1 ;
-(void)updateState;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;
-(void)zoom:(CGFloat)arg0 withFocusPoint:(struct CGPoint )arg1 completionHandler:(id)arg2 ;


@end


#endif