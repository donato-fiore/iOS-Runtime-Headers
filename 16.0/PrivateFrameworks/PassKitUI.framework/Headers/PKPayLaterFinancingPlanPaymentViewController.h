// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANPAYMENTVIEWCONTROLLER_H
#define PKPAYLATERFINANCINGPLANPAYMENTVIEWCONTROLLER_H

@class PKPayLaterFinancingPlan, PKPayLaterPayment;


#import "PKPayLaterViewController.h"
#import "PKPayLaterFinancingPlanPaymentSectionController.h"

@interface PKPayLaterFinancingPlanPaymentViewController : PKPayLaterViewController {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterPayment *_payment;
    PKPayLaterFinancingPlanPaymentSectionController *_sectionController;
}




-(id)additionalAnalyticsDictionary;
-(id)initWithFinancingPlan:(id)arg0 payment:(id)arg1 payLaterAccount:(id)arg2 paymentIntentController:(id)arg3 merchantIcon:(id)arg4 ;
-(id)pageTag;
-(void)didUpdateFinancingPlan:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif