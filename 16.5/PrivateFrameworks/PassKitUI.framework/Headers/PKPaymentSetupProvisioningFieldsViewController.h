// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPPROVISIONINGFIELDSVIEWCONTROLLER_H
#define PKPAYMENTSETUPPROVISIONINGFIELDSVIEWCONTROLLER_H

@class RemoteUIController, CLInUseAssertion, UINotificationFeedbackGenerator, NSTimer, NSString, PKPaymentProvisioningTracker, PKPaymentProvisioningController;
@protocol UITextFieldDelegate, RemoteUIControllerDelegate, PKPaymentVerificationControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol;


#import "PKPaymentSetupFieldsViewController.h"
#import "PKPaymentSetupFooterView.h"
#import "PKPaymentVerificationController.h"
#import "PKPasscodeUpgradeFlowController.h"

@interface PKPaymentSetupProvisioningFieldsViewController : PKPaymentSetupFieldsViewController <UITextFieldDelegate, RemoteUIControllerDelegate, PKPaymentVerificationControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol>

 {
    PKPaymentSetupFooterView *_cardDetailsFooterView;
    RemoteUIController *_termsUIController;
    CLInUseAssertion *_CLInUse;
    BOOL _termsPresented;
    UINotificationFeedbackGenerator *_cardAddedFeedbackGenerator;
    PKPaymentVerificationController *_verificationController;
    BOOL _waitForActivation;
    id *_waitForActivationCompletionHandler;
    NSTimer *_waitForActivationTimer;
    NSString *_activatingPaymentPassUniqueID;
    PKPaymentProvisioningTracker *_provisioningTracker;
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
}


@property (copy, nonatomic) id *continueActionHandler; // ivar: _continueActionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideSetupLaterButton; // ivar: _hideSetupLaterButton
@property (nonatomic) BOOL ignoreProgressDescriptionUpdates; // ivar: _ignoreProgressDescriptionUpdates
@property (retain, nonatomic) PKPaymentProvisioningController *paymentProvisioningController; // ivar: _paymentProvisioningController
@property (readonly, nonatomic, getter=isProvisioningHomeKey) BOOL provisioningHomeKey; // ivar: _provisioningHomeKey
@property (readonly) Class superclass;


-(BOOL)_shouldShowVerificationMethodsForPass:(id)arg0 ;
-(id)_cardDetailsFooterView;
-(id)defaultFields;
-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)footerView;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 ;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 setupFieldsModel:(id)arg3 ;
-(id)initWithWebService:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 setupFieldsModel:(id)arg3 ;
-(id)newPaymentEligibilityRequest;
-(id)newPaymentProvisioningRequest;
-(id)newPaymentRequirementsRequest;
-(id)presentationContext;
-(id)requiredFieldsForCredential:(id)arg0 ;
-(void)_cleanupWaitForActivation;
-(void)_didActivatePaymentPass:(id)arg0 ;
-(void)_handleNextCredentialWithPresentationDelay:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_handlePassesSuccessfullyAdded:(id)arg0 ;
-(void)_logNormalizedLevenshteinDistanceFromString:(id)arg0 toField:(id)arg1 forKey:(id)arg2 onQueue:(id)arg3 ;
-(void)_passLibraryDidChange:(id)arg0 ;
-(void)_performEligibilityWithCompletion:(id)arg0 ;
-(void)_performFinishWithCompletion:(id)arg0 ;
-(void)_performProvisionWithCompletion:(id)arg0 ;
-(void)_performTermsWithCompletion:(id)arg0 ;
-(void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg0 ;
-(void)_provisioningStateDidChange:(id)arg0 ;
-(void)_requestWaitForActivation:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_showAddToWatchOfferForPass:(id)arg0 ;
-(void)_showVerificationMethodsForPass:(id)arg0 ;
-(void)_showVerifiedUIForPass:(id)arg0 ;
-(void)_waitForActivation:(id)arg0 ;
-(void)_waitForActivationDidTimeout:(id)arg0 ;
-(void)acceptTerms;
-(void)addDifferentCard:(id)arg0 ;
-(void)dealloc;
-(void)declineTerms;
-(void)dismissVerificationViewControllerAnimated:(BOOL)arg0 ;
-(void)displayTermsForEligibility:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)displayTermsForTermsURL:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)handleNextActionError:(id)arg0 shouldContinue:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)handleNextActionWithCompletion:(id)arg0 ;
-(void)handleNextButtonTapped:(id)arg0 ;
-(void)handlePassesSuccessfullyAdded:(id)arg0 completion:(id)arg1 ;
-(void)performNextActionForProvisioningState:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)performPasscodeUpgradeIfNeeded:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentVerificationViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)requestEligibility:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)requestProvisioning:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)requestRequirements:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)resetAllFieldsAndProvisioningState;
-(void)resetProvisioningState;
-(void)resetRightBarButtonState;
-(void)setNotificationTextInFooterView:(id)arg0 ;
-(void)setupLater:(id)arg0 ;
-(void)showEligibilityIssueWithReason:(NSInteger)arg0 learnMoreURL:(id)arg1 completion:(id)arg2 ;
-(void)showProvisioningError:(id)arg0 completion:(id)arg1 ;
-(void)suppressFooterViewManualEntryButton;
-(void)suppressFooterViewSetupLaterButton;
-(void)suppressFooterViewSkipCardButton;
-(void)updateFieldsModelWithPaymentCredential:(id)arg0 ;
-(void)updateFieldsModelWithRequirementsResponse:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif