// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPASSMAKEDEFAULTVIEWCONTROLLER_H
#define PKPAYMENTPASSMAKEDEFAULTVIEWCONTROLLER_H

@class PKPaymentProvisioningController, PKPaymentPass, PKAssertion;
@protocol PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"

@interface PKPaymentPassMakeDefaultViewController : PKExplanationViewController {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentPass *_pass;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    PKAssertion *_notificationSupressionAssertion;
}




+(BOOL)shouldOfferMakeDefaultForPass:(id)arg0 provisioningController:(id)arg1 ;
-(id)initWithProvisioningController:(id)arg0 paymentPass:(id)arg1 context:(NSInteger)arg2 delegate:(id)arg3 ;
-(struct CGSize )_snapshotSize;
-(void)_acquireAssertion;
-(void)_invalidateAssertion;
-(void)_performAddToWatchFlowWithCompletionHandler:(id)arg0 ;
-(void)_showAddToWatchOfferWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)loadView;
-(void)proceedToNextScreen;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif