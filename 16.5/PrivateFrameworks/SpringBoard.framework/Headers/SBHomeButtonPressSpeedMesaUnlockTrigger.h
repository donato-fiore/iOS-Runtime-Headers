// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMEBUTTONPRESSSPEEDMESAUNLOCKTRIGGER_H
#define SBHOMEBUTTONPRESSSPEEDMESAUNLOCKTRIGGER_H

@class BSAbsoluteMachTimer;


#import "SBMesaUnlockTrigger.h"

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {
    BSAbsoluteMachTimer *_slowPressTimer;
    BOOL _bioUnlockOccurred;
    BOOL _buttonIsDown;
    BOOL _fingerIsOn;
    BOOL _timerFired;
}


@property (nonatomic) CGFloat slowPressDuration; // ivar: _slowPressDuration


-(BOOL)_isPrimed;
-(BOOL)_isTimerRunning;
-(BOOL)bioUnlock;
-(id)description;
-(id)init;
-(id)succinctDescriptionBuilder;
-(void)_evaluateUnlock;
-(void)_invalidateTimer;
-(void)_startTimer;
-(void)_timerFired;
-(void)dealloc;
-(void)fingerOff;
-(void)menuButtonDown;
-(void)menuButtonUp;
-(void)screenOff;


@end


#endif