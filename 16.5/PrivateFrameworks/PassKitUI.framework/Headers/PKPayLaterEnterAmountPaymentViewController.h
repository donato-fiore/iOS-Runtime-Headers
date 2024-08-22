// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERENTERAMOUNTPAYMENTVIEWCONTROLLER_H
#define PKPAYLATERENTERAMOUNTPAYMENTVIEWCONTROLLER_H

@class PKPayLaterFinancingPlan, PKPayLaterPaymentIntentController, PKAccountWebServiceFinancingPlanPaymentIntentResponse;


#import "PKPayLaterEnterAmountViewController.h"

@interface PKPayLaterEnterAmountPaymentViewController : PKPayLaterEnterAmountViewController {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse *_intentDetails;
}




-(id)headerSubtitle;
-(id)headerTitle;
-(id)initWithPayLaterAccount:(id)arg0 financingPlan:(id)arg1 intentDetails:(id)arg2 paymentIntentController:(id)arg3 ;
-(id)keypadSuggestions;
-(void)nextButtonTapped;


@end


#endif