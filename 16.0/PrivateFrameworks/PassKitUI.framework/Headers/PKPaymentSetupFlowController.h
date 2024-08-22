// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPFLOWCONTROLLER_H
#define PKPAYMENTSETUPFLOWCONTROLLER_H

@class UIViewController, NSString, PKPaymentProvisioningController;
@protocol CIDVUIProofingFlowManagerDelegate, PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPayLaterSetupFlowController.h"
#import "PKAppleBalanceSetupFlowController.h"
#import "PKPasscodeUpgradeFlowController.h"

@interface PKPaymentSetupFlowController : NSObject <CIDVUIProofingFlowManagerDelegate, PKSetupFlowControllerProtocol>

 {
    PKPayLaterSetupFlowController *_payLaterSetupFlowController;
    PKAppleBalanceSetupFlowController *_appleBalanceSetupFlowController;
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
    UIViewController *_rootViewController;
    BOOL _allowsManualEntry;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideSetupLaterButton; // ivar: _hideSetupLaterButton
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (readonly, nonatomic) NSInteger setupContext; // ivar: _setupContext
@property (readonly) Class superclass;


-(id)_barcodePaymentOnboardingViewControllerForProduct:(id)arg0 ;
-(id)_defaultPaymentSetupViewControllerAllowingManualEntry:(BOOL)arg0 allowsHeroScreen:(BOOL)arg1 ;
-(id)_educationViewControllerShouldShow;
-(id)_nextPaymentCredentialControllerWithSetupProduct:(id)arg0 allowsManualEntry:(BOOL)arg1 ;
-(id)_offerAMPEnrollmentViewController;
-(id)_offerMakeDefaultViewController;
-(id)_offerOptionalExpressModeSetup;
-(id)_onboardingViewControllerForProduct:(id)arg0 onboardingContext:(NSInteger)arg1 ;
-(id)_paymentSetupProductsViewControllerForProductType:(NSUInteger)arg0 ;
-(id)_paymentSetupViewControllerForAssociatedCredential:(id)arg0 product:(id)arg1 allowsManualEntry:(BOOL)arg2 ;
-(id)_watchExtensionInstallationViewController;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 ;
-(id)initialPaymentSetupViewControllerForMode:(NSInteger)arg0 allowsManualEntry:(BOOL)arg1 ;
-(id)initialPaymentSetupViewControllerForMode:(NSInteger)arg0 allowsManualEntry:(BOOL)arg1 allowsHeroScreen:(BOOL)arg2 ;
-(id)initialPaymentSetupViewControllerForMultipleCredentials:(id)arg0 product:(id)arg1 ;
-(id)manualEntryPaymentSetupViewControllerForProduct:(id)arg0 allowsSelectingBank:(BOOL)arg1 ;
-(id)manualEntryPaymentSetupViewControllerForProduct:(id)arg0 allowsSelectingBank:(BOOL)arg1 allowsHeroScreen:(BOOL)arg2 ;
-(id)nextQueuedCredentialViewControllerWithSetupProduct:(id)arg0 allowsManualEntry:(BOOL)arg1 ;
-(id)nextQueuedCredentialViewControllerWithSetupProduct:(id)arg0 state:(NSInteger)arg1 allowsManualEntry:(BOOL)arg2 ;
-(id)paymentSetupViewControllerForAssociatedCredentials:(id)arg0 product:(id)arg1 allowsManualEntry:(BOOL)arg2 paymentSetupMode:(NSInteger)arg3 ;
-(id)singleOrMultipleServiceProviderProductsViewControllerForProduct:(id)arg0 serviceProviderProducts:(id)arg1 ;
-(void)_bankAppViewControllerForProduct:(id)arg0 completion:(id)arg1 ;
-(void)_createPayLaterSetupFlowControllerIfNecessaryWithAccount:(id)arg0 ;
-(void)_prepareViewControllerForProvsioningFlow:(id)arg0 ;
-(void)_presentSecurityCapabilitiesFlowWithFeature:(NSUInteger)arg0 viewController:(id)arg1 completion:(id)arg2 ;
-(void)_terminateSetupFlowWithViewController:(id)arg0 ;
-(void)nextViewControllerWithCompletion:(id)arg0 ;
-(void)presentBankAppFlowForProductSelectionViewController:(id)arg0 product:(id)arg1 completion:(id)arg2 ;
-(void)presentCameraFlowForProductSelectionViewController:(id)arg0 product:(id)arg1 completion:(id)arg2 ;
-(void)presentHSA2UpgradePromptIfNeededForViewController:(id)arg0 credentials:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)presentHSA2UpgradePromptIfNeededForViewController:(id)arg0 product:(id)arg1 fallbackProductTitle:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)presentMultiCredentialPaymentSetupWithCredentials:(id)arg0 product:(id)arg1 navigationController:(id)arg2 completion:(id)arg3 ;
-(void)presentPasscodeUpgradeIfNeededForProduct:(id)arg0 viewController:(id)arg1 completion:(id)arg2 ;
-(void)presentPasscodeUpgradeOnViewController:(id)arg0 completion:(id)arg1 ;
-(void)presentProductSetupForProductSelectionViewController:(id)arg0 rootViewController:(id)arg1 product:(id)arg2 allowsManualEntry:(BOOL)arg3 withCompletionHandler:(id)arg4 ;
-(void)presentProductsSetupForProductCategoriesViewController:(id)arg0 category:(id)arg1 products:(id)arg2 allowsManualEntry:(BOOL)arg3 withCompletionHandler:(id)arg4 ;
-(void)proofingFlowManager:(id)arg0 completedProofingWithError:(id)arg1 ;
-(void)proofingFlowManager:(id)arg0 didChangeActiveConfigurations:(id)arg1 ;
-(void)provisioningViewController:(id)arg0 pushViewController:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif