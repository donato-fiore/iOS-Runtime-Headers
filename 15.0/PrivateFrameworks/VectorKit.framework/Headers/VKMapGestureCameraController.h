// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKMAPGESTURECAMERACONTROLLER_H
#define VKMAPGESTURECAMERACONTROLLER_H



#import "VKGestureCameraBehavior.h"
#import "VKTimedAnimation.h"

@interface VKMapGestureCameraController : VKGestureCameraBehavior {
    CGPoint _panLastScreenPoint;
    BOOL _isPitchIncreasing;
    CGFloat _beganPitch;
    CGFloat _currentPitch;
    VKTimedAnimation *_zoomAnimation;
}




-(BOOL)isPitchIncreasing;
-(struct Matrix<double, 3, 1> )positionClampedToCameraRestriction:(struct Matrix<double, 3, 1> )arg0 ;
-(struct Matrix<double, 3, 1> )positionClampedToCameraRestriction:(struct Matrix<double, 3, 1> )arg0 delta:(struct Matrix<double, 3, 1> )arg1 ;
-(void)beginPitch:(struct CGPoint )arg0 ;
-(void)updatePan:(struct CGPoint )arg0 lastScreenPoint:(struct CGPoint )arg1 ;
-(void)updatePitch:(struct CGPoint )arg0 degrees:(CGFloat)arg1 ;
-(void)updatePitch:(struct CGPoint )arg0 translation:(CGFloat)arg1 ;
-(void)updateRotate:(CGFloat)arg0 atScreenPoint:(struct CGPoint )arg1 ;
-(void)updateZoom:(struct CGPoint )arg0 oldFactor:(CGFloat)arg1 newFactor:(CGFloat)arg2 ;


@end


#endif