// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTAUTOMATICPAYMENTSHEROVIEWCONTROLLER_H
#define PKACCOUNTAUTOMATICPAYMENTSHEROVIEWCONTROLLER_H

@class NSString;
@protocol PKPaymentSetupViewControllerDelegate, UITextViewDelegate;


#import "PKExplanationViewController.h"
#import "PKAccountAutomaticPaymentsController.h"

@interface PKAccountAutomaticPaymentsHeroViewController : PKExplanationViewController <PKPaymentSetupViewControllerDelegate, UITextViewDelegate>

 {
    PKAccountAutomaticPaymentsController *_controller;
    NSUInteger _featureIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_continueButton;
-(id)initWithController:(id)arg0 ;
-(void)_continuePressed;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif