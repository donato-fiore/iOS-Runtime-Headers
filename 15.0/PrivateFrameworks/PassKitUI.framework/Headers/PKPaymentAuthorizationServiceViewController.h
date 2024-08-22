// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTAUTHORIZATIONSERVICEVIEWCONTROLLER_H
#define PKPAYMENTAUTHORIZATIONSERVICEVIEWCONTROLLER_H

@class UIViewController, UIView, UITableView, NSLayoutConstraint, UIBarButtonItem, PKPeerPaymentAccount, NSMutableSet, CNContact, PKContactFormatValidator, PKAuthenticator, NSString, PKPaymentAuthorizationStateMachine;
@protocol UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, PKPaymentAuthorizationFooterViewDelegate, PKAuthenticatorDelegate, PKPaymentAuthorizationStateMachineDelegate, PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate, AKSignInViewControllerDelegate, AKAppleIDAuthenticationInAppContextDelegate, PKPaymentAuthorizationServiceProtocol, PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol;


#import "PKPaymentAuthorizationLayout.h"
#import "PKPaymentAuthorizationSummaryItemsView.h"
#import "PKPaymentAuthorizationTotalView.h"
#import "PKPaymentAuthorizationFooterView.h"
#import "PKPaymentAuthorizationPasswordButtonView.h"
#import "PKPaymentPreferencesViewController.h"
#import "PKPaymentAuthorizationCouponCodeEntryViewController.h"

@interface PKPaymentAuthorizationServiceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, PKPaymentAuthorizationFooterViewDelegate, PKAuthenticatorDelegate, PKPaymentAuthorizationStateMachineDelegate, PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate, AKSignInViewControllerDelegate, AKAppleIDAuthenticationInAppContextDelegate, PKPaymentAuthorizationServiceProtocol>

 {
    PKPaymentAuthorizationLayout *_layout;
    UIView *_contentView;
    UITableView *_detailTableView;
    PKPaymentAuthorizationSummaryItemsView *_summaryItemsView;
    NSLayoutConstraint *_summaryHeightConstraint;
    PKPaymentAuthorizationTotalView *_totalView;
    PKPaymentAuthorizationFooterView *_footerView;
    PKPaymentAuthorizationPasswordButtonView *_passwordButtonView;
    NSLayoutConstraint *_passphraseBottomConstraint;
    BOOL _needsToAccommodateKeyboard;
    UIBarButtonItem *_cancelBarButtonItem;
    BOOL _cancelButtonDisabled;
    BOOL _scrollIndicatorShown;
    UIView *_passphraseSeparatorView;
    NSLayoutConstraint *_contentViewRightConstraint;
    PKPaymentPreferencesViewController *_shippingMethodPreferencesController;
    PKPaymentPreferencesViewController *_shippingAddressPreferencesController;
    PKPaymentPreferencesViewController *_shippingContactPreferencesController;
    PKPaymentPreferencesViewController *_paymentCardPreferencesController;
    PKPaymentPreferencesViewController *_bankAccountPreferencesController;
    PKPaymentAuthorizationCouponCodeEntryViewController *_couponCodeEntryViewController;
    BOOL _viewAppeared;
    BOOL _visible;
    BOOL _authenticating;
    BOOL _allowCompactProcessing;
    BOOL _allowBiometricPhysicalButtonInstruction;
    BOOL _useBiometricPhysicalButtonInstruction;
    BOOL _physicalButtonVisibleOnce;
    unsigned char _visibility;
    BOOL _keyboardVisible;
    CGRect _keyboardFrame;
    CGRect _lastKeyboardFrame;
    unsigned short _layoutRecursionCounter;
    NSInteger _userIntentStyle;
    NSInteger _internalAuthenticationEvaluationState;
    BOOL _idleStateIsPasscode;
    unsigned int _faceIDCameraEdge;
    BOOL _showPoseOutOfRangeDownCoaching;
    NSInteger _internalCoachingState;
    UIViewController *_passcodeViewController;
    UIViewController *_passphraseViewController;
    BOOL _hostApplicationResignedActive;
    BOOL _hostApplicationEnteredBackground;
    BOOL _treatingHostAsBackgrounded;
    BOOL _bypassAuthenticator;
    BOOL _isPad;
    BOOL _isAMPPayment;
    BOOL _isInstallment;
    BOOL _isPaymentSummaryPinned;
    BOOL _needsFinalCallback;
    NSInteger _preferencesStyle;
    *__IOHIDEventSystemClient _hidSystemClient;
    NSUInteger _biometryAttempts;
    PKPeerPaymentAccount *_peerPaymentAccount;
    BOOL _peerPaymentBalanceIsInsufficient;
    NSMutableSet *_completionHandlers;
    CNContact *_lastUnservicableAddress;
    CGFloat _authenticatorFingerOnTime;
    PKContactFormatValidator *_contactFormatValidator;
}


@property (retain, nonatomic) PKAuthenticator *authenticator; // ivar: _authenticator
@property (readonly, nonatomic) BOOL blockingHardwareCancels; // ivar: _blockingHardwareCancels
@property (readonly, nonatomic) NSInteger coachingState; // ivar: _coachingState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger physicalButtonAnimationStyle; // ivar: _physicalButtonAnimationStyle
@property (readonly, nonatomic) NSString *physicalButtonInstruction; // ivar: _physicalButtonInstruction
@property (readonly, nonatomic) NSInteger physicalButtonState; // ivar: _physicalButtonState
@property (retain, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


-(BOOL)_abandonActiveEnrollmentAttempts;
-(BOOL)_passcodeAllowed;
-(BOOL)_passwordRequired;
-(BOOL)_setNavigationItemLeftItemFromNavigationTitle;
-(BOOL)_shouldShowSeparatorForRowAtIndexPath:(id)arg0 ;
-(BOOL)_shouldShowUsePeerPaymentBalanceToggle;
-(BOOL)paymentAuthorizationStateMachine:(id)arg0 didTransitionFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 withParam:(id)arg3 ;
-(BOOL)signInViewController:(id)arg0 shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContext:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)_tableViewClassForDataItem:(id)arg0 ;
-(Class)_viewPresenterClassForDataItem:(id)arg0 ;
-(NSInteger)_progressStateForAuthenticationWithBiometricFailure:(BOOL)arg0 ;
-(NSInteger)_totalViewStyle;
-(NSInteger)selectedPaymentApplicationIndexFromCardEntries:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_addCardEntry;
-(id)_availabilityStringForPass:(id)arg0 ;
-(id)_availablePasses;
-(id)_compactNavigationController;
-(id)_evaluationRequestWithHasInitialAuthenticatorState:(BOOL)arg0 initialAuthenticatorState:(NSUInteger)arg1 ;
-(id)_unavailablePasses;
-(id)dataItemForPaymentAuthorizationCouponCodeEntryViewController:(id)arg0 ;
-(id)handlePaymentRequest:(id)arg0 fromAppWithLocalizedName:(id)arg1 andApplicationIdentifier:(id)arg2 ;
-(id)handlePaymentRequest:(id)arg0 relevantPassUniqueID:(id)arg1 fromAppWithLocalizedName:(id)arg2 applicationIdentifier:(id)arg3 bundleIdentifier:(id)arg4 teamIdentifier:(id)arg5 ;
-(id)initWithLayout:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_abandonPSD2StyleAMPBuy;
-(void)_addPassphraseViewControllerToHierarchy:(id)arg0 withCompletion:(id)arg1 ;
-(void)_createSubviews;
-(void)_didCancel:(BOOL)arg0 ;
-(void)_didFailWithError:(id)arg0 ;
-(void)_didFailWithFatalError:(id)arg0 ;
-(void)_didSucceedWithAuthorizationStateParam:(id)arg0 ;
-(void)_executeCompletionHandlers;
-(void)_handleModelUpdate;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(void)_invalidPaymentDataWithParam:(id)arg0 ;
-(void)_payWithPasswordPressed:(id)arg0 ;
-(void)_processClientCallback:(id)arg0 ;
-(void)_removePassphraseViewFromHierarchyWithCompletionHandler:(id)arg0 ;
-(void)_removeSimulatorHIDListener;
-(void)_resumeAuthenticationWithPreviousError:(id)arg0 animated:(BOOL)arg1 ;
-(void)_selectOptionsForDataItem:(id)arg0 ;
-(void)_sendDidEncounterAuthorizationEventIfNecessary:(NSUInteger)arg0 ;
-(void)_setAuthenticating:(BOOL)arg0 ;
-(void)_setNavigationItemLeftItemForAMP;
-(void)_setPasscodeViewController:(id)arg0 ;
-(void)_setPassphraseViewController:(id)arg0 ;
-(void)_setVisibility:(unsigned char)arg0 ;
-(void)_setVisible:(BOOL)arg0 ;
-(void)_setupBankAccounts;
-(void)_setupCouponCodeEntry;
-(void)_setupPaymentPassAndBillingAddress;
-(void)_setupShippingAddress;
-(void)_setupShippingContact;
-(void)_setupShippingMethods;
-(void)_setupWithPaymentRequest:(id)arg0 relevantPassUniqueID:(id)arg1 fromAppWithLocalizedName:(id)arg2 applicationIdentifier:(id)arg3 bundleIdentifier:(id)arg4 teamIdentifier:(id)arg5 ;
-(void)_showScrollIndicatorIfNeeded;
-(void)_showUnservicableAddressAlertForErrors:(id)arg0 ;
-(void)_startEvaluationWithHasInitialAuthenticatorState:(BOOL)arg0 initialAuthenticatorState:(NSUInteger)arg1 ;
-(void)_startSimulatorHIDListener;
-(void)_suspendAuthentication;
-(void)_suspendAuthenticationAndForceReset:(BOOL)arg0 ;
-(void)_updateAvailableCardsPreferences;
-(void)_updateBackgroundedState:(BOOL)arg0 ;
-(void)_updateBankAccounts;
-(void)_updateCancelButtonEnabledForState:(NSUInteger)arg0 param:(id)arg1 ;
-(void)_updateCoachingState;
-(void)_updateCouponCodeEntry;
-(void)_updateFooterStateIfAuthenticatingWithBiometricFailure:(BOOL)arg0 ;
-(void)_updateLayoutForKeyboardAction:(id)arg0 ;
-(void)_updatePendingTransaction:(id)arg0 withAuthorizationStateParam:(id)arg1 ;
-(void)_updatePhysicalButtonInstructionAndNotify:(BOOL)arg0 ;
-(void)_updatePhysicalButtonState;
-(void)_updatePreferencesWithErrors:(id)arg0 ;
-(void)_updatePreferredContentSize;
-(void)_updateShippingMethods;
-(void)_updateUserIntentStyle;
-(void)authenticator:(id)arg0 didTransitionToCoachingState:(NSInteger)arg1 ;
-(void)authenticator:(id)arg0 didTransitionToEvaluationStateWithEvent:(struct ? )arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizeCashDisbursementWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(NSInteger)arg0 ;
-(void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg0 signatureRequest:(id)arg1 ;
-(void)authorizationFooterViewDidChangeConstraints:(id)arg0 ;
-(void)authorizationFooterViewPasscodeButtonPressed:(id)arg0 ;
-(void)authorizationFooterViewWillChangeConstraints:(id)arg0 ;
-(void)biometricAttemptFailed;
-(void)cancelPressed:(id)arg0 ;
-(void)contextWillBeginPresentingSecondaryUI:(id)arg0 ;
-(void)dealloc;
-(void)dismissPasscodeViewController;
-(void)dismissPassphraseViewController;
-(void)dismissPassphraseViewControllerWithCompletion:(id)arg0 ;
-(void)handleDismissWithCompletion:(id)arg0 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)handleHostApplicationDidCancel;
-(void)handleHostApplicationWillResignActive:(BOOL)arg0 ;
-(void)invalidate;
-(void)keyboardWillChange:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)paymentAuthorizationCouponCodeEntryViewController:(id)arg0 didChangeCouponCode:(id)arg1 ;
-(void)paymentAuthorizationCouponCodeEntryViewControllerDidFinish:(id)arg0 ;
// -(void)presentPasscodeViewController:(id)arg0 completionHandler:(id)arg1 reply:(unk)arg2  ;
// -(void)presentPassphraseViewController:(id)arg0 completionHandler:(id)arg1 reply:(unk)arg2  ;
-(void)resumeAndUpdateContentSize;
-(void)setFooterState:(NSInteger)arg0 string:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFooterState:(NSInteger)arg0 string:(id)arg1 animated:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)signInViewController:(id)arg0 didAuthenticateWithResults:(id)arg1 error:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif