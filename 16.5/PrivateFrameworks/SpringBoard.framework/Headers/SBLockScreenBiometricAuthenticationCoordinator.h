// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKSCREENBIOMETRICAUTHENTICATIONCOORDINATOR_H
#define SBLOCKSCREENBIOMETRICAUTHENTICATIONCOORDINATOR_H

@class SBUIBiometricResource, NSTimer, NSMutableOrderedSet, NSHashTable, NSString, PKPassLibrary;
@protocol BSDescriptionProviding, SBUIBiometricResourceObserver, SBBiometricUnlockBehaviorDelegate, SBWalletPrearmRecognizerDelegate, PKPassLibraryDelegate, SBUIPasscodeBiometricMatchingAssertionFactory, BSInvalidatable, SBBiometricUnlockBehavior, SBLockScreenBiometricAuthenticationCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "SBWalletPreArmController.h"
#import "_SBPendingMesaUnlockBehaviorUnlockRequest.h"
#import "SBWalletPrearmRecognizer.h"

@interface SBLockScreenBiometricAuthenticationCoordinator : NSObject <BSDescriptionProviding, SBUIBiometricResourceObserver, SBBiometricUnlockBehaviorDelegate, SBWalletPrearmRecognizerDelegate, PKPassLibraryDelegate, SBUIPasscodeBiometricMatchingAssertionFactory>

 {
    SBUIBiometricResource *_biometricResource;
    id<BSInvalidatable> *_fingerDetectEnabledAssertion;
    SBWalletPreArmController *_walletPreArmController;
    BOOL _presentingWalletInterface;
    BOOL _didMatchBeforeWalletPrearmRecognizerTimeout;
    id<BSInvalidatable> *_matchingWantedAssertion;
    NSUInteger _matchingWantedAssertionMode;
    NSTimer *_matchingAssertionInvalidationTimer;
    BOOL _matchedWithResult;
    _SBPendingMesaUnlockBehaviorUnlockRequest *_pendingUnlockRequest;
    NSMutableOrderedSet *_activePasscodeMatchAssertions;
    NSHashTable *_disabledAssertions;
    NSHashTable *_disabledUnlockAssertions;
    NSHashTable *_disabledAutoUnlockAssertions;
}


@property (nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _isAuthenticated
@property (retain, nonatomic, getter=_setAutoUnlockBehavior, setter=_setAutoUnlockBehavior:) NSObject<SBBiometricUnlockBehavior> *autoUnlockBehavior; // ivar: _autoUnlockBehavior
@property (readonly, nonatomic, getter=isAutoUnlockingDisabled) BOOL autoUnlockingDisabled;
@property (nonatomic) BOOL bioAuthenticatedWhileMenuButtonDown; // ivar: _bioAuthenticatedWhileMenuButtonDown
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBLockScreenBiometricAuthenticationCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isUnlockingDisabled) BOOL isUnlockingDisabled;
@property (retain, nonatomic, getter=_getPassLibrary, setter=_setPassLibrary:) PKPassLibrary *passLibrary; // ivar: _passLibrary
@property (readonly, nonatomic, getter=_state) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isWalletPreArmDisabled) BOOL walletPreArmDisabled;
@property (readonly, nonatomic, getter=_walletPrearmRecognizer) SBWalletPrearmRecognizer *walletPrearmRecognizer; // ivar: _walletPrearmRecognizer


-(BOOL)_hasActivePasscodeViews;
-(BOOL)_isMatchingEffectivelyDisabled;
-(BOOL)_isWalletPreArmAllowed;
-(BOOL)_stateWantsMatching:(NSUInteger)arg0 outMatchMode:(*NSUInteger)arg1 ;
-(BOOL)biometricUnlockBehavior:(id)arg0 requestsFeedback:(id)arg1 ;
-(BOOL)biometricUnlockBehavior:(id)arg0 requestsUnlock:(id)arg1 withFeedback:(id)arg2 ;
-(id)acquireDisableAutoUnlockAssertionForReason:(id)arg0 ;
-(id)acquireDisableCoordinatorAssertionForReason:(id)arg0 ;
-(id)acquireDisableUnlockAssertionForReason:(id)arg0 ;
-(id)acquireDisableWalletPreArmAssertionForReason:(id)arg0 ;
-(id)acquireMatchingAssertionWithMode:(NSUInteger)arg0 reason:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithBiometricResource:(id)arg0 walletPreArmController:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addPasscodeMatchingAssertion:(id)arg0 ;
-(void)_clearFingerDetectAssertion;
-(void)_clearPendingUnlockRequest;
-(void)_createFingerDetectAssertion;
-(void)_handleIdentityMatchSuccess:(BOOL)arg0 ;
-(void)_handlePassKitDismissalIfNecessaryWithReason:(id)arg0 ;
-(void)_invalidateWalletPreArmRecognizer;
-(void)_noteMenuButtonDoublePress;
-(void)_noteMenuButtonSinglePress;
-(void)_pendUnlockRequest:(id)arg0 ;
-(void)_removePasscodeMatchingAssertion:(id)arg0 ;
-(void)_setupPreArmRecognizerIfPossibleForReason:(id)arg0 ;
-(void)_stateChangedFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)_toggleAutoUnlockBehaviorEnabled:(BOOL)arg0 ;
-(void)_updateMatchingForState:(NSUInteger)arg0 forReason:(id)arg1 ;
-(void)_walletPreArmDisabledDidChange:(id)arg0 ;
-(void)biometricResource:(id)arg0 matchingAllowedDidChange:(BOOL)arg1 ;
-(void)biometricResource:(id)arg0 observeEvent:(NSUInteger)arg1 ;
-(void)contactlessInterfaceDidDismissFromSource:(NSInteger)arg0 ;
-(void)passLibraryReceivedInterruption;
-(void)walletPrearmRecognizer:(id)arg0 didFailToRecognizeForReason:(NSUInteger)arg1 ;
-(void)walletPrearmRecognizerDidRecognize:(id)arg0 ;


@end


#endif