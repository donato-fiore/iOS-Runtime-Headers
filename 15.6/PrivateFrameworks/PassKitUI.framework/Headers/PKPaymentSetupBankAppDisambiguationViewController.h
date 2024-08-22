// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPBANKAPPDISAMBIGUATIONVIEWCONTROLLER_H
#define PKPAYMENTSETUPBANKAPPDISAMBIGUATIONVIEWCONTROLLER_H

@class PKPaymentSetupProduct, NSString;
@protocol PKPaymentSetupBankAppDisambiguationControllerDelegate, PKPaymentSetupActivitySpinnerProtocol;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKPaymentSetupBankAppDisambiguationController.h"

@interface PKPaymentSetupBankAppDisambiguationViewController : PKPaymentSetupOptionsViewController <PKPaymentSetupBankAppDisambiguationControllerDelegate, PKPaymentSetupActivitySpinnerProtocol>

 {
    PKPaymentSetupBankAppDisambiguationController *_sectionController;
    PKPaymentSetupProduct *_paymentSetupProduct;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 paymentSetupProduct:(id)arg3 ;
-(void)didSelectCameraWithCompletion:(id)arg0 ;
-(void)didSelectInAppWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif