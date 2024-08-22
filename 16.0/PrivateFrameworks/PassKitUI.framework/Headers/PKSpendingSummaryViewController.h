// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSPENDINGSUMMARYVIEWCONTROLLER_H
#define PKSPENDINGSUMMARYVIEWCONTROLLER_H

@class PKTransactionSourceCollection, PKFamilyMemberCollection, PKAccount, PKAccountUserCollection, PKPaymentPass, PKSpendingSummaryFetcher, NSCalendar, NSArray, NSString, NSMutableDictionary, UIView<PKHorizontalScrollingFooterViewProtocol>;
@protocol PKSpendingSummaryFetcherObserver, PKSpendingSingleSummaryViewControllerDelegate, PKHorizontalScrollingViewControllerDataSource, PKSpendingSummaryViewControllerDelegate;


#import "PKHorizontalScrollingViewController.h"
#import "PKContactAvatarManager.h"

@interface PKSpendingSummaryViewController : PKHorizontalScrollingViewController <PKSpendingSummaryFetcherObserver, PKSpendingSingleSummaryViewControllerDelegate, PKHorizontalScrollingViewControllerDataSource>

 {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKFamilyMemberCollection *_familyCollection;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKPaymentPass *_pass;
    PKSpendingSummaryFetcher *_summaryFetcher;
    PKContactAvatarManager *_avatarManager;
    NSCalendar *_currentCalendar;
    NSArray *_weeks;
    NSArray *_months;
    NSArray *_years;
    NSString *_navTitle;
    BOOL _transitioningMode;
    NSArray *_currentDataSet;
    NSUInteger _currentSummaryType;
    NSUInteger _displayType;
    NSArray *_currentMonthTransactions;
    NSInteger _startingIndex;
    os_unfair_lock_s _lockUpdate;
    NSMutableDictionary *_pendingUpdates;
    NSArray *_emptyViewControllers;
    UIView<PKHorizontalScrollingFooterViewProtocol> *_footerView;
}


@property (nonatomic) NSUInteger categorization; // ivar: _categorization
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSpendingSummaryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)footerViewContentHeight;
-(NSInteger)numberOfItems;
-(NSInteger)startingIndex;
-(NSUInteger)_newDataSetIndexAfterTransitionFromMode:(NSUInteger)arg0 toMode:(NSUInteger)arg1 ;
-(id)cachedDataAtIndex:(NSInteger)arg0 ;
-(id)emptyViewControllers;
-(id)footerView;
-(id)initWithTransactionSourceCollection:(id)arg0 familyCollection:(id)arg1 avatarManager:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 physicalCards:(id)arg5 fetcher:(id)arg6 weeks:(id)arg7 months:(id)arg8 years:(id)arg9 type:(NSUInteger)arg10 unit:(NSUInteger)arg11 currentMonthTransactions:(id)arg12 upcomingScheduledPayments:(id)arg13 dispayType:(NSUInteger)arg14 ;
-(id)loadingDataObjectWithCurrentData:(id)arg0 index:(NSInteger)arg1 swap:(BOOL)arg2 ;
-(void)_changeModeTo:(NSUInteger)arg0 ;
-(void)_reportTappedButtonWithTag:(id)arg0 ;
-(void)_updateBackTitle;
-(void)dealloc;
-(void)didDequeueViewController:(id)arg0 ;
-(void)didMoveToPrimaryIndex:(NSInteger)arg0 ;
-(void)fetchDataAtIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)invalidatedSpendingSummaryOfType:(NSUInteger)arg0 startingWithDate:(id)arg1 ;
-(void)invalidatedSummariesAvailable;
-(void)prefetchDataIfNecessary;
-(void)spendingSingleSummaryViewController:(id)arg0 changedSelection:(NSUInteger)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif