// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTAUTOMATICPAYMENTSMINIMUMPAYMENTDISCLOSUREVIEWCONTROLLER_H
#define PKACCOUNTAUTOMATICPAYMENTSMINIMUMPAYMENTDISCLOSUREVIEWCONTROLLER_H



#import "PKExplanationViewController.h"
#import "PKAccountAutomaticPaymentsController.h"

@interface PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController *_controller;
    NSUInteger _featureIdentifier;
}




-(id)_confirmButton;
-(id)initWithController:(id)arg0 ;
-(void)_confirmPressed:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif