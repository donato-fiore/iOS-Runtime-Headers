// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKARWALKINGDEBUGGESTURECAMERABEHAVIOR_H
#define VKARWALKINGDEBUGGESTURECAMERABEHAVIOR_H



#import "VKGestureCameraBehavior.h"
#import "VKARWalkingCameraController.h"

@interface VKARWalkingDebugGestureCameraBehavior : VKGestureCameraBehavior {
    VKARWalkingCameraController *_controller;
}




-(id)initWithCameraController:(id)arg0 ;
-(void)updatePan:(struct CGPoint )arg0 lastScreenPoint:(struct CGPoint )arg1 ;
-(void)updateRotate:(CGFloat)arg0 atScreenPoint:(struct CGPoint )arg1 ;
-(void)updateZoom:(struct CGPoint )arg0 oldFactor:(CGFloat)arg1 newFactor:(CGFloat)arg2 ;


@end


#endif