// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11HOVERTEXTUI21HOVERTEXTEVENTHANDLER_H
#define _TTC11HOVERTEXTUI21HOVERTEXTEVENTHANDLER_H

@protocol AXUIEventHandler;

#import <Foundation/Foundation.h>


@interface _TtC11HoverTextUI21HoverTextEventHandler : NSObject <AXUIEventHandler>

 {
    ? focusChange;
    ? activationLockSequenceOccurred;
    ? activationButtonPressed;
    ? activationButtonReleased;
    ? previousHoverElement;
    ? lastEventTime;
    ? mouseStream;
    ? passiveSystemWindow;
    ? keyboardEventProcessor;
    ? activationKey;
    ? previousKeyModifierState;
    ? activationKeyPressCount;
    ? activationKeyPressIsActive;
    ? $__lazy_storage_$_activationKeyHoldTimer;
}




-(BOOL)handlePointerEvent:(id)arg0 ;
-(id)init;


@end


#endif