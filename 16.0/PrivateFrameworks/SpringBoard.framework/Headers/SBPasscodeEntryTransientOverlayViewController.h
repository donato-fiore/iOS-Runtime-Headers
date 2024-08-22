// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPASSCODEENTRYTRANSIENTOVERLAYVIEWCONTROLLER_H
#define SBPASSCODEENTRYTRANSIENTOVERLAYVIEWCONTROLLER_H

@class SBFUserAuthenticationController, CSLockScreenPearlSettings, CSPoseidonViewController, NSString;
@protocol PTSettingsKeyObserver, SBFAuthenticationResponder, SBUIPasscodeLockViewDelegate, SBUIPasscodeLockView, SBPasscodeEntryTransientOverlayViewControllerDelegate;


#import "SBTransientOverlayViewController.h"
#import "SBUIPasscodeViewWithLockScreenStyle.h"

@interface SBPasscodeEntryTransientOverlayViewController : SBTransientOverlayViewController <PTSettingsKeyObserver, SBFAuthenticationResponder, SBUIPasscodeLockViewDelegate>

 {
    BOOL _attemptingUnlock;
    SBFUserAuthenticationController *_authenticationController;
    id<SBUIPasscodeLockView> *_passcodeRequester;
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    CSLockScreenPearlSettings *_pearlSettings;
    CSPoseidonViewController *_poseidonViewController;
    BOOL _keyboardVisible;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBPasscodeEntryTransientOverlayViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int intent; // ivar: _intent
@property (nonatomic) BOOL showEmergencyCallButton; // ivar: _showEmergencyCallButton
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *unlockDestination; // ivar: _unlockDestination
@property (nonatomic) BOOL useBiometricPresentation; // ivar: _useBiometricPresentation


-(BOOL)_canShowWhileLocked;
-(BOOL)canBecomeLocalFirstResponder;
-(BOOL)isContentOpaque;
-(NSInteger)idleTimerDuration;
-(NSInteger)idleTimerMode;
-(NSInteger)idleWarnMode;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithAuthenticationController:(id)arg0 ;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)preferredDisplayLayoutElementIdentifier;
-(int)_preferredStatusBarVisibility;
-(void)_attemptUnlock:(id)arg0 passcode:(id)arg1 ;
-(void)_passcodeLockViewPasscodeEntered:(id)arg0 authenticationType:(NSUInteger)arg1 ;
-(void)_updatePrototypeSettings;
-(void)handleFailedAuthenticationRequest:(id)arg0 error:(id)arg1 ;
-(void)handleInvalidAuthenticationRequest:(id)arg0 ;
-(void)handleSuccessfulAuthenticationRequest:(id)arg0 ;
-(void)handleWillShowKeyboard:(BOOL)arg0 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg0 ;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)arg0 ;
-(void)passcodeLockViewPasscodeDidChange:(id)arg0 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg0 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif