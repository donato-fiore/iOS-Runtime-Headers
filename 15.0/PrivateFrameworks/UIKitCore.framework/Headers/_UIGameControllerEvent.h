// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIGAMECONTROLLEREVENT_H
#define _UIGAMECONTROLLEREVENT_H



#import "UIEvent.h"

@interface _UIGameControllerEvent : UIEvent {
    ? _previousState;
    NSUInteger _activeComponent;
}




-(BOOL)_determineInputTypeAndProcess:(struct ? *)arg0 pressesEvent:(id)arg1 timestamp:(CGFloat)arg2 ;
-(BOOL)_processDPad:(struct ? *)arg0 pressesEvent:(id)arg1 timestamp:(CGFloat)arg2 ;
-(BOOL)_processLeftStick:(struct ? *)arg0 pressesEvent:(id)arg1 timestamp:(CGFloat)arg2 ;
-(BOOL)_processRightStick:(struct ? *)arg0 pressesEvent:(id)arg1 timestamp:(CGFloat)arg2 ;
-(BOOL)_processShoulder:(struct ? *)arg0 pressesEvent:(id)arg1 timestamp:(CGFloat)arg2 ;
-(BOOL)_processStandardButtons:(struct ? *)arg0 pressesEvent:(id)arg1 timestamp:(CGFloat)arg2 ;
-(NSInteger)subtype;
-(NSInteger)type;
-(struct CGPoint )_leftStickPosition;
-(void)_maybeConvertAndSendAsPressesEvent;
-(void)_reset;
-(void)_sendEventToResponder:(id)arg0 ;


@end


#endif