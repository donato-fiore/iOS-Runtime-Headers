// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKANNOTATIONTRACKINGCAMERACONTROLLER_H
#define VKANNOTATIONTRACKINGCAMERACONTROLLER_H

@protocol VKTrackableAnnotationPresentation, VKTrackableAnnotation;


#import "VKCameraController.h"
#import "VKTimedAnimation.h"

@interface VKAnnotationTrackingCameraController : VKCameraController {
    id<VKTrackableAnnotationPresentation> *_annotationPresentation;
    VKTimedAnimation *_currentAnimation;
    Matrix<double, 3, 1> _currentAnimationStartPoint;
    Matrix<double, 3, 1> _currentAnimationStartCameraPosition;
    Matrix<double, 3, 1> _currentAnimationEndPoint;
    Matrix<double, 3, 1> _currentAnimationEndCameraPosition;
    CGFloat _pendingChangeDuration;
    VKTimedAnimation *_currentHeadingAnimation;
    CGFloat _pendingHeadingChangeDuration;
    float _headingAnimationCompletedAngle;
    ? _flags;
}


@property (readonly, nonatomic) NSObject<VKTrackableAnnotation> *annotation; // ivar: _annotation
@property (nonatomic) ? behavior; // ivar: _behavior
@property (nonatomic) BOOL hasUserSpecifiedZoomLevel; // ivar: _hasUserSpecifiedZoomLevel
@property (nonatomic) NSInteger headingAnimationDisplayRate; // ivar: _headingAnimationDisplayRate
@property (readonly, nonatomic) BOOL shouldForceZoomToFit;
@property (readonly, nonatomic, getter=isTrackingHeading) BOOL trackingHeading;


-(?)initWithMapDataAccess:(?)arg0 animationRunner:(?)arg1 runLoopControllercameraDelegate;
-(BOOL)isAnimating;
// -(void)_goToAnnotationAnimated:(BOOL)arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 isInitial:(unk)arg3  ;
-(void)_rotateToHeadingAnimated:(BOOL)arg0 duration:(CGFloat)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseAnimation;
-(void)resumeAnimation;
-(void)setGesturing:(BOOL)arg0 ;
-(void)startTrackingAnnotation:(id)arg0 trackHeading:(BOOL)arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 timingFunction:(id)arg4 ;
-(void)stopTrackingAnnotation;
-(void)updateFramerate;


@end


#endif