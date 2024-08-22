// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSPENDINGSUMMARYFETCHER_H
#define PKSPENDINGSUMMARYFETCHER_H

@class NSCache, NSDate, NSCalendar, NSHashTable, NSMutableOrderedSet, NSMutableDictionary, NSArray, NSString;
@protocol PKPaymentDataProviderDelegate, PKAccountServiceObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKTransactionSourceCollection.h"
#import "PKAccount.h"
#import "PKPaymentDefaultDataProvider.h"

@interface PKSpendingSummaryFetcher : NSObject <PKPaymentDataProviderDelegate, PKAccountServiceObserver>

 {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKAccount *_account;
    NSCache *_weeklySummaryItemsPerStartDate;
    NSCache *_monthlySummaryItemsPerStartDate;
    NSCache *_yearlySummaryItemsPerStartDate;
    NSDate *_oldestTransactionDate;
    NSDate *_newestTransactionDate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    NSCalendar *_currentCalendar;
    os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
    os_unfair_lock_s _requestsLock;
    NSMutableOrderedSet *_pendingRequests;
    NSMutableDictionary *_blockPendingRequests;
    BOOL _processingRequest;
    NSArray *_statements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_sortedTransactions:(id)arg0 ascending:(BOOL)arg1 ;
+(id)_spendingCategoriesFromTransactions:(id)arg0 currencyCode:(id)arg1 ;
+(id)_spendingMerchantsFromTransaction:(id)arg0 currencyCode:(id)arg1 ;
+(id)_summaryWithTransactions:(id)arg0 currency:(id)arg1 type:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 lastSummary:(id)arg5 ;
+(id)nextStartOfWeekFromDate:(id)arg0 ;
+(id)previousStartOfWeekFromDate:(id)arg0 ;
+(id)summaryWithTransactions:(id)arg0 transactionSourceCollection:(id)arg1 currency:(id)arg2 type:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 lastSummary:(id)arg6 ;
-(id)_cacheForType:(NSUInteger)arg0 ;
-(id)_cachedSpendingSummaryStartingWithDate:(id)arg0 type:(NSUInteger)arg1 withLastPeriodChange:(BOOL)arg2 ;
-(id)cachedSpendingSummaryStartingWithDate:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithTransactionSourceCollection:(id)arg0 account:(id)arg1 ;
-(void)_accessObserversWithHandler:(id)arg0 ;
-(void)_processNextRequest;
-(void)_resetCurrentCalendar;
-(void)_spendingSummaryStartingWithDate:(id)arg0 endDate:(id)arg1 type:(NSUInteger)arg2 withLastPeriodChange:(BOOL)arg3 completion:(id)arg4 ;
-(void)_timeZoneChanged:(id)arg0 ;
-(void)availableSummaries:(id)arg0 ;
-(void)dealloc;
-(void)registerObserver:(id)arg0 ;
-(void)spendingSummaryStartingWithDate:(id)arg0 type:(NSUInteger)arg1 includingLastPeriodChange:(BOOL)arg2 completion:(id)arg3 ;
-(void)statementsChangedForAccountIdentifier:(id)arg0 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif