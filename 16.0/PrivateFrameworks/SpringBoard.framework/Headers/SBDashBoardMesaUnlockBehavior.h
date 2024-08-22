// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDASHBOARDMESAUNLOCKBEHAVIOR_H
#define SBDASHBOARDMESAUNLOCKBEHAVIOR_H

@class NSString, CSLockScreenMesaSettings;
@protocol SBMesaUnlockTriggerDelegate, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorDelegate;

#import <Foundation/Foundation.h>

#import "SBHomeHardwareButton.h"
#import "SBMesaUnlockTrigger.h"

@interface SBDashBoardMesaUnlockBehavior : NSObject <SBMesaUnlockTriggerDelegate, SBBiometricUnlockBehavior>

 {
    NSInteger _failedMesaUnlockAttempts;
}


@property (weak, nonatomic) NSObject<SBBiometricUnlockBehaviorDelegate> *biometricUnlockBehaviorDelegate; // ivar: _biometricUnlockBehaviorDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_getHomeHardwareButton, setter=_setHomeHardwareButton:) SBHomeHardwareButton *homeHardwareButton; // ivar: _homeHardwareButton
@property (readonly, nonatomic, getter=_mesaSettings) CSLockScreenMesaSettings *mesaSettings; // ivar: _mesaSettings
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_trigger, setter=_setTrigger:) SBMesaUnlockTrigger *trigger; // ivar: _trigger


-(id)_failureSettingsForFailAttempt:(NSInteger)arg0 ;
-(id)_feedbackForBioUnlockEventThatWasSpontaneous:(BOOL)arg0 ;
-(id)_feedbackForFailureSettings:(id)arg0 ;
-(id)_feedbackForPasscodeEvent;
-(id)_homeHardwareButton;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithMesaSettings:(id)arg0 andUnlockTrigger:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_handleMesaFailure;
-(void)handleBiometricEvent:(NSUInteger)arg0 ;
-(void)lockButtonDown;
-(void)menuButtonDown;
-(void)menuButtonUp;
-(void)mesaUnlockTriggerFired:(id)arg0 ;
-(void)screenOff;
-(void)screenOn;
-(void)setAuthenticated:(BOOL)arg0 ;
-(void)significantUserInteractionDidOccur;


@end


#endif