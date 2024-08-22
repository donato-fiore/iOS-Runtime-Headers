// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONTINUITYPAYMENTVIEWCONTROLLER_H
#define PKCONTINUITYPAYMENTVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, UIView, LAUIPhysicalButtonView, UILabel, UIStackView, NSArray, PKAuthenticator, PKPaymentAuthorizationStateMachine, NSTimer, NSString, PKRemotePaymentRequest;
@protocol PKAuthenticatorDelegate, PKPaymentAuthorizationFooterViewDelegate, PKPaymentAuthorizationStateMachineDelegate, PKPaymentAuthorizationHostProtocol;


#import "PKContinuityPaymentCardSummaryView.h"
#import "PKPaymentAuthorizationFooterView.h"
#import "PKContinuityPaymentFaviconView.h"

@interface PKContinuityPaymentViewController : UIViewController <PKAuthenticatorDelegate, PKPaymentAuthorizationFooterViewDelegate, PKPaymentAuthorizationStateMachineDelegate>

 {
    UIVisualEffectView *_backdropView;
    UIView *_dimmingBackgroundView;
    UIView *_compactRegion;
    LAUIPhysicalButtonView *_physicalButtonView;
    UILabel *_requestingDeviceLabel;
    UILabel *_requestingSiteLabel;
    UILabel *_priceLabel;
    UILabel *_footnoteLabel;
    UIView *_priceView;
    UIStackView *_summaryContainerView;
    PKContinuityPaymentCardSummaryView *_cardView;
    PKPaymentAuthorizationFooterView *_authorizationView;
    PKContinuityPaymentFaviconView *_faviconImage;
    UIViewController *_passcodeViewController;
    UIViewController *_passphraseViewController;
    BOOL _viewAppeared;
    BOOL _userIntentRequired;
    NSInteger _userIntentStyle;
    NSInteger _internalAuthenticationEvaluationState;
    BOOL _idleStateIsPasscode;
    NSInteger _coachingState;
    NSInteger _internalCoachingState;
    NSArray *_activeConstraints;
    NSArray *_defaultConstraints;
    NSArray *_compactConstraints;
    BOOL _authenticating;
    PKAuthenticator *_authenticator;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    NSTimer *_timeoutTimer;
    BOOL _attemptedTimeout;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationHostProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKRemotePaymentRequest *remoteRequest; // ivar: _remoteRequest
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_updateActiveConstraints;
-(BOOL)paymentAuthorizationStateMachine:(id)arg0 didTransitionFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 withParam:(id)arg3 ;
-(BOOL)paymentPass:(*id)arg0 paymentApplication:(*id)arg1 fromAID:(id)arg2 selectedPaymentMethodType:(NSUInteger)arg3 ;
-(NSInteger)_authenticatorPolicy;
-(NSInteger)_progressStateForAuthenticationWithBiometricFailure:(BOOL)arg0 ;
-(id)_evaluationRequestWithHasInitialAuthenticatorState:(BOOL)arg0 initialAuthenticatorState:(NSUInteger)arg1 ;
-(id)_formattedDateRangeWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)init;
-(id)initWithRemotePaymentRequest:(id)arg0 ;
-(void)_cancelPassphrasePressed;
-(void)_didCancel;
-(void)_didFailWithError:(id)arg0 ;
-(void)_didFailWithFatalError:(id)arg0 ;
-(void)_didSucceedWithAuthorizationStateParam:(id)arg0 ;
-(void)_invalidPaymentDataWithParam:(id)arg0 ;
-(void)_layoutAnimated;
-(void)_processClientCallback:(id)arg0 ;
-(void)_resetAndScheduleTimeout;
-(void)_resumeAuthenticationWithPreviousError:(id)arg0 ;
-(void)_setAuthenticating:(BOOL)arg0 ;
-(void)_setPasscodeViewController:(id)arg0 ;
-(void)_setPassphraseViewController:(id)arg0 ;
-(void)_setUserIntentRequired:(BOOL)arg0 ;
-(void)_startEvaluationWithHasInitialAuthenticatorState:(BOOL)arg0 initialAuthenticatorState:(NSUInteger)arg1 ;
-(void)_suspendAuthentication;
-(void)_timeoutFired;
-(void)_updateCardView;
-(void)_updateCoachingState;
-(void)_updateFootnoteLabelWithTotalSummaryItem:(id)arg0 ;
-(void)_updatePendingTransaction:(id)arg0 withAuthorizationStateParam:(id)arg1 ;
-(void)_updatePriceLabelWithTotalSummaryItem:(id)arg0 ;
-(void)_updateProgressStateIfAuthenticatingWithBiometricFailure:(BOOL)arg0 ;
-(void)_updateUserIntentRequired;
-(void)_updateUserIntentStyle;
-(void)authenticator:(id)arg0 didTransitionToCoachingState:(NSInteger)arg1 ;
-(void)authenticator:(id)arg0 didTransitionToEvaluationStateWithEvent:(struct ? )arg1 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg0 ;
-(void)authorizationFooterViewDidChangeConstraints:(id)arg0 ;
-(void)authorizationFooterViewPasscodeButtonPressed:(id)arg0 ;
-(void)cancelPressed:(id)arg0 ;
-(void)dealloc;
-(void)dismissPasscodeViewController;
-(void)dismissPassphraseViewController;
-(void)invalidate;
-(void)loadView;
// -(void)presentPasscodeViewController:(id)arg0 completionHandler:(id)arg1 reply:(unk)arg2  ;
// -(void)presentPassphraseViewController:(id)arg0 completionHandler:(id)arg1 reply:(unk)arg2  ;
-(void)setProgressState:(NSInteger)arg0 string:(id)arg1 animated:(BOOL)arg2 ;
-(void)setProgressState:(NSInteger)arg0 string:(id)arg1 animated:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePaymentWithClientUpdate:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif