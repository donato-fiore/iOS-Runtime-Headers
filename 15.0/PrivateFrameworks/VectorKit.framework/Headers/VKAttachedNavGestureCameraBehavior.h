// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKATTACHEDNAVGESTURECAMERABEHAVIOR_H
#define VKATTACHEDNAVGESTURECAMERABEHAVIOR_H



#import "VKGestureCameraBehavior.h"
#import "VKNavCameraController.h"
#import "VKTimedAnimation.h"

@interface VKAttachedNavGestureCameraBehavior : VKGestureCameraBehavior {
    VKNavCameraController *_navCameraController;
    CGFloat _startZoomScale;
    VKTimedAnimation *_tapZoomAnimation;
}




-(id)initWithNavCameraController:(id)arg0 ;
-(void)_startZoomAnimationFrom:(CGFloat)arg0 to:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)beginZoom:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)tapZoom:(struct CGPoint )arg0 levels:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)updatePan:(struct CGPoint )arg0 lastScreenPoint:(struct CGPoint )arg1 ;
-(void)updatePitch:(struct CGPoint )arg0 degrees:(CGFloat)arg1 ;
-(void)updatePitch:(struct CGPoint )arg0 translation:(CGFloat)arg1 ;
-(void)updateRotate:(CGFloat)arg0 atScreenPoint:(struct CGPoint )arg1 ;
-(void)updateZoom:(struct CGPoint )arg0 oldFactor:(CGFloat)arg1 newFactor:(CGFloat)arg2 ;


@end


#endif