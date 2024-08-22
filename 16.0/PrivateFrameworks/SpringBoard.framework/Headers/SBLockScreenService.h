// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKSCREENSERVICE_H
#define SBLOCKSCREENSERVICE_H

@class FBServiceClientAuthenticator, BSServiceConnectionListener, NSMutableSet, SBFAuthenticationAssertion, BLSAssertion, NSString, SBFUserAuthenticationController;
@protocol SBAlwaysOnPolicy, BSServiceConnectionListenerDelegate, SBSLockScreenServiceServerInterface, SBPasscodeEntryTransientOverlayViewControllerDelegate, SBFAuthenticationAssertionProviding, SBFLockOutStatusProvider;

#import <Foundation/Foundation.h>

#import "SBLockScreenManager.h"
#import "SBMainWorkspace.h"
#import "SBRemoteTransientOverlaySessionManager.h"
#import "SBSpuriousScreenUndimmingAssertion.h"
#import "SBPasscodeEntryTransientOverlayViewController.h"

@interface SBLockScreenService : NSObject <SBAlwaysOnPolicy, BSServiceConnectionListenerDelegate, SBSLockScreenServiceServerInterface, SBPasscodeEntryTransientOverlayViewControllerDelegate>

 {
    SBLockScreenManager *_lockScreenManager;
    SBMainWorkspace *_mainWorkspace;
    id<SBFAuthenticationAssertionProviding> *_authenticationAssertionProvider;
    SBRemoteTransientOverlaySessionManager *_remoteTransientOverlaySessionManager;
    FBServiceClientAuthenticator *_requestDeviceUnlockAuthenticator;
    BSServiceConnectionListener *_listener;
    NSMutableSet *_connections;
    NSMutableSet *_connectionsPreventingPasscodeLock;
    SBFAuthenticationAssertion *_preventPasscodeLockAssertion;
    NSMutableSet *_connectionsPreventingSpuriousScreenUndim;
    SBSpuriousScreenUndimmingAssertion *_preventSpuriousScreenUndimAssertion;
    BLSAssertion *_preventSpuriousScreenUndimDisableAlwaysOnAssertion;
    NSString *_passcodeTitle;
    NSString *_passcodeSubtitle;
    id *_passcodeCheckCompletion;
}


@property (readonly, nonatomic, getter=isAlwaysOnPolicyActive) BOOL alwaysOnPolicyActive;
@property (readonly, nonatomic) NSObject<SBAlwaysOnPolicy> *alwaysOnPolicyProvider;
@property (readonly, copy, nonatomic) NSString *analyticsPolicyName;
@property (readonly, copy, nonatomic) id *analyticsPolicyValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBFLockOutStatusProvider> *lockOutController; // ivar: _lockOutController
@property (retain, nonatomic) SBPasscodeEntryTransientOverlayViewController *passcodeEntryTransientOverlayViewController; // ivar: _passcodeEntryTransientOverlayViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFUserAuthenticationController *userAuthController; // ivar: _userAuthController


-(BOOL)passcodeEntryTransientOverlayViewController:(id)arg0 authenticatePasscode:(id)arg1 ;
-(id)initWithLockScreenManager:(id)arg0 workspace:(id)arg1 authenticationAssertionProvider:(id)arg2 remoteTransientOverlaySessionManager:(id)arg3 ;
-(void)_setPasscodeVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)activateAlwaysOnPolicy;
-(void)launchEmergencyDialerWithCompletion:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)arg0 ;
-(void)requestPasscodeCheckUIForClient:(id)arg0 options:(id)arg1 description:(id)arg2 withCompletion:(id)arg3 ;
-(void)requestPasscodeCheckUIWithOptions:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestPasscodeUnlockUIForClient:(id)arg0 options:(id)arg1 description:(id)arg2 withCompletion:(id)arg3 ;
-(void)requestPasscodeUnlockUIWithOptions:(id)arg0 withCompletion:(id)arg1 ;
-(void)setPreventPasscodeLock:(id)arg0 ;
-(void)setPreventSpuriousScreenUndim:(id)arg0 ;


@end


#endif