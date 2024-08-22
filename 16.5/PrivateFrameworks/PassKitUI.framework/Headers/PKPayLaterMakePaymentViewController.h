// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERMAKEPAYMENTVIEWCONTROLLER_H
#define PKPAYLATERMAKEPAYMENTVIEWCONTROLLER_H

@class PKPayLaterFinancingPlan, PKPayLaterPaymentIntentController, NSDateFormatter, PKAccountWebServiceFinancingPlanPaymentIntentResponse, NSString;
@protocol PKPayLaterMakePaymentSectionControllerDelegate;


#import "PKPayLaterViewController.h"
#import "PKPayLaterMakePaymentSectionController.h"

@interface PKPayLaterMakePaymentViewController : PKPayLaterViewController <PKPayLaterMakePaymentSectionControllerDelegate>

 {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKPayLaterMakePaymentSectionController *_sectionController;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse *_intentDetails;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)additionalAnalyticsDictionary;
-(id)initWithFinancingPlan:(id)arg0 paymentIntentController:(id)arg1 ;
-(id)pageTag;
-(void)_cancelButtonTapped;
-(void)_createDockView;
-(void)_didSelectCustomAmount;
-(void)_didSelectPayNextPaymentAmount;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)sectionController:(id)arg0 didUpdateCurrentSelectedAmount:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif