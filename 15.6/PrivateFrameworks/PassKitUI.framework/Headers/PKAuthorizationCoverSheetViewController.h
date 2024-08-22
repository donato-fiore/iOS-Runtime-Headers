// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAUTHORIZATIONCOVERSHEETVIEWCONTROLLER_H
#define PKAUTHORIZATIONCOVERSHEETVIEWCONTROLLER_H

@class UIViewController, NSData, PKAuthenticator, PKGlyphView, UIButton, UILabel, UIAccessibilityElement, NSString;
@protocol PKAuthenticatorDelegate, OS_dispatch_source, PKAuthorizationCoverSheetViewControllerDelegate;


#import "PKIdleTimerAssertion.h"

@interface PKAuthorizationCoverSheetViewController : UIViewController <PKAuthenticatorDelegate>

 {
    NSData *_externalizedAuthenticationContext;
    PKAuthenticator *_authenticator;
    BOOL _authenticating;
    BOOL _hasAttemptedBiometricAuth;
    BOOL _hasPresentedPasscodePrompt;
    BOOL _isRestartingAuthenticationFromCancel;
    BOOL _hasShownPasscodeButton;
    NSInteger _coachingState;
    BOOL _shouldUIBeShown;
    NSUInteger _stateBeforePasscodePresented;
    NSUInteger _currentState;
    PKIdleTimerAssertion *_idleTimerAssertion;
    NSObject<OS_dispatch_source> *_idleTimer;
    PKGlyphView *_glyphView;
    UIButton *_enterPasscodeButton;
    UILabel *_titleLabelView;
    UILabel *_subtitleLabelView;
    UIAccessibilityElement *_textAccessibilityElement;
    UIAccessibilityElement *_passcodeAccessibilityElement;
    UIViewController *_passcodeViewController;
    id<PKAuthorizationCoverSheetViewControllerDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_genericBiometricFailureLabelAccessibilityLabel:(BOOL)arg0 ;
-(id)_genericBiometricLabelAccessibilityLabel:(BOOL)arg0 ;
-(id)_genericBiometricUnavailableLabelAccessibilityLabel:(BOOL)arg0 ;
-(id)_passcodeLabelAccessibilityLabel:(BOOL)arg0 ;
-(id)initWithDelegate:(id)arg0 authenticator:(id)arg1 ;
-(void)_fallbackToPasscode;
-(void)_presentPasscodeToExitLockout;
-(void)_setIdleTimerDisabled:(BOOL)arg0 ;
-(void)_transitionToState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)authenticator:(id)arg0 didTransitionToCoachingState:(NSInteger)arg1 ;
-(void)authenticator:(id)arg0 didTransitionToEvaluationStateWithEvent:(struct ? )arg1 ;
-(void)dealloc;
-(void)dismissPasscodeViewController;
-(void)fadeInUIAnimated:(BOOL)arg0 ;
-(void)fadeOutUI;
-(void)loadView;
// -(void)presentPasscodeViewController:(id)arg0 completionHandler:(id)arg1 reply:(unk)arg2  ;
-(void)startEvaluation;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif