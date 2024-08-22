// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTBILLPAYMENTCONFIRMATIONVIEWCONTROLLER_H
#define PKACCOUNTBILLPAYMENTCONFIRMATIONVIEWCONTROLLER_H

@class PKAccount, PKCreditAccountSummary, PKPaymentPass, NSArray, PKBillPaymentSuggestedAmountList, PKPaymentService, NSDecimalNumber, NSDate, NSNumberFormatter, NSDateFormatter, UIListContentView, NSString;
@protocol PKBillPaymentRingViewDelegate, PKBillPaymentRingViewDataSource, PKAccountBillPaymentConfirmationViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKAccountBillPaymentCheckmarkRingView.h"

@interface PKAccountBillPaymentConfirmationViewController : PKExplanationViewController <PKBillPaymentRingViewDelegate, PKBillPaymentRingViewDataSource>

 {
    PKAccount *_account;
    PKCreditAccountSummary *_previousAccountSummary;
    PKPaymentPass *_paymentPass;
    NSArray *_payments;
    PKBillPaymentSuggestedAmountList *_suggestionList;
    id<PKAccountBillPaymentConfirmationViewControllerDelegate> *_delegate;
    PKPaymentService *_paymentService;
    NSDecimalNumber *_totalPaymentAmount;
    BOOL _isScheduledPayment;
    NSDate *_scheduledDate;
    NSDecimalNumber *_pendingPaymentsTotal;
    NSNumberFormatter *_amountFormatter;
    NSDateFormatter *_monthDayFormatter;
    NSDateFormatter *_fullDateFormatter;
    NSDateFormatter *_monthFormatter;
    UIListContentView *_bodyContentView;
    PKAccountBillPaymentCheckmarkRingView *_checkmarkRingView;
    BOOL _hasPerformedCategoryAnimation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldDisplayInterestSummary;
-(id)_trailingInterestMonthMidpoint;
-(id)billPaymentRingView:(id)arg0 bottomCurvedTextForSuggestedAmount:(id)arg1 ;
-(id)billPaymentRingView:(id)arg0 interestTextForAmount:(id)arg1 ;
-(id)billPaymentRingView:(id)arg0 topCurvedTextForSuggestedAmount:(id)arg1 ;
-(id)billPaymentRingViewZeroInterestText:(id)arg0 ;
-(id)disabledBottomCurvedTextForBillPaymentRingView:(id)arg0 ;
-(id)disabledTopCurvedTextForBillPaymentRingView:(id)arg0 ;
-(id)initWithAccount:(id)arg0 previousAccountSummary:(id)arg1 paymentPass:(id)arg2 payments:(id)arg3 suggestionList:(id)arg4 delegate:(id)arg5 ;
-(void)_updateBodyContentViewMessage;
-(void)billPaymentRingView:(id)arg0 selectedSuggestedAmount:(id)arg1 selectedSuggestedAmountIsTarget:(BOOL)arg2 userInitiatedChange:(BOOL)arg3 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif