// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERCHANGEFUNDINGSOURCEVIEWCONTROLLER_H
#define PKPAYLATERCHANGEFUNDINGSOURCEVIEWCONTROLLER_H

@class PKPayLaterFinancingPlan, PKPaymentPass, PKPayLaterPaymentIntentController, PKAccountWebServiceFinancingPlanPaymentIntentResponse, PKPayLaterPaymentSource, NSString;
@protocol PKPayLaterChangeFundingSourceSectionControllerDelegate;


#import "PKPayLaterViewController.h"
#import "PKPayLaterChangeFundingSourceSectionController.h"

@interface PKPayLaterChangeFundingSourceViewController : PKPayLaterViewController <PKPayLaterChangeFundingSourceSectionControllerDelegate>

 {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPaymentPass *_payLaterPass;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKPayLaterChangeFundingSourceSectionController *_sectionController;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse *_intentDetails;
    PKPayLaterPaymentSource *_selectedPaymentSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canChangeFundingSource;
-(id)additionalAnalyticsDictionary;
-(id)initWithFinancingPlan:(id)arg0 payLaterPass:(id)arg1 paymentIntentController:(id)arg2 ;
-(id)pageTag;
-(void)_presentChangeFundingSourceFlowWithPrimaryPaymentSource:(id)arg0 completion:(id)arg1 ;
-(void)_presentUnableToChangeFundingSourceAlert;
-(void)_turnOffAutoPaymentWithCompletion:(id)arg0 ;
-(void)_updateSectionControllerAnimated:(BOOL)arg0 ;
-(void)didSelectFundingSource:(id)arg0 ;
-(void)didUpdateAutoPayment:(BOOL)arg0 completion:(id)arg1 ;
-(void)didUpdateFinancingPlan:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif