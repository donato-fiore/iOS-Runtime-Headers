// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIFOCUSMOVEMENTACTION_H
#define UIFOCUSMOVEMENTACTION_H

@class BSAction;


#import "_UIFocusMovementInfo.h"
#import "_UIFocusInputDeviceInfo.h"

@interface UIFocusMovementAction : BSAction

@property (readonly, nonatomic) _UIFocusMovementInfo *focusMovementInfo;
@property (readonly, nonatomic) CGRect focusedFrame;
@property (readonly, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (readonly, nonatomic) BOOL shouldPerformHapticFeedback;


-(NSInteger)UIActionType;
-(id)initWithFocusMovementInfo:(id)arg0 ;
-(id)initWithFocusMovementInfo:(id)arg0 inputDeviceInfo:(id)arg1 shouldPerformHapticFeedback:(BOOL)arg2 ;
-(id)initWithFocusMovementInfo:(id)arg0 inputDeviceInfo:(id)arg1 shouldPerformHapticFeedback:(BOOL)arg2 focusedFrameInSceneCoordinateSpace:(struct CGRect )arg3 ;


@end


#endif