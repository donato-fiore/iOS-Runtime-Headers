// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTAUTOMATICPAYMENTSMINIMUMPAYMENTDISCLOSUREVIEWCONTROLLER_H
#define PKACCOUNTAUTOMATICPAYMENTSMINIMUMPAYMENTDISCLOSUREVIEWCONTROLLER_H



#import "PKExplanationViewController.h"
#import "PKAccountAutomaticPaymentsController.h"

@interface PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController *_controller;
    NSUInteger _featureIdentifier;
}




-(id)initWithController:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif