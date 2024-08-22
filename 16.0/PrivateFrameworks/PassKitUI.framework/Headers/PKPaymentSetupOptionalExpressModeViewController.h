// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPOPTIONALEXPRESSMODEVIEWCONTROLLER_H
#define PKPAYMENTSETUPOPTIONALEXPRESSMODEVIEWCONTROLLER_H

@class PKPaymentProvisioningController, PKPaymentPass, PKPaymentProvisioningTracker;
@protocol PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"

@interface PKPaymentSetupOptionalExpressModeViewController : PKExplanationViewController {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentPass *_pass;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    PKPaymentProvisioningTracker *_provisioningTracker;
}




-(id)_credentialViewController;
-(id)_moreInfoViewControllerWithDismissalHandler:(id)arg0 ;
-(id)initWithProvisioningController:(id)arg0 paymentPass:(id)arg1 context:(NSInteger)arg2 delegate:(id)arg3 ;
-(struct CGSize )_snapshotSize;
-(void)_presentNextViewController:(id)arg0 ;
-(void)_terminateSetupFlow;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)loadView;
-(void)proceedToNextScreen;


@end


#endif