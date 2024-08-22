// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFUSERAUTHENTICATIONCONTROLLER_H
#define SBFUSERAUTHENTICATIONCONTROLLER_H

@class NSMutableArray, NSHashTable, NSString, PCPersistentTimer, NSDate;
@protocol SBFMobileKeyBagObserver, SBFUserAuthenticationModelDelegate, SBFAuthenticationAssertionProviding, SBFAuthenticationStatusProvider, SBFPasscodeFieldChangeObserver, SBFUserAuthenticationModel, SBFAuthenticationPolicy;

#import <Foundation/Foundation.h>

#import "SBFMobileKeyBag.h"
#import "SBFAuthenticationAssertionManager.h"
#import "SBFAuthenticationAssertion.h"
#import "SBFSecureDisplayCoordinator.h"
#import "SBFMobileKeyBagState.h"

@interface SBFUserAuthenticationController : NSObject <SBFMobileKeyBagObserver, SBFUserAuthenticationModelDelegate, SBFAuthenticationAssertionProviding, SBFAuthenticationStatusProvider, SBFPasscodeFieldChangeObserver>

 {
    SBFMobileKeyBag *_keybag;
    NSMutableArray *_responders;
    NSHashTable *_observers;
    id<SBFUserAuthenticationModel> *_model;
    NSInteger _authenticationState;
    SBFAuthenticationAssertionManager *_assertionManager;
    NSString *_lastIncorrectPasscodeAttempt;
    SBFAuthenticationAssertion *_transientAuthCheckingAssertion;
    *__CFRunLoopObserver _runLoopObserver;
    PCPersistentTimer *_unblockTimer;
    NSInteger _cachedAuthFlag;
    SBFSecureDisplayCoordinator *_secureDisplayCoordinator;
    SBFMobileKeyBagState *_cachedExtendedState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inSecureDisplayMode;
@property (readonly, nonatomic) NSDate *lastRevokedAuthenticationDate; // ivar: _lastRevokedAuthenticationDate
@property (retain, nonatomic, getter=_policy, setter=_setPolicy:) NSObject<SBFAuthenticationPolicy> *policy; // ivar: _policy
@property (readonly) Class superclass;


-(BOOL)_authenticateIfInGracePeriod;
-(BOOL)_boolForAuthenticationResult:(NSInteger)arg0 ;
-(BOOL)_isAssertionValid:(id)arg0 ;
-(BOOL)_isInBioUnlockState;
-(BOOL)_isInGracePeriodState;
-(BOOL)_isPermanentlyBlocked;
-(BOOL)_isTemporarilyBlocked;
-(BOOL)_isUserAuthenticated;
-(BOOL)_isUserRequestedEraseEnabled;
-(BOOL)_performNilPasscodeCheck;
-(BOOL)_processAuthenticationRequest:(id)arg0 responder:(id)arg1 ;
-(BOOL)_shouldRevokeAuthenticationNow;
-(BOOL)hasAuthenticatedAtLeastOnceSinceBoot;
-(BOOL)hasPasscodeSet;
-(BOOL)isAuthenticated;
-(BOOL)isAuthenticatedCached;
-(CGFloat)_timeUntilUnblockedSinceReferenceDate;
-(NSInteger)_evaluateAuthenticationAttempt:(id)arg0 outError:(*id)arg1 ;
-(NSInteger)_evaluateBiometricAttempt:(id)arg0 ;
-(NSInteger)_evaluatePasscodeAttempt:(id)arg0 outError:(*id)arg1 ;
-(id)_cachedLockStateExtended;
-(id)createGracePeriodAssertionWithReason:(id)arg0 ;
-(id)createKeybagUnlockAssertionWithReason:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithAssertionManager:(id)arg0 policy:(id)arg1 ;
-(id)initWithAssertionManager:(id)arg0 policy:(id)arg1 keybag:(id)arg2 model:(id)arg3 ;
-(id)publicDescription;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addAsFirstResponder:(id)arg0 ;
-(void)_addAuthenticationAssertion:(id)arg0 ;
-(void)_addPrivateAuthenticationObserver:(id)arg0 ;
-(void)_clearBlockedState;
-(void)_clearUnblockTimer;
-(void)_handleFailedAuthentication:(id)arg0 error:(id)arg1 responder:(id)arg2 ;
-(void)_handleInvalidAuthentication:(id)arg0 responder:(id)arg1 ;
-(void)_handleSuccessfulAuthentication:(id)arg0 responder:(id)arg1 ;
-(void)_invalidateCachedPasscodeLockState;
-(void)_noteDeviceLockStateMayHaveChangedForExternalReasons;
-(void)_notifyAboutTemporaryBlockStatusChanged;
-(void)_notifyClientsOfAuthenticationResult:(NSInteger)arg0 forRequest:(id)arg1 error:(id)arg2 withResponder:(id)arg3 ;
-(void)_refreshModelCacheIfNeeded;
-(void)_removeAuthResponder:(id)arg0 ;
-(void)_removeAuthenticationAssertion:(id)arg0 ;
-(void)_removePrivateAuthenticationObserver:(id)arg0 ;
-(void)_revokeAuthenticationImmediately:(BOOL)arg0 forPublicReason:(id)arg1 ;
-(void)_scheduleUnblockTimer;
-(void)_setAuthState:(NSInteger)arg0 ;
-(void)_setModel:(id)arg0 ;
-(void)_setupPolicy:(id)arg0 ;
-(void)_setup_runLoopObserverIfNecessary;
-(void)_unblockTimerFired;
-(void)_uncachePasscodeIfNecessary;
-(void)_updateAuthenticationStateAndDateForLockState:(id)arg0 ;
-(void)_updateAuthenticationStateForPublicReason:(id)arg0 ;
-(void)_updateAuthenticationStateImmediately:(BOOL)arg0 forPublicReason:(id)arg1 ;
-(void)_updateSecureModeIfNecessaryForNewAuthState;
-(void)addAsFirstResponder:(id)arg0 ;
-(void)dealloc;
-(void)deviceLockModelRequestsDeviceWipe:(id)arg0 ;
-(void)deviceLockStateMayHaveChangedForModel:(id)arg0 ;
-(void)keybag:(id)arg0 extendedStateDidChange:(id)arg1 ;
-(void)keybagDidUnlockForTheFirstTime:(id)arg0 ;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(void)processAuthenticationRequest:(id)arg0 ;
-(void)processAuthenticationRequest:(id)arg0 responder:(id)arg1 ;
-(void)removeResponder:(id)arg0 ;
-(void)revokeAuthenticationIfNecessaryForPublicReason:(id)arg0 ;
-(void)revokeAuthenticationImmediatelyForPublicReason:(id)arg0 ;
-(void)revokeAuthenticationImmediatelyIfNecessaryForPublicReason:(id)arg0 ;


@end


#endif