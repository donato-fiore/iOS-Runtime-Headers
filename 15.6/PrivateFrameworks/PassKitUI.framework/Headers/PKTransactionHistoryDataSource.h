// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRANSACTIONHISTORYDATASOURCE_H
#define PKTRANSACTIONHISTORYDATASOURCE_H

@class PKTransactionSourceCollection, PKDashboardTransactionFetcher, PKContactResolver, NSString, PKPaymentTransaction, PKPaymentTransactionGroup, PKCreditInstallmentPlan, PKTransactionReceipt, NSArray, PKCoarseLocationMonitor, PKFamilyMemberCollection, NSDateFormatter, NSCalendar, PKAccount, PKAccountUserCollection, NSSet, CNContact, PKCurrencyAmount, NSIndexPath, PKMerchant;
@protocol PKDashboardTransactionFetcherDelegate, PKWorldRegionUpdaterObserver, PKDashboardDataSource, PKDashboardDataSourceDelegate, PKPaymentDataProvider;

#import <Foundation/Foundation.h>

#import "PKAccountServiceAccountResolutionController.h"
#import "PKWorldRegionUpdater.h"

@interface PKTransactionHistoryDataSource : NSObject <PKDashboardTransactionFetcherDelegate, PKWorldRegionUpdaterObserver, PKDashboardDataSource>

 {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKContactResolver *_contactResolver;
    NSString *_peerPaymentCounterpartHandle;
    id<PKDashboardDataSourceDelegate> *_delegate;
    PKPaymentTransaction *_featuredTransaction;
    PKPaymentTransactionGroup *_selectedTransactions;
    PKCreditInstallmentPlan *_associatedInstallmentPlan;
    PKTransactionReceipt *_associatedReceipt;
    NSArray *_featuredTransactionActions;
    NSArray *_actionItems;
    PKAccountServiceAccountResolutionController *_resolutionController;
    id<PKPaymentDataProvider> *_dataProvider;
    PKWorldRegionUpdater *_regionUpdater;
    PKCoarseLocationMonitor *_coarseLocationMonitor;
    PKFamilyMemberCollection *_familyCollection;
    NSArray *_tokens;
    BOOL _contentIsLoaded;
    BOOL _contactLoaded;
    BOOL _transactionHistoryLoaded;
    BOOL _associatedReceiptLoaded;
    NSArray *_transactionHistory;
    BOOL _hasReceived;
    BOOL _hasSent;
    NSDateFormatter *_formatterTitle;
    NSDateFormatter *_formatterMonth;
    NSCalendar *_currentCalendar;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    NSSet *_physicalCards;
}


@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *footerSecondaryTitle;
@property (readonly, nonatomic) PKCurrencyAmount *footerSecondaryTotal; // ivar: _footerSecondaryTotal
@property (readonly, nonatomic) NSString *footerTitle;
@property (readonly, nonatomic) PKCurrencyAmount *footerTotal; // ivar: _footerTotal
@property (readonly, nonatomic) PKPaymentTransactionGroup *group; // ivar: _group
@property (readonly, nonatomic) NSArray *groups; // ivar: _groups
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexPath *headerIndexPath; // ivar: _headerIndexPath
@property (readonly, nonatomic) PKMerchant *merchant; // ivar: _merchant
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)_updateGroup:(id)arg0 withRegion:(id)arg1 ;
-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_groupItemForTransaction:(id)arg0 ;
-(id)_headerItem;
-(id)_totalDailyCashRewardsFromTransactions:(id)arg0 ;
-(id)_totalFromGroups:(id)arg0 ;
-(id)_totalPaymentsFromTransactions:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)_totalRewardsFromTransactions:(id)arg0 ;
-(id)_totalSpendingFromTransactions:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)_transactionItemForTransaction:(id)arg0 ;
-(id)footerTextItemForSection:(NSUInteger)arg0 ;
-(id)initWithFetcher:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 physicalCards:(id)arg5 featuredTransaction:(id)arg6 selectedTransactions:(id)arg7 transactionHistory:(id)arg8 type:(NSUInteger)arg9 ;
-(id)initWithInstallmentPlan:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 physicalCards:(id)arg5 ;
-(id)initWithTransactionGroup:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 physicalCards:(id)arg5 fetcher:(id)arg6 transactionHistory:(id)arg7 ;
-(id)initWithTransactionGroups:(id)arg0 headerGroup:(id)arg1 regionUpdater:(id)arg2 tokens:(id)arg3 transactionSourceCollection:(id)arg4 familyCollection:(id)arg5 account:(id)arg6 accountUserCollection:(id)arg7 physicalCards:(id)arg8 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)navigationBarTitle;
-(id)titleForSection:(NSUInteger)arg0 ;
-(void)_handleAccountsChangedNotification:(id)arg0 ;
-(void)_handleCoarseLocationChangedNotification:(id)arg0 ;
-(void)_handleTransactionHistoryUpdated:(id)arg0 ;
-(void)_loadContact;
-(void)_loadTransactionReceipt;
-(void)_notifyContentLoadedIfNecessary;
-(void)_p2pTotalsFromTransactions:(id)arg0 received:(*id)arg1 sent:(*id)arg2 ;
-(void)_reloadTransactions;
-(void)_updateFooterTotalFromGroup:(id)arg0 ;
-(void)_updateInstallmentPlan;
-(void)dealloc;
-(void)setDataSourceDelegate:(id)arg0 ;
-(void)transactionsChanged:(id)arg0 ;
-(void)updateGroup:(id)arg0 ;
-(void)updateGroups:(id)arg0 headerGroup:(id)arg1 ;
-(void)worldRegionUpdated:(id)arg0 updatedRegion:(id)arg1 ;


@end


#endif