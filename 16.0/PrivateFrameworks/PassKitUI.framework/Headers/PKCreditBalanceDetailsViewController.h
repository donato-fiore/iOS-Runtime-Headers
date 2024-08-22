// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCREDITBALANCEDETAILSVIEWCONTROLLER_H
#define PKCREDITBALANCEDETAILSVIEWCONTROLLER_H

@class UICollectionViewController, PKTransactionSourceCollection, PKAccount, PKAccountUserCollection, NSSet, PKCreditAccountStatement, PKBalanceSummaryFetcher, PKCreditAccountSummary, PKPaymentWebService, PKFamilyMemberCollection, PKDashboardTransactionFetcher, NSArray, PKBalanceSummary, NSDictionary, NSDateFormatter, NSString;
@protocol PKAccountServiceObserver;


#import "PKDashboardBalancePresenter.h"
#import "PKDashboardBalanceSummaryItemPresenter.h"
#import "PKDashboardBalanceItem.h"
#import "PKDashboardBalanceSummaryItem.h"
#import "PKDashboardTitleHeaderView.h"
#import "PKDashboardFooterTextView.h"

@interface PKCreditBalanceDetailsViewController : UICollectionViewController <PKAccountServiceObserver>

 {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    NSSet *_physicalCards;
    NSUInteger _feature;
    PKCreditAccountStatement *_statement;
    PKCreditAccountStatement *_previousStatement;
    PKBalanceSummaryFetcher *_fetcher;
    PKCreditAccountSummary *_accountSummary;
    PKPaymentWebService *_webService;
    PKFamilyMemberCollection *_familyCollection;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKDashboardBalancePresenter *_balancePresenter;
    PKDashboardBalanceSummaryItemPresenter *_balanceSummaryItemPresenter;
    PKDashboardBalanceItem *_balanceItem;
    PKDashboardBalanceSummaryItem *_lastStatementSummaryItem;
    PKDashboardBalanceSummaryItem *_currentSpendingSummaryItem;
    PKDashboardBalanceSummaryItem *_interestSummaryItem;
    PKDashboardBalanceSummaryItem *_paymentsAndCreditsSummaryItem;
    PKDashboardBalanceSummaryItem *_paymentsSummaryItem;
    PKDashboardBalanceSummaryItem *_creditsSummaryItem;
    PKDashboardBalanceSummaryItem *_dailyCashSummaryItem;
    PKDashboardBalanceSummaryItem *_installmentBalanceSummaryItem;
    PKDashboardBalanceSummaryItem *_creditLimitSummaryItem;
    PKDashboardBalanceSummaryItem *_totalBalanceSummaryItem;
    PKDashboardBalanceSummaryItem *_availableCreditSummaryItem;
    NSArray *_totalBalanceItems;
    NSArray *_spendLimitItems;
    PKDashboardBalanceSummaryItem *_accountMergingItem;
    NSArray *_mergeBalances;
    NSArray *_usageItems;
    PKDashboardBalanceSummaryItem *_statementDownloadSummaryItem;
    PKDashboardBalanceSummaryItem *_exportTransactionDataSummaryItem;
    NSArray *_buttonItems;
    PKBalanceSummary *_balanceSummary;
    NSArray *_statements;
    NSDictionary *_statementsByYear;
    NSArray *_sortedYears;
    NSDateFormatter *_monthYearFormatter;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    PKDashboardFooterTextView *_sampleFooterView;
    NSArray *_sectionMap;
    NSUInteger _numberOfStaticSections;
    NSInteger _style;
    NSString *_pageTagForAnalyticsReporting;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasFooterForSectionIndex:(NSUInteger)arg0 ;
-(BOOL)_hasHeaderForSectionIndex:(NSUInteger)arg0 ;
-(BOOL)_statementIsFromMonthOfMerge;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)_sectionForIndex:(NSUInteger)arg0 ;
-(id)_createSummaryItemOfType:(NSUInteger)arg0 ;
-(id)_footerForTransactionLimitSection;
-(id)_summaryItemForIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 webService:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5 physicalCards:(id)arg6 statement:(id)arg7 previousStatements:(id)arg8 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_configureFooterView:(id)arg0 inSectionIndex:(NSUInteger)arg1 ;
-(void)_configureHeaderView:(id)arg0 inSectionIndex:(NSUInteger)arg1 ;
-(void)_reloadData;
-(void)_reportEventForPassIfNecessary:(id)arg0 ;
-(void)_sortStatementsForPresentation;
-(void)_updateStatements;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)showStatement:(id)arg0 style:(NSInteger)arg1 ;
-(void)statementsChangedForAccountIdentifier:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif