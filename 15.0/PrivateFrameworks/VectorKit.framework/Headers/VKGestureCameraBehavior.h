// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKGESTURECAMERABEHAVIOR_H
#define VKGESTURECAMERABEHAVIOR_H

@class NSString;
@protocol VKGesturingCameraController;

#import <Foundation/Foundation.h>

#import "VKCameraController.h"

@interface VKGestureCameraBehavior : NSObject <VKGesturingCameraController>

 {
    BOOL _pinching;
    CGPoint _pinchStartFocusPoint;
    BOOL _panning;
    CGPoint _panStartFocusPoint;
    CGPoint _panStartScreenPoint;
    CGPoint _panLastScreenPoint;
    BOOL _rotating;
    CGPoint _rotateStartFocusPoint;
    CGFloat _lastRotation;
    BOOL _shouldRotationRubberband;
    BOOL _pitching;
    CGPoint _pitchStartFocusPoint;
    CGPoint _pitchStartScreenPoint;
    BOOL _notifyCameraStateChanges;
    VKCameraController *_cameraController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isGesturing;
-(BOOL)isPanning;
-(BOOL)isPinching;
-(BOOL)isPitching;
-(BOOL)isRotating;
-(BOOL)tapAtPoint:(struct CGPoint )arg0 ;
-(id)initWithCameraController:(id)arg0 ;
-(void)beginPan:(struct CGPoint )arg0 ;
-(void)beginPitch:(struct CGPoint )arg0 ;
-(void)beginRotate:(struct CGPoint )arg0 ;
-(void)beginZoom:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)endPan:(struct CGPoint )arg0 ;
-(void)endPitch:(struct CGPoint )arg0 ;
-(void)endRotate:(struct CGPoint )arg0 ;
-(void)endZoom:(struct CGPoint )arg0 ;
-(void)startPanningAtPoint:(struct CGPoint )arg0 panAtStartPoint:(BOOL)arg1 ;
-(void)startPinchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)startPitchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)startRotatingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)stopPanningAtPoint:(struct CGPoint )arg0 ;
-(void)stopPinchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)stopPitchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)stopRotatingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)tapZoom:(struct CGPoint )arg0 levels:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)transferGestureState:(id)arg0 ;
-(void)updatePan:(struct CGPoint )arg0 lastScreenPoint:(struct CGPoint )arg1 ;
-(void)updatePanWithTranslation:(struct CGPoint )arg0 ;
-(void)updatePinchWithFocusPoint:(struct CGPoint )arg0 oldFactor:(CGFloat)arg1 newFactor:(CGFloat)arg2 ;
-(void)updatePitch:(struct CGPoint )arg0 degrees:(CGFloat)arg1 ;
-(void)updatePitch:(struct CGPoint )arg0 translation:(CGFloat)arg1 ;
-(void)updatePitchWithFocusPoint:(struct CGPoint )arg0 degrees:(CGFloat)arg1 ;
-(void)updatePitchWithFocusPoint:(struct CGPoint )arg0 translation:(CGFloat)arg1 ;
-(void)updateRotate:(CGFloat)arg0 atScreenPoint:(struct CGPoint )arg1 ;
-(void)updateRotationWithFocusPoint:(struct CGPoint )arg0 newValue:(CGFloat)arg1 ;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;
-(void)updateZoom:(struct CGPoint )arg0 oldFactor:(CGFloat)arg1 newFactor:(CGFloat)arg2 ;
-(void)zoom:(CGFloat)arg0 withFocusPoint:(struct CGPoint )arg1 completionHandler:(id)arg2 ;


@end


#endif