// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMEBUTTONPRESSSPEEDMESAUNLOCKTRIGGER_H
#define SBHOMEBUTTONPRESSSPEEDMESAUNLOCKTRIGGER_H

@class BSTimer;


#import "SBMesaUnlockTrigger.h"

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {
    BOOL _bioUnlockOccurred;
    BOOL _buttonIsDown;
    BOOL _fingerIsOn;
    BOOL _timerFired;
}


@property (nonatomic) CGFloat slowPressDuration; // ivar: _slowPressDuration
@property (retain, nonatomic, getter=_slowPressTimer, setter=_setSlowPressTimer:) BSTimer *slowPressTimer; // ivar: _slowPressTimer


-(BOOL)_isPrimed;
-(BOOL)_isTimerRunning;
-(BOOL)bioUnlock;
-(id)description;
-(id)init;
-(id)succinctDescriptionBuilder;
-(void)_cancelTimer;
-(void)_evaluateUnlock;
-(void)_startTimer;
-(void)_timerFired;
-(void)fingerOff;
-(void)menuButtonDown;
-(void)menuButtonUp;
-(void)screenOff;


@end


#endif