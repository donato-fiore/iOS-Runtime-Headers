// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9PASSKITUI17ACCOUNTDEBUGMODEL_H
#define _TTC9PASSKITUI17ACCOUNTDEBUGMODEL_H

@protocol PKAccountServiceObserver, PKDashboardTransactionFetcherDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9PassKitUI17AccountDebugModel : NSObject <PKAccountServiceObserver, PKDashboardTransactionFetcherDelegate>

 {
    ? account;
    ? transactionSource;
    ? paymentDataProvider;
    ? _cardAccount;
    ? _inProgress;
    ? _status;
    ? _transactionGroups;
    ? _runningBalance;
    ? _statements;
    ? _ckTransactions;
    ? _ckRewards;
    ? _cardTransactions;
    ? _invalidBalanceIncrements;
    ? transactionFetcher;
    ? accountService;
}




-(id)init;
-(void)transactionsChanged:(id)arg0 ;


@end


#endif