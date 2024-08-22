// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKGLOBEGESTURECAMERACONTROLLER_H
#define VKGLOBEGESTURECAMERACONTROLLER_H



#import "VKGestureCameraBehavior.h"

@interface VKGlobeGestureCameraController : VKGestureCameraBehavior {
    *void _globeView;
    *void _cameraManager;
    CGFloat _beganDoublePanPitch;
    CGFloat _currentDoublePanPitch;
    BOOL _isPitchIncreasing;
}




-(BOOL)isPitchIncreasing;
-(void)beginPan:(struct CGPoint )arg0 ;
-(void)beginPitch:(struct CGPoint )arg0 ;
-(void)beginRotate:(struct CGPoint )arg0 ;
-(void)beginZoom:(struct CGPoint )arg0 ;
-(void)endPan:(struct CGPoint )arg0 ;
-(void)endPitch:(struct CGPoint )arg0 ;
-(void)endRotate:(struct CGPoint )arg0 ;
-(void)endZoom:(struct CGPoint )arg0 ;
-(void)setCameraManager:(*void)arg0 ;
-(void)setGlobeView:(*void)arg0 ;
-(void)updatePan:(struct CGPoint )arg0 lastScreenPoint:(struct CGPoint )arg1 ;
-(void)updatePitch:(struct CGPoint )arg0 degrees:(CGFloat)arg1 ;
-(void)updatePitch:(struct CGPoint )arg0 translation:(CGFloat)arg1 ;
-(void)updateRotate:(CGFloat)arg0 atScreenPoint:(struct CGPoint )arg1 ;
-(void)updateZoom:(struct CGPoint )arg0 oldFactor:(CGFloat)arg1 newFactor:(CGFloat)arg2 ;


@end


#endif