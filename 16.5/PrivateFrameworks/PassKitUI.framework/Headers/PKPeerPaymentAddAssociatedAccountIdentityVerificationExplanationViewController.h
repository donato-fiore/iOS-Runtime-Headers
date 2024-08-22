// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTADDASSOCIATEDACCOUNTIDENTITYVERIFICATIONEXPLANATIONVIEWCONTROLLER_H
#define PKPEERPAYMENTADDASSOCIATEDACCOUNTIDENTITYVERIFICATIONEXPLANATIONVIEWCONTROLLER_H

@class NSString;
@protocol PKExplanationViewControllerDelegate, PKExplanationViewDelegate;


#import "PKExplanationViewController.h"
#import "PKPeerPaymentSetupFlowController.h"

@interface PKPeerPaymentAddAssociatedAccountIdentityVerificationExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate>

 {
    PKPeerPaymentSetupFlowController *_controller;
}


@property (copy, nonatomic) id *cancelHandler; // ivar: _cancelHandler
@property (copy, nonatomic) id *continueHandler; // ivar: _continueHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPeerPaymentSetupFlowController:(id)arg0 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif