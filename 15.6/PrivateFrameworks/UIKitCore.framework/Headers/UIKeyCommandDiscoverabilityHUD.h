// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYCOMMANDDISCOVERABILITYHUD_H
#define UIKEYCOMMANDDISCOVERABILITYHUD_H

@class NSTimer, NSValue;

#import <Foundation/Foundation.h>

#import "_UIKeyCommandDiscoverabilityHUDWindow.h"

@interface UIKeyCommandDiscoverabilityHUD : NSObject {
    NSTimer *_HUDPopTimer;
    NSValue *_pointerLocation;
    _UIKeyCommandDiscoverabilityHUDWindow *_window;
    BOOL _commandKeyIsDown;
}




+(id)sharedKeyCommandDiscoverabilityHUD;
+(void)clearHUDPopTimer;
+(void)dismissHUD;
-(BOOL)_HUDAllowedForWindow:(id)arg0 ;
-(id)_performableKeyCommandsWithResponder:(id)arg0 ;
-(void)_HUDPopTimerFired:(id)arg0 ;
-(void)_applicationWillResignActive;
-(void)_clearHUDPopTimer;
-(void)_didTakeScreenshot;
-(void)_dismissHUD;
-(void)_presentHUDWithKeyCommands:(id)arg0 ;
-(void)_scheduleHUDPresentation;
-(void)dealloc;
-(void)handlePhysicalKeyboardEvent:(id)arg0 ;


@end


#endif