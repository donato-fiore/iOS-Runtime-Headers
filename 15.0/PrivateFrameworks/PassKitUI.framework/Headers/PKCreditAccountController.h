// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCREDITACCOUNTCONTROLLER_H
#define PKCREDITACCOUNTCONTROLLER_H



#import "PKAccountFlowController.h"

@interface PKCreditAccountController : PKAccountFlowController



+(BOOL)_shouldDisplayBalanceAndTransactionsForTransactionSourceCollection:(id)arg0 ;
+(BOOL)_shouldDisplayBalanceForAccount:(id)arg0 ;
+(BOOL)_shouldDisplayTransactionsForAccount:(id)arg0 ;
+(BOOL)shouldDisplayAccountInformationForTransactionSourceCollection:(id)arg0 withAccount:(id)arg1 ;
+(BOOL)shouldDisplayTransactionsForTransactionSourceCollection:(id)arg0 withAccount:(id)arg1 ;
+(BOOL)shouldShowCardNumbersWithAccount:(id)arg0 andPass:(id)arg1 ;
+(NSUInteger)paymentEducationStateForAccount:(id)arg0 mostRecentTransactions:(id)arg1 upcomingScheduledPayments:(id)arg2 ;
+(id)relevantScheduledPaymentFromScheduledPayments:(id)arg0 account:(id)arg1 ;
+(void)resolutionToReceiveCashbackForAccount:(id)arg0 accountUser:(id)arg1 withPeerPaymentAccount:(id)arg2 completion:(id)arg3 ;


@end


#endif