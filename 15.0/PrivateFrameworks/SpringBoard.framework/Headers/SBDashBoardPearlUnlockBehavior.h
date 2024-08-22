// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDPEARLUNLOCKBEHAVIOR_H
#define SBDASHBOARDPEARLUNLOCKBEHAVIOR_H

@class CSLockScreenPearlSettings, NSString;
@protocol SBMesaUnlockTriggerDelegate, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorDelegate;

#import <Foundation/Foundation.h>

#import "SBMesaUnlockTrigger.h"

@interface SBDashBoardPearlUnlockBehavior : NSObject <SBMesaUnlockTriggerDelegate, SBBiometricUnlockBehavior>

 {
    CSLockScreenPearlSettings *_pearlSettings;
}


@property (weak, nonatomic) NSObject<SBBiometricUnlockBehaviorDelegate> *biometricUnlockBehaviorDelegate; // ivar: _biometricUnlockBehaviorDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_trigger, setter=_setTrigger:) SBMesaUnlockTrigger *trigger; // ivar: _trigger


-(id)_feedbackForBioUnlockEventThatWasSpontaneous:(BOOL)arg0 ;
-(id)_feedbackForFailureSettings:(id)arg0 ;
-(id)_feedbackForPasscodeEvent;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithPearlSettings:(id)arg0 andUnlockTrigger:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_handlePearlFailure;
-(void)handleBiometricEvent:(NSUInteger)arg0 ;
-(void)mesaUnlockTriggerFired:(id)arg0 ;


@end


#endif