// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDTRANSACTIONFETCHER_H
#define PKDASHBOARDTRANSACTIONFETCHER_H

@class NSArray, NSSet, NSDecimalNumber, NSString, NSDictionary, NSDate;
@protocol PKPaymentDataProviderDelegate, OS_dispatch_queue, PKDashboardTransactionFetcherDelegate, PKPaymentDataProvider;

#import <Foundation/Foundation.h>

#import "PKTransactionSourceCollection.h"
#import "PKMerchant.h"
#import "PKCreditInstallmentPlan.h"
#import "PKCurrencyAmount.h"
#import "PKPaymentPass.h"

@interface PKDashboardTransactionFetcher : NSObject <PKPaymentDataProviderDelegate>

 {
    PKTransactionSourceCollection *_transactionSourceCollection;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    os_unfair_lock_s _lockUpdate;
    BOOL _pendingUpdate;
    BOOL _hasMoreUpdates;
    PKMerchant *_merchant;
    NSInteger _merchantCategory;
    NSInteger _transactionType;
    PKCreditInstallmentPlan *_installmentPlan;
    NSArray *_regions;
    NSArray *_types;
    NSArray *_sources;
    NSArray *_statuses;
    PKCurrencyAmount *_amount;
    NSInteger _amountComparison;
    NSSet *_tags;
    NSDecimalNumber *_rewardsValue;
    NSUInteger _rewardsValueUnit;
    NSInteger _subType;
    NSSet *_filteredTransactionSourceIdentifiers;
    NSUInteger _limit;
    PKPaymentPass *_cashbackPass;
    NSString *_cashbackPassUniqueID;
    BOOL _needsCashbackUniqueID;
    NSDictionary *_cashbackGroups;
    BOOL _needsInstantWithdrawalFees;
    NSArray *_instantWithdrawalFeeGroups;
}


@property (retain, nonatomic) PKTransactionSourceCollection *cashbackTransactionSourceCollection; // ivar: _cashbackTransactionSourceCollection
@property (readonly, nonatomic) NSSet *counterpartHandles; // ivar: _counterpartHandles
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDashboardTransactionFetcherDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PKPaymentDataProvider> *paymentDataProvider; // ivar: _paymentDataProvider
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)_feeTotalForTransaction:(id)arg0 ;
-(id)_sortedTransactions:(id)arg0 ascending:(BOOL)arg1 ;
-(id)_transactionRequestForCurrentFilters;
-(id)_transactionSourceIdentifiers;
-(id)cashbackGroupForDateComponents:(id)arg0 cashbackTransactionSourceCollection:(*id)arg1 ;
-(id)cashbackGroupForTransactionWithIdentifier:(id)arg0 cashbackTransactionSourceCollection:(*id)arg1 ;
-(id)cashbackPass;
-(id)initWithCounterpartHandles:(id)arg0 transactionSourceCollection:(id)arg1 paymentDataProvider:(id)arg2 ;
-(id)initWithInstallmentPlan:(id)arg0 transactionSourceCollection:(id)arg1 paymentDataProvider:(id)arg2 ;
-(id)initWithMerchant:(id)arg0 transactionSourceCollection:(id)arg1 paymentDataProvider:(id)arg2 ;
-(id)initWithMerchantCategory:(NSInteger)arg0 transactionSourceCollection:(id)arg1 paymentDataProvider:(id)arg2 ;
-(id)initWithRegions:(id)arg0 transactionSourceCollection:(id)arg1 paymentDataProvider:(id)arg2 ;
-(id)initWithTransactionSourceCollection:(id)arg0 paymentDataProvider:(id)arg1 ;
-(id)initWithTransactionType:(NSInteger)arg0 transactionSourceCollection:(id)arg1 paymentDataProvider:(id)arg2 ;
-(id)instantWithdrawalFeesTransactionGroups;
-(void)_addCashbackTransactions:(id)arg0 completion:(id)arg1 ;
-(void)_addInstantWidthdrawalTransactionsWithCompletion:(id)arg0 ;
-(void)_commonSetup;
-(void)_processPaymentPassTransactionsWithTransactions:(id)arg0 sendTransactionsBlock:(id)arg1 ;
-(void)_sendUpdatedTransactions;
-(void)filterAmount:(id)arg0 comparison:(NSInteger)arg1 ;
-(void)filterCategory:(NSInteger)arg0 ;
-(void)filterMerchant:(id)arg0 ;
-(void)filterPeerPaymentSubType:(NSInteger)arg0 ;
-(void)filterRegions:(id)arg0 ;
-(void)filterRewardsValue:(id)arg0 unit:(NSUInteger)arg1 ;
-(void)filterSources:(id)arg0 ;
-(void)filterStatuses:(id)arg0 ;
-(void)filterTags:(id)arg0 ;
-(void)filterTransactionSourceIdentifiers:(id)arg0 ;
-(void)filterTypes:(id)arg0 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didEnableTransactionService:(BOOL)arg1 ;
-(void)peerPaymentCounterpartHandlesForTransactionSourceIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 completion:(id)arg3 ;
-(void)reloadTransactionsWithCompletion:(id)arg0 ;
-(void)setLimit:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didRemoveTransactionWithIdentifier:(id)arg1 ;
-(void)transactionsMonthlyCountsWithCompletion:(id)arg0 ;
-(void)transactionsYearlyCountsWithCompletion:(id)arg0 ;


@end


#endif