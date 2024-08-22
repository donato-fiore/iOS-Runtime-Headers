// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTAUTOMATICPAYMENTSSETUPCOMPLETEVIEWCONTROLLER_H
#define PKACCOUNTAUTOMATICPAYMENTSSETUPCOMPLETEVIEWCONTROLLER_H



#import "PKExplanationViewController.h"
#import "PKAccountAutomaticPaymentsController.h"

@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController *_controller;
    NSUInteger _featureIdentifier;
}




-(NSInteger)_paymentDay;
-(id)_paymentDateString;
-(id)_paymentDayNameString;
-(id)_paymentDayString;
-(id)bodyString;
-(id)initWithController:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif