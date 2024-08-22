// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCROPGESTUREHANDLER_H
#define PUCROPGESTUREHANDLER_H

@class NUCropModel;
@protocol OS_dispatch_queue, OS_dispatch_source, PUCropGestureHandlerDelegate;

#import <Foundation/Foundation.h>


@interface PUCropGestureHandler : NSObject {
    CGVector _panRubberBandDelta;
    CGVector _panSlideVelocity;
    NSObject<OS_dispatch_queue> *_animationQueue;
    NSObject<OS_dispatch_source> *_pitchYawRollAnimationTimer;
    NSObject<OS_dispatch_source> *_panAnimationTimer;
    NSObject<OS_dispatch_source> *_zoomAnimationTimer;
    ? _panState;
    ? _pinchState;
    ? _pitchYawRollState;
    CGRect _panPinchStartRect;
    CGFloat _gestureStartPitch;
    CGFloat _gestureStartYaw;
    CGFloat _gestureStartRoll;
    int _pitchYawRollAnimationTimerCountdown;
    BOOL _inPanState;
    BOOL _inZoomState;
    BOOL _isDebugging;
    BOOL _isLogging;
    BOOL _delegateQueueIsMain;
    BOOL _animateEndGesture;
    BOOL _isRequestActive;
}


@property (readonly, retain) NUCropModel *cropModel; // ivar: _cropModel
@property (weak) NSObject<PUCropGestureHandlerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly) NSInteger gesture; // ivar: _gesture
@property CGFloat maximumZoomScale; // ivar: _maximumZoomScale
@property (readonly) CGVector panRubberBandOffset; // ivar: _panRubberBandOffset
@property (readonly) CGFloat zoomOverflow; // ivar: _zoomOverflow


-(CGFloat)_zoomScaleForCurrentCropRectAndModelRect;
-(CGFloat)_zoomScaleForModelCropRect:(struct CGRect )arg0 ;
-(id)delgateQueue;
-(id)initWithCropModel:(id)arg0 ;
-(struct CGSize )masterImageSize;
-(void)_activateRequest;
-(void)_clearGestureTypePan;
-(void)_clearGestureTypePinch;
-(void)_clearGestureTypePitchYawRoll;
-(void)_constrainedMoveCropRectBy:(struct CGVector )arg0 startRect:(struct CGRect )arg1 rubberband:(BOOL)arg2 ;
-(void)_deactivateRequest;
-(void)_didTrack;
-(void)_dispatchSyncOnDelegateQueue:(id)arg0 ;
-(void)_setZoomScale:(CGFloat)arg0 ;
-(void)_startPitchYawRollGestureTimeoutTimer;
-(void)_stopAnimatedPan;
-(void)_stopAnimatedPanTimer;
-(void)_stopAnimatedZoom;
-(void)_stopAnimatedZoomTimer;
-(void)_zoomWithScale:(CGFloat)arg0 startCropRect:(struct CGRect )arg1 ;
-(void)beginPan;
-(void)beginZoom;
-(void)endPanWithTranslation:(struct CGVector )arg0 velocity:(struct CGVector )arg1 ;
-(void)endZoomWithScale:(CGFloat)arg0 ;
-(void)panWithTranslation:(struct CGVector )arg0 velocity:(struct CGVector )arg1 ;
-(void)reset;
-(void)setAnimateEndGestureEnabled:(BOOL)arg0 ;
-(void)setLoggingEnabled:(BOOL)arg0 ;
-(void)setPitchAngle:(CGFloat)arg0 ;
-(void)setRollAngle:(CGFloat)arg0 ;
-(void)setYawAngle:(CGFloat)arg0 ;
-(void)tearDown;
-(void)zoomWithScale:(CGFloat)arg0 ;
-(void)zoomWithScale:(CGFloat)arg0 rubberband:(BOOL)arg1 ;


@end


#endif