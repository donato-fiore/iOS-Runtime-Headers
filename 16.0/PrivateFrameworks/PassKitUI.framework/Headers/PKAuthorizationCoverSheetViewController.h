// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAUTHORIZATIONCOVERSHEETVIEWCONTROLLER_H
#define PKAUTHORIZATIONCOVERSHEETVIEWCONTROLLER_H

@class UIViewController, PKAuthenticator, PKGlyphView, UIButton, UILabel, UIAccessibilityElement, NSString;
@protocol PKAuthenticatorDelegate, PKAuthorizationCoverSheetViewControllerDelegate;



@interface PKAuthorizationCoverSheetViewController : UIViewController <PKAuthenticatorDelegate>

 {
    PKAuthenticator *_authenticator;
    NSInteger _presentationSource;
    BOOL _isInvalid;
    BOOL _authenticating;
    BOOL _hasAttemptedBiometricAuth;
    BOOL _hasPresentedPasscodePrompt;
    NSInteger _coachingState;
    BOOL _shouldUIBeShown;
    BOOL _shouldDrawGlyph;
    NSUInteger _currentState;
    BOOL _isWaitingForPasscodeUI;
    id *_showPasscodeUICompletion;
    id *_performSynchronizedFadeInAnimationBlock;
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
@property (nonatomic) BOOL isErrorRecovery; // ivar: _isErrorRecovery
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_genericBiometricFailureLabelAccessibilityLabel:(BOOL)arg0 ;
-(id)_genericBiometricLabelAccessibilityLabel:(BOOL)arg0 ;
-(id)_genericBiometricUnavailableLabelAccessibilityLabel:(BOOL)arg0 ;
-(id)_passcodeLabelAccessibilityLabel:(BOOL)arg0 ;
-(id)initWithDelegate:(id)arg0 authenticator:(id)arg1 source:(NSInteger)arg2 ;
-(void)_animateInPasscodeViewController;
-(void)_fallbackToPasscode;
-(void)_presentPasscodeToExitLockout;
-(void)_transitionToState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)authenticator:(id)arg0 didTransitionToCoachingState:(NSInteger)arg1 ;
-(void)authenticator:(id)arg0 didTransitionToEvaluationStateWithEvent:(struct ? )arg1 ;
-(void)dealloc;
-(void)dismissPasscodeViewController;
-(void)fadeInUIAnimated:(BOOL)arg0 performSynchronizedAnimation:(id)arg1 ;
-(void)fadeOutUIWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)loadView;
// -(void)presentPasscodeViewController:(id)arg0 completionHandler:(id)arg1 reply:(unk)arg2  ;
-(void)startEvaluation;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif