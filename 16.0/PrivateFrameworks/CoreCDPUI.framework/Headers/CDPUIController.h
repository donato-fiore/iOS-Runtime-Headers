// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPUICONTROLLER_H
#define CDPUICONTROLLER_H

@class NSArray, UINavigationController, CDPRemoteDeviceSecretValidator, UIViewController, CDPContext, NSString;
@protocol KeychainSyncViewControllerDelegate, CDPDevicePickerDelegate, CDPRemoteSecretEntryDelegate, CDPUIInheritanceUIProvider, CDPUIDelegate;


#import "CDPUIBaseController.h"
#import "CDPDevicePickerViewController.h"
#import "CDPRecoveryKeyEntryViewModel.h"

@interface CDPUIController : CDPUIBaseController <KeychainSyncViewControllerDelegate, CDPDevicePickerDelegate, CDPRemoteSecretEntryDelegate>

 {
    NSArray *_devices;
    UINavigationController *_navController;
    CDPRemoteDeviceSecretValidator *_remoteSecretValidator;
    CDPDevicePickerViewController *_devicePicker;
    UIViewController *_rootViewController;
    CDPContext *_activeContext;
    CDPRecoveryKeyEntryViewModel *_recoveryKeyViewModel;
    id<CDPUIInheritanceUIProvider> *_inheritanceUIProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CDPUIDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceInlinePresentation; // ivar: _forceInlinePresentation
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)performingAccountRecovery;
-(id)_chooseDeviceEscapeOption;
-(id)_custodianCodeEntryViewControllerWithController:(id)arg0 ;
-(id)_custodianRecoveryEscapeOption;
-(id)_deviceLimitOfferForDevice:(id)arg0 ;
-(id)_enterCustodianCodeEscapeOfferWithCustodianController:(id)arg0 ;
-(id)_enterCustodianCodeEscapeOptionWithCustodianController:(id)arg0 ;
-(id)_enterCustodianCodeEscapeOptionWithCustodianController:(id)arg0 presentationBlock:(id)arg1 ;
-(id)_enterSecretLaterEscapeOptionWithSecret:(NSUInteger)arg0 ;
-(id)_escapeOfferForCustodianFlowWithMask:(NSUInteger)arg0 ;
-(id)_escapeOfferForDevice:(id)arg0 withMask:(NSUInteger)arg1 ;
-(id)_escapeOfferForMultiApprovalWithMask:(NSUInteger)arg0 ;
-(id)_escapeOfferForSingleApprovalWithMask:(NSUInteger)arg0 ;
-(id)_escapeOfferMessageForDevice:(id)arg0 withMask:(NSUInteger)arg1 ;
-(id)_escapeOffersForgotAllWithMask:(NSUInteger)arg0 presenter:(id)arg1 devices:(id)arg2 ;
-(id)_instructionsControllerForPlatform:(NSUInteger)arg0 controller:(id)arg1 ;
-(id)_localDeviceClass;
-(id)_recoveryKeyControllerWithContext:(id)arg0 secretValidator:(id)arg1 completion:(id)arg2 ;
-(id)_recoveryKeyControllerWithContext:(id)arg0 validator:(id)arg1 completion:(id)arg2 ;
-(id)_recoveryKeyEscapeOffer;
-(id)_recoveryKeyEscapeOption;
-(id)_recoveryKeyEscapeOptionWithPresentationBlock:(id)arg0 ;
-(id)_remoteApprovalEscapeOption;
-(id)_remoteSecretControllerForDevice:(id)arg0 ;
-(id)_remoteSecretControllerForNewestDevice:(id)arg0 ;
-(id)_resetAccountDataEscapeOption;
-(id)_singleICSCEscapeOfferWithMask:(NSUInteger)arg0 withController:(id)arg1 ;
-(id)_waitingForApprovalEscapeOffer;
-(id)custodianOSSelectionViewControllerWithCustodianController:(id)arg0 ;
-(id)devicePicker:(id)arg0 escapeOffersForDevices:(id)arg1 ;
-(id)recoveryKeyEntryControllerForCircleJoinWithCancel:(BOOL)arg0 ;
-(void)_beginDevicePickerFlowFromEntryController:(id)arg0 ;
-(void)_beginWaitingForApprovalFlow;
-(void)_dismissPresentedViewControllerCompletion:(id)arg0 ;
-(void)_dismissPresentedViewControllerWithReason:(id)arg0 completion:(id)arg1 ;
-(void)_presentCustodianAttemptLimitAlert;
-(void)_presentRemoteApprovalViewControllerWithEscapeOfferMask:(NSUInteger)arg0 ;
-(void)_presentRemoteSecretControllerWithNewestDevice:(id)arg0 ;
-(void)_presentRootController:(id)arg0 completion:(id)arg1 ;
-(void)_replaceViewController:(id)arg0 withNewController:(id)arg1 ;
-(void)_setupDevicePickerController:(id)arg0 ;
-(void)_showResetKeychainConfirmationAlertWithViewController:(id)arg0 ;
-(void)_validateCustodianRecoveryInfo:(id)arg0 ;
-(void)approveFromAnotherDevice:(BOOL)arg0 ;
-(void)backTappedFromRoot:(id)arg0 ;
-(void)cancelRemoteApprovalTapped:(id)arg0 ;
-(void)cancelTapped:(id)arg0 ;
-(void)cancelledRemoteSecretEntry:(id)arg0 ;
-(void)cdpContext:(id)arg0 beginRemoteApprovalWithValidator:(id)arg1 ;
-(void)cdpContext:(id)arg0 confirmRecoveryKeyWithValidator:(id)arg1 completion:(id)arg2 ;
-(void)cdpContext:(id)arg0 presentRecoveryKeyWithValidator:(id)arg1 completion:(id)arg2 ;
-(void)cdpContext:(id)arg0 promptForAdoptionOfMultipleICSC:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForBeneficiaryAccessKeyWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForICSCWithIsNumeric:(BOOL)arg1 numericLength:(id)arg2 isRandom:(BOOL)arg3 validator:(id)arg4 ;
-(void)cdpContext:(id)arg0 promptForInteractiveAuthenticationWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForLocalSecretWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForRecoveryKeyWithSecretValidator:(id)arg1 completion:(id)arg2 ;
-(void)cdpContext:(id)arg0 promptForRecoveryKeyWithValidator:(id)arg1 completion:(id)arg2 ;
-(void)cdpContext:(id)arg0 promptForRemoteSecretWithDevices:(id)arg1 offeringRemoteApproval:(BOOL)arg2 validator:(id)arg3 ;
-(void)cdpContext:(id)arg0 showError:(id)arg1 withDefaultIndex:(NSInteger)arg2 withCompletion:(id)arg3 ;
-(void)cdpRecoveryFlowContext:(id)arg0 promptForRemoteSecretWithDevices:(id)arg1 validator:(id)arg2 ;
-(void)dealloc;
-(void)devicePicker:(id)arg0 didSelectDevice:(id)arg1 ;
-(void)dismissRecoveryFlow:(id)arg0 completion:(id)arg1 ;
-(void)dismissRecoveryFlow:(id)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(void)exceededMaximumAttemptsForRemoteSecretEntry:(id)arg0 ;
-(void)finishValidation:(id)arg0 withError:(id)arg1 ;
-(void)handleBackPopCompletion;
-(void)keychainSyncController:(id)arg0 didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)performAccountReset:(id)arg0 ;
-(void)performRecoveryKeyRecovery:(id)arg0 ;
-(void)performRemoteApproval:(id)arg0 ;
-(void)remoteSecretEntry:(id)arg0 depletedRemainingAttemptsForDevice:(id)arg1 ;
-(void)remoteSecretEntry:(id)arg0 didAcceptValidRemoteSecretForDevice:(id)arg1 ;


@end


#endif