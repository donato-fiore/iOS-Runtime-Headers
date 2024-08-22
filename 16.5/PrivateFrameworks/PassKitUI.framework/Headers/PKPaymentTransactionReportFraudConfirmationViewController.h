// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONREPORTFRAUDCONFIRMATIONVIEWCONTROLLER_H
#define PKPAYMENTTRANSACTIONREPORTFRAUDCONFIRMATIONVIEWCONTROLLER_H

@class PKPaymentTransaction;
@protocol PKPaymentDataProvider, PKPaymentTransactionReportFraudConfirmationViewControllerDelegate;


#import "PKExplanationViewController.h"

@interface PKPaymentTransactionReportFraudConfirmationViewController : PKExplanationViewController {
    PKPaymentTransaction *_transaction;
    id<PKPaymentDataProvider> *_dataProvider;
    id<PKPaymentTransactionReportFraudConfirmationViewControllerDelegate> *_fraudDelegate;
}




-(id)initWithContext:(NSInteger)arg0 transaction:(id)arg1 dataProvider:(id)arg2 fraudDelegate:(id)arg3 ;
-(void)reportFraud:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif