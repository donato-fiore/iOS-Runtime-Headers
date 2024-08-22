// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTADDDEBITCARDVIEWCONTROLLER_H
#define PKPAYMENTADDDEBITCARDVIEWCONTROLLER_H

@class NSString;
@protocol PKExplanationViewDelegate, PKPaymentSetupDelegate, PKPeerPaymentSetupFlowControllerDataSource, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKPeerPaymentSetupFlowController.h"

@interface PKPaymentAddDebitCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSetupDelegate, PKPeerPaymentSetupFlowControllerDataSource>

 {
    PKPeerPaymentSetupFlowController *_peerPaymentSetupFlowController;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
}


@property (copy, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showDebitCardHeroView; // ivar: _showDebitCardHeroView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(BOOL)shouldPushTerms;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg0 ;
-(id)initWithPeerPaymentSetupFlowController:(id)arg0 ;
-(void)_handleNextStep;
-(void)_handleProvisioningError:(id)arg0 ;
-(void)_presentPaymentSetupController;
-(void)_setupLater;
-(void)_terminateSetupFlow;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)paymentSetupDidFinish:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif