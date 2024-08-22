// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBIOMETRICEVENTLOGGER_H
#define SBBIOMETRICEVENTLOGGER_H

@class BiometricKit, NSString;
@protocol SBUIBiometricResourceObserver, SBUIBiometricResource;

#import <Foundation/Foundation.h>


@interface SBBiometricEventLogger : NSObject <SBUIBiometricResourceObserver>

 {
    BiometricKit *_biometricKit;
    BOOL _isScreenOn;
    BOOL _passcodeSuccessAfterBioFailureTriggerArmed;
    id<SBUIBiometricResource> *_biometricResource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger fingerOnTime; // ivar: _fingerOnTime
@property (nonatomic) BOOL fingerOnWithScreenOn; // ivar: _fingerOnWithScreenOn
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger keybagUnlockTime; // ivar: _keybagUnlockTime
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)logClass:(unsigned char)arg0 code:(unsigned int)arg1 ;
+(void)logEvent:(unsigned int)arg0 ;
-(BOOL)_shouldSyslogTimestamps;
-(NSUInteger)_machTimeInMilliseconds;
-(id)init;
-(void)_authRequestCompleted:(id)arg0 ;
-(void)_backlightLevelChanged:(id)arg0 ;
-(void)_biometricAuthenticationFailed;
-(void)_biometricAuthenticationSucceeded;
-(void)_clearEverything;
-(void)_coversheetSwipedForDismissal:(id)arg0 ;
-(void)_fingerOn:(id)arg0 ;
-(void)_keybagBioUnlock:(id)arg0 ;
-(void)_passcodeAuthenticationSucceeded;
-(void)_passcodePromptCancelled:(id)arg0 ;
-(void)_passcodeViewTransitionedToPasscode:(id)arg0 ;
-(void)_prearmMatch:(id)arg0 ;
-(void)_resetPasscodeStateMachine;
-(void)_screenTurnedOn:(id)arg0 ;
-(void)_systemDidWakeFromSleep:(id)arg0 ;
-(void)_tryAgain:(id)arg0 ;
-(void)_unlockAnimationWillStart:(id)arg0 ;
-(void)biometricResource:(id)arg0 observeEvent:(NSUInteger)arg1 ;
-(void)timestampEvent:(NSUInteger)arg0 ;


@end


#endif