// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSLEEPWAKEHARDWAREBUTTONINTERACTION_H
#define SBSLEEPWAKEHARDWAREBUTTONINTERACTION_H

@class NSString;
@protocol SBHardwareButtonInteraction, SBHardwareButtonGestureParametersObserver, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBHIDInterface.h"
#import "SpringBoard.h"
#import "SBBacklightController.h"
#import "SBLockScreenManager.h"
#import "SBScreenWakeAnimationController.h"
#import "SBSoundController.h"

@interface SBSleepWakeHardwareButtonInteraction : NSObject <SBHardwareButtonInteraction, SBHardwareButtonGestureParametersObserver>



@property (retain, nonatomic) SBHIDInterface *HIDInterface; // ivar: _HIDInterface
@property (retain, nonatomic) SpringBoard *SBApp; // ivar: _SBApp
@property (nonatomic, getter=isSOSGestureActive) BOOL SOSGestureActive; // ivar: _SOSGestureActive
@property (retain, nonatomic) SBBacklightController *backlightController; // ivar: _backlightController
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<BSInvalidatable> *deferOrientationUpdatesAssertion; // ivar: _deferOrientationUpdatesAssertion
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPlayLockSound; // ivar: _didPlayLockSound
@property (nonatomic) BOOL fadeOutInProgressFromLockButtonWhileUnlocked; // ivar: _fadeOutInProgressFromLockButtonWhileUnlocked
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inhibitNextSinglePressUp; // ivar: _inhibitNextSinglePressUp
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager; // ivar: _lockScreenManager
@property (nonatomic) CGFloat multiplePressTimeInterval; // ivar: _multiplePressTimeInterval
@property (retain, nonatomic) SBScreenWakeAnimationController *screenWakeAnimationController; // ivar: _screenWakeAnimationController
@property (retain, nonatomic) SBSoundController *soundController; // ivar: _soundController
@property (readonly) Class superclass;
@property (nonatomic) BOOL undidFadeOutFromLockButton; // ivar: _undidFadeOutFromLockButton


-(BOOL)consumeInitialPressDown;
-(BOOL)consumeSinglePressUp;
-(BOOL)reverseSleepIfNeededAndPossible;
-(id)init;
-(void)_performSleep;
-(void)_performWake;
-(void)_playLockSound;
-(void)provider:(id)arg0 didUpdateButtonGestureParameters:(id)arg1 ;


@end


#endif