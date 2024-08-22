// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSPAYMENTCONTAINERVIEW_H
#define PKPASSPAYMENTCONTAINERVIEW_H

@class PKPaymentService, PKAuthenticator, PKContactlessInterfaceSession, PKPeerPaymentService, PKContactResolver, LAUIPhysicalButtonView, UIView<PKPaymentDashboardCellActionHandleable>, UIView, NSString, PKPassLibrary, UIButton, NSData, NSMutableArray, UIViewController, NSNumber, PKTransitBalanceModel, NSArray, PKAssertion, PKPaymentTransaction, UITextView, PKMerchant;
@protocol PKPaymentServiceDelegate, PKAuthenticatorDelegate, PKPassPaymentPayStateViewDelegate, PKPassPaymentApplicationViewDelegate, PKContactlessInterfaceSessionDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver, PKPassTileGroupViewDelegate, PKTransactionAuthenticationPasscodeViewControllerDelegate, PKLinkedApplicationObserver, UITextViewDelegate, PKDataReleaseViewControllerDelegate, PKCompactNavigationContainerControllerDelegate, OS_dispatch_queue, UICoordinateSpace, OS_dispatch_source;


#import "PKPassFooterContentView.h"
#import "PKPassPaymentPayStateView.h"
#import "PKPeerPaymentAccountResolutionController.h"
#import "PKPassTileGroupView.h"
#import "PKPassPaymentApplicationView.h"
#import "PKPassValueAddedServiceInfoView.h"
#import "PKPaymentTransactionView.h"
#import "PKLinkedApplication.h"
#import "PKPaymentBarcodeViewController.h"
#import "PKDataReleaseViewController.h"

@interface PKPassPaymentContainerView : PKPassFooterContentView <PKPaymentServiceDelegate, PKAuthenticatorDelegate, PKPassPaymentPayStateViewDelegate, PKPassPaymentApplicationViewDelegate, PKContactlessInterfaceSessionDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver, PKPassTileGroupViewDelegate, PKTransactionAuthenticationPasscodeViewControllerDelegate, PKLinkedApplicationObserver, UITextViewDelegate, PKDataReleaseViewControllerDelegate, PKCompactNavigationContainerControllerDelegate>

 {
    PKPaymentService *_paymentService;
    PKAuthenticator *_authenticator;
    PKPassPaymentPayStateView *_payStateView;
    PKContactlessInterfaceSession *_contactlessInterfaceSession;
    BOOL _contactlessInterfaceSessionSuspended;
    BOOL _contactlessInterfaceSessionShared;
    NSObject<OS_dispatch_queue> *_authorizationQueue;
    PKPeerPaymentService *_peerPaymentService;
    PKContactResolver *_transactionFooterContactResolver;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    id<UICoordinateSpace> *_fixedScreenCoordinateSpace;
    LAUIPhysicalButtonView *_physicalButtonView;
    UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellPrimary;
    UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellSecondary;
    UIView<PKPaymentDashboardCellActionHandleable> *_dualValueCellPrimary;
    PKPassTileGroupView *_tileGroupView;
    UIView *_displayedPrimaryView;
    NSUInteger _contentUpdateCounter;
    NSString *_ignoringUpdatesFromTransactionIdentifier;
    PKPassLibrary *_passLibrary;
    PKPassPaymentApplicationView *_applicationsView;
    PKPassValueAddedServiceInfoView *_valueAddedServiceInfoView;
    UIButton *_actionButton;
    NSString *_pendingPayStateTextOverride;
    NSUInteger _payStateTransitionCounter;
    NSInteger _pendingPayState;
    BOOL _pendingPayStateAnimated;
    NSInteger _pendingPayStateGlyphState;
    BOOL _pendingPayStateGlyphStateAnimated;
    BOOL _pendingPayStateGlyphStateQueued;
    NSInteger _currentPayState;
    NSUInteger _authenticatorState;
    BOOL _authenticating;
    BOOL _userIntentRequired;
    NSInteger _userIntentStyle;
    NSInteger _authenticationEvaluationState;
    NSData *_authorizedExternalizedContext;
    BOOL _transitioning;
    NSMutableArray *_transitionCompletionHandlers;
    NSMutableArray *_pendingGlyphStateCompletionHandlers;
    BOOL _glyphStateDirty;
    BOOL _presentationWasForcedFromButton;
    BOOL _presentationWasForFieldDetect;
    BOOL _waitingForGlyphView;
    NSInteger _transactionSubstate;
    BOOL _holdingTerminalSubstate;
    NSObject<OS_dispatch_source> *_transactionResolutionTimer;
    NSObject<OS_dispatch_source> *_transactionTerminalResponseTimer;
    BOOL _presentingPasscode;
    BOOL _requiresPasscodeDismissal;
    UIViewController *_passcodeVC;
    ? _foregroundActiveState;
    unsigned int _deactivationReasons;
    BOOL _isVisible;
    BOOL _waitingForPasses;
    BOOL _VASInfoViewHidden;
    BOOL _VASInfoViewWillShow;
    BOOL _VASInfoViewSuppressedTransactionUpdate;
    CGFloat _lastFieldExitTime;
    BOOL _requireExpress;
    BOOL _pendingAutomaticAuthorization;
    NSNumber *_pendingPresentationContextState;
    CGFloat _lastTransactionTime;
    NSMutableArray *_valueAddedPasses;
    BOOL _didBecomeHiddenWhileAuthorized;
    PKTransitBalanceModel *_transitBalanceModel;
    NSArray *_tiles;
    NSString *_activeBarcodeIdentifier;
    NSData *_activeBarcodeCredential;
    PKAssertion *_userNotificationSupressionAssertion;
    NSObject<OS_dispatch_source> *_barcodeDisplayTimer;
    BOOL _transactionAuthenticationInProgress;
    BOOL _transactionAuthenticationUIActive;
    UIViewController *_activeTransactionAuthenticationViewController;
    PKPaymentTransactionView *_transactionAwardsView;
    PKPaymentTransaction *_transactionForDisplayedBarcode;
    UITextView *_bottomTextView;
    BOOL _bottomTextViewAnimating;
    BOOL _bottomTextViewNeedsUpdate;
    CGFloat _bottomTextViewDisplayedTimestamp;
    PKLinkedApplication *_linkedApplication;
    NSMutableArray *_linkedApplicationUpdateCompletionHandlers;
    BOOL _collectingBarcodeEventMetadata;
    PKPaymentBarcodeViewController *_barcodeViewController;
    PKDataReleaseViewController *_dataReleaseVC;
    NSInteger _failureAction;
    NSInteger _failureReason;
    PKMerchant *_merchantForCurrentTransaction;
    BOOL _sessionExchangeActive;
    NSData *_sessionExchangeToken;
    NSMutableArray *_sessionExchangeTaskQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_initialUserIntentRequiredAssumptionForPass:(id)arg0 context:(id)arg1 paymentService:(id)arg2 requirePhysicalButton:(BOOL)arg3 ;
+(BOOL)initialPhysicalButtonRequiredAssumptionForPass:(id)arg0 context:(id)arg1 paymentService:(id)arg2 ;
+(BOOL)initialUserIntentRequiredAssumptionForPass:(id)arg0 context:(id)arg1 paymentService:(id)arg2 ;
+(BOOL)shouldAutomaticallyAuthorizeForPass:(id)arg0 withContext:(id)arg1 ;
+(BOOL)userIntentPotentiallyRequiredForPass:(id)arg0 fieldDetect:(BOOL)arg1 ;
-(BOOL)_authenticationAllowed;
-(BOOL)_canAuthenticateWithBiometrics;
-(BOOL)_canAuthenticateWithPasscode;
-(BOOL)_canDisplaySecondaryView;
-(BOOL)_hasValueAddedServicePasses;
-(BOOL)_isBackgrounded;
-(BOOL)_isDeactivated;
-(BOOL)_isForegroundActive;
-(BOOL)_isPrimaryViewVisible;
-(BOOL)_isSecondaryViewVisible;
-(BOOL)_isVASInfoViewVisible;
-(BOOL)_recognizingBiometrics;
-(BOOL)_restartPaymentAuthorization;
-(BOOL)_shouldDisplayPrimaryView;
-(BOOL)_shouldDisplaySecondaryView;
-(BOOL)_shouldShowTerminalIsNotRequestingPaymentError;
-(BOOL)_showGlyphForPayState:(NSInteger)arg0 ;
-(BOOL)_showPhysicalButtonForPayState:(NSInteger)arg0 ;
-(BOOL)isPassAuthorized;
-(BOOL)passOnlySupportsPassiveEntry;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)_topMargin;
-(NSUInteger)_actionAfterTransaction;
-(id)_attributedStringForBottomTextViewFromString:(id)arg0 ;
-(id)_buttonForState:(NSInteger)arg0 ;
-(id)_emphasisButtonForState:(NSInteger)arg0 ;
-(id)_filledButtonWithTitle:(id)arg0 action:(id)arg1 ;
-(id)_findOrCreateSecondaryView;
-(id)_passcodeButtonTitle;
-(id)_textOverrideForFatalError;
-(id)initWithPass:(id)arg0 ;
-(id)initWithPass:(id)arg0 context:(id)arg1 paymentSession:(id)arg2 paymentService:(id)arg3 ;
-(void)_activateForPayment;
-(void)_activateForPaymentWithApplication:(id)arg0 ;
-(void)_activatePaymentApplication:(id)arg0 forPaymentPass:(id)arg1 withCompletion:(id)arg2 ;
-(void)_addPasscodeButtonPressed:(id)arg0 ;
-(void)_addTransitionCompletionHandler:(id)arg0 ;
-(void)_applyLatestContentToViews;
-(void)_applyPayState:(NSInteger)arg0 ;
-(void)_applyPayState:(NSInteger)arg0 withTextOverride:(id)arg1 ;
-(void)_applyPayState:(NSInteger)arg0 withTextOverride:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_applyPayState:(NSInteger)arg0 withTextOverride:(id)arg1 completionHandler:(id)arg2 ;
-(void)_applyPaymentIndefiniteSuccessState;
-(void)_applyPresentationPayState:(NSInteger)arg0 ;
-(void)_applyTerminalFailureState;
-(void)_applyTerminalTransactionSubstateWithSuccess:(BOOL)arg0 reset:(BOOL)arg1 ;
-(void)_applyTerminalTransactionSubstateWithSuccess:(BOOL)arg0 reset:(BOOL)arg1 errorOverride:(id)arg2 ;
-(void)_authorizeForTransactionWithAuthenticatorEvaluationResponse:(id)arg0 authenticationIdentifier:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_beginBarcodeDisplayTimer;
-(void)_beginPaymentAuthorization;
-(void)_beginSessionExchange:(id)arg0 ;
-(void)_beginTerminalResponseTimeout;
-(void)_calculateTerminalStateWithRangingSuspensionReasons:(NSUInteger)arg0 ;
-(void)_cancelAuthentication;
-(void)_cancelBarcodeDisplayTimer;
-(void)_cancelHoldingTerminalTransactionSubstateIfNecessary;
-(void)_cancelTerminalResponseTimeout;
-(void)_cancelTransactionAuthentication;
-(void)_clearSessionExchangeTasks;
-(void)_collectAndSubmitBarcodeEventMetadataWithAuthenticationType:(NSInteger)arg0 ;
-(void)_commitPendingPayStateAnimated:(BOOL)arg0 ;
-(void)_configureForPaymentWithPaymentPass:(id)arg0 context:(id)arg1 ;
-(void)_configureForStyle:(NSInteger)arg0 context:(id)arg1 ;
-(void)_configureForValueAddedServiceWithPass:(id)arg0 context:(id)arg1 ;
-(void)_didAuthorizePaymentApplicationWithAuthenticationIdentifier:(NSUInteger)arg0 ;
-(void)_didInvalidate;
-(void)_dismissBarcodeViewControllerIfNecessaryWithCompletion:(id)arg0 ;
-(void)_dismissTransactionAuthenticationPasscodeViewController:(id)arg0 withCompletion:(id)arg1 ;
-(void)_emphasizeStateIfPossible:(NSInteger)arg0 withTextOverride:(id)arg1 ;
-(void)_emphasizeStateIfPossible:(NSInteger)arg0 withTextOverride:(id)arg1 playSystemSound:(BOOL)arg2 ;
-(void)_endContactlessPaymentSession;
-(void)_endPaymentAuthorizationWithWillUpdateState:(BOOL)arg0 ;
-(void)_endSessionExchange;
-(void)_endTransition:(BOOL)arg0 ;
-(void)_executeNextSessionExchangeTask;
-(void)_executePendingGlyphStateCompletionHandlers:(BOOL)arg0 ;
-(void)_executeTransitionCompletionHandlers:(BOOL)arg0 ;
-(void)_fetchBarcodeForPassUniqueIdentifier:(id)arg0 shouldReregisterIfNecessary:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_finishHoldingTerminalTransactionSubstateAfterDelay:(CGFloat)arg0 ;
-(void)_handleContactlessInterfaceSessionDidEnterField:(id)arg0 withProperties:(id)arg1 ;
-(void)_handleReceivedBarcodePaymentTransaction:(id)arg0 ;
-(void)_insertPaymentTransactionForActiveBarcode;
-(void)_openURL:(id)arg0 ;
-(void)_passcodeFallbackButtonPressed:(id)arg0 ;
-(void)_performActivationStateUpdate:(id)arg0 ;
-(void)_performApplicationRedirectForTransaction:(id)arg0 ;
-(void)_performAuthentication;
-(void)_performAuthenticationForTransactionIfNecessary:(id)arg0 ;
-(void)_performPaymentPINCollectionForTransaction:(id)arg0 ;
-(void)_performTransactionSignatureSubmissionForTransaction:(id)arg0 ;
-(void)_performUserConfirmationForTransaction:(id)arg0 ;
-(void)_postDidAuthorizeNotification;
-(void)_postDidDeauthorizeNotification;
-(void)_presentPassWithUniqueIdentifier:(id)arg0 additionalPassUniqueIdentifiers:(id)arg1 ;
-(void)_presentPassWithUniqueIdentifier:(id)arg0 additionalPassUniqueIdentifiers:(id)arg1 payState:(NSInteger)arg2 ;
-(void)_processPaymentTransactionForContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)_processValueAddedServiceTransactionsForContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)_promoteToAuthorizedStateIfPossible;
-(void)_reregisterAuxiliaryCapabilityForPassUniqueIdentifier:(id)arg0 withCompletion:(id)arg1 ;
-(void)_resetActiveApplicationForPaymentPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)_resetCardEmulationWithCompletion:(id)arg0 ;
-(void)_resetToIdleState;
-(void)_resetToIdleStateAfterDelay:(CGFloat)arg0 ;
-(void)_resetTransactionAuthenticationIfNecessary;
-(void)_retrieveDecryptedBarcodeWithAuthorization:(id)arg0 shouldFetchBarcodeIfNecessary:(BOOL)arg1 completion:(id)arg2 ;
-(void)_setGlyphState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_setGlyphState:(NSInteger)arg0 animated:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)_setTransactionAuthenticationInProgress:(BOOL)arg0 ;
-(void)_setTransactionAuthenticationUIActive:(BOOL)arg0 ;
-(void)_setUserIntentRequired:(BOOL)arg0 ;
-(void)_setUserIntentStyle:(NSInteger)arg0 ;
-(void)_setVASInfoViewHidden:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_setValueAddedServicePasses:(id)arg0 ;
-(void)_showEmphasisButtonForStateIfPossible:(NSInteger)arg0 ;
-(void)_showInstallAssociatedApplicationInstructionsIfNecessary;
-(void)_showTerminalIsNotRequestingPaymentError;
-(void)_showTerminalIsRequestingPaymentError;
-(void)_submitEncryptedPIN:(id)arg0 forTransactionIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)_submitSignatureForTransactionIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_submitUserConfirmation:(BOOL)arg0 forTransactionIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)_transactionAwardsViewTapped:(id)arg0 ;
-(void)_transitionToState:(NSInteger)arg0 withTextOverride:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_transitionViewsFromPayState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateApplicationsView;
-(void)_updateAuthenticatorState;
-(void)_updateBottomTextView;
-(void)_updateCoachingInstruction;
-(void)_updateContentPrimaryView;
-(void)_updateContentSecondaryView;
-(void)_updatePhysicalButtonRequirement;
-(void)_updateVASInfoViewSuppressedTransactionIfNecessary;
-(void)authenticator:(id)arg0 didTransitionToCoachingState:(NSInteger)arg1 ;
-(void)authenticator:(id)arg0 didTransitionToEvaluationStateWithEvent:(struct ? )arg1 ;
-(void)coachingStateDidChange;
-(void)compactNavigationContainerControllerReceivedExternalTap:(id)arg0 ;
-(void)contactlessInterfaceSession:(id)arg0 didEndPersistentCardEmulationWithContext:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg0 didFinishTransactionWithContext:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg0 didReceive18013Request:(id)arg1 readerAuthInfo:(id)arg2 ;
-(void)contactlessInterfaceSession:(id)arg0 didReceiveExpressState:(NSUInteger)arg1 expressTransactionEvent:(NSUInteger)arg2 ;
-(void)contactlessInterfaceSession:(id)arg0 didSuspendWithToken:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg0 didTransitionFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)contactlessInterfaceSessionDidEnterField:(id)arg0 withProperties:(id)arg1 ;
-(void)contactlessInterfaceSessionDidExitField:(id)arg0 ;
-(void)contactlessInterfaceSessionDidFail:(id)arg0 forPaymentApplication:(id)arg1 paymentPass:(id)arg2 valueAddedServicePasses:(id)arg3 ;
-(void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)arg0 ;
-(void)contactlessInterfaceSessionDidFailTransaction:(id)arg0 forPaymentApplication:(id)arg1 paymentPass:(id)arg2 ;
-(void)contactlessInterfaceSessionDidReceiveActivityTimeout:(id)arg0 ;
-(void)contactlessInterfaceSessionDidReceiveUntrustedTerminal:(id)arg0 ;
-(void)contactlessInterfaceSessionDidResume:(id)arg0 ;
-(void)contactlessInterfaceSessionDidSelectPayment:(id)arg0 ;
-(void)contactlessInterfaceSessionDidStartTransaction:(id)arg0 ;
-(void)contactlessInterfaceSessionDidTerminate:(id)arg0 ;
-(void)contactlessInterfaceSessionDidTerminate:(id)arg0 withErrorCode:(NSUInteger)arg1 ;
-(void)contactlessInterfaceSessionDidTimeout:(id)arg0 forPaymentApplication:(id)arg1 paymentPass:(id)arg2 valueAddedServicePasses:(id)arg3 ;
-(void)contactlessInterfaceSessionHasPendingServerRequest:(id)arg0 ;
-(void)credential:(id)arg0 forPaymentApplication:(id)arg1 didUpdateRangingSuspensionReasons:(NSUInteger)arg2 ;
-(void)dataReleaseViewController:(id)arg0 didAuthorizeWithExternalAuthorizationData:(id)arg1 dataToRelease:(id)arg2 ;
-(void)dataReleaseViewController:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)dataReleaseViewController:(id)arg0 didResolveToMerchant:(id)arg1 ;
-(void)dealloc;
-(void)didBecomeHiddenAnimated:(BOOL)arg0 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg0 ;
-(void)dismissPasscodeViewController;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateDeactivationReasons:(unsigned int)arg1 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)layoutSubviews;
-(void)linkedApplicationDidChangeState:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)passTileGroupView:(id)arg0 executeSEActionForPass:(id)arg1 tile:(id)arg2 withCompletion:(id)arg3 ;
-(void)passWithUniqueIdentifier:(id)arg0 didUpdateTiles:(id)arg1 ;
-(void)passcodeViewController:(id)arg0 didGenerateEncryptedPasscode:(id)arg1 ;
-(void)passcodeViewController:(id)arg0 requestSessionExchangeTokenWithHandler:(id)arg1 ;
-(void)passcodeViewControllerDidCancel:(id)arg0 ;
-(void)passcodeViewControllerDidEndSessionExchange:(id)arg0 ;
-(void)payStateView:(id)arg0 revealingCheckmark:(BOOL)arg1 ;
-(void)payStateViewDidUpdateLayout:(id)arg0 ;
-(void)paymentApplicationView:(id)arg0 didSelectApplication:(id)arg1 completion:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)paymentServiceReceivedInterruption;
// -(void)presentPasscodeViewController:(id)arg0 completionHandler:(id)arg1 reply:(unk)arg2  ;
-(void)showFullScreenBarcode;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg0 ;
-(void)willBecomeVisibleAnimated:(BOOL)arg0 ;


@end


#endif