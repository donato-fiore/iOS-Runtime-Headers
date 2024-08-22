// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBALANCESUMMARYFETCHER_H
#define PKBALANCESUMMARYFETCHER_H

@class NSCalendar, NSString;
@protocol PKPaymentDataProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKTransactionSourceCollection.h"
#import "PKAccount.h"
#import "PKPaymentDefaultDataProvider.h"

@interface PKBalanceSummaryFetcher : NSObject <PKPaymentDataProviderDelegate>

 {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKAccount *_account;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    NSCalendar *_currentCalendar;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_transactionIsCredit:(id)arg0 ;
-(BOOL)_transactionIsInterest:(id)arg0 ;
-(BOOL)_transactionIsPurchase:(id)arg0 ;
-(id)_sortedTransactions:(id)arg0 ascending:(BOOL)arg1 ;
-(id)_summaryWithTransactions:(id)arg0 currency:(id)arg1 type:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(id)initWithTransactionSourceCollection:(id)arg0 account:(id)arg1 ;
-(void)balanceSummaryStartingWithDate:(id)arg0 endDate:(id)arg1 type:(NSUInteger)arg2 completion:(id)arg3 ;


@end


#endif