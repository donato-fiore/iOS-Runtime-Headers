// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSPENDINGSUMMARYVIEWCONTROLLER_H
#define PKSPENDINGSUMMARYVIEWCONTROLLER_H

@class UIViewController, PKTransactionSourceCollection, PKFamilyMemberCollection, PKAccount, PKAccountUserCollection, PKPaymentPass, PKSpendingSummaryFetcher, NSCalendar, NSArray, NSString, UIScrollView, NSMutableSet, NSMutableDictionary, NSIndexSet;
@protocol PKSpendingSummaryFetcherObserver, UIScrollViewDelegate, PKSpendingSingleSummaryViewControllerDelegate, OS_dispatch_source, PKSpendingSummaryViewControllerDelegate;


#import "PKContactAvatarManager.h"
#import "PKSpendingSummaryFooterContainer.h"

@interface PKSpendingSummaryViewController : UIViewController <PKSpendingSummaryFetcherObserver, UIScrollViewDelegate, PKSpendingSingleSummaryViewControllerDelegate>

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
    NSArray *_currentDataSet;
    NSUInteger _currentSummaryType;
    NSUInteger _displayType;
    NSUInteger _numberOfItems;
    CGFloat _currentWidth;
    CGFloat _currentHeight;
    BOOL _transitioningMode;
    BOOL _isScrolling;
    BOOL _isDragging;
    BOOL _hasPrefetchedLeft;
    BOOL _hasPrefetchedRight;
    UIScrollView *_scrollView;
    CGFloat _collectionViewVerticalOffset;
    CGRect _previousBounds;
    NSArray *_currentMonthTransactions;
    NSMutableSet *_unusedVCs;
    NSArray *_summaryVCs;
    NSMutableDictionary *_indicesToVCMapping;
    NSMutableDictionary *_nonVisibleIndicesToVCMapping;
    NSIndexSet *_visibleIndices;
    NSUInteger _primaryIndex;
    PKSpendingSummaryFooterContainer *_footerView;
    NSMutableDictionary *_pendingCollectionViewUpdates;
    BOOL _isLowEndDevice;
    NSObject<OS_dispatch_source> *_scrollTimer;
    os_unfair_lock_s _lockUpdate;
    NSMutableDictionary *_pendingUpdates;
}


@property (nonatomic) NSUInteger categorization; // ivar: _categorization
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSpendingSummaryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canReloadVCs;
-(CGFloat)_endOfItemAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_startOfItemAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_transitionProgress;
-(CGFloat)_yPositionForNonPrimaryVCs;
-(NSUInteger)_indexAtContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)_newDataSetIndexAfterTransitionFromMode:(NSUInteger)arg0 toMode:(NSUInteger)arg1 ;
-(NSUInteger)_primaryIndexAtOffset:(struct CGPoint )arg0 ;
-(id)_dequeueNonVisibleVCForIndex:(NSUInteger)arg0 ;
-(id)_dequeueVCForIndex:(NSUInteger)arg0 ;
-(id)_recoverUnusedVC;
-(id)_visibileIndicesAtContentOffset:(struct CGPoint )arg0 ;
-(id)initWithTransactionSourceCollection:(id)arg0 familyCollection:(id)arg1 avatarManager:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 fetcher:(id)arg5 weeks:(id)arg6 months:(id)arg7 years:(id)arg8 type:(NSUInteger)arg9 unit:(NSUInteger)arg10 currentMonthTransactions:(id)arg11 upcomingScheduledPayments:(id)arg12 dispayType:(NSUInteger)arg13 ;
-(void)_changeModeTo:(NSUInteger)arg0 ;
-(void)_layoutCollectionViews;
-(void)_loadSummariesForContentOffset:(struct CGPoint )arg0 ;
-(void)_reloadDataForVCAtIndex:(NSUInteger)arg0 swap:(BOOL)arg1 ;
-(void)_reloadPendingVCs;
-(void)_reportTappedButtonWithTag:(id)arg0 ;
-(void)_retireVCForIndex:(NSUInteger)arg0 ;
-(void)_scrollViewStoppedScrolling;
-(void)_switchPrimaryIndexToIndex:(NSUInteger)arg0 ;
-(void)_updateAlphaAndFooterDuringTransition;
-(void)_updateBackTitle;
-(void)_updatePrimaryViewScrolling;
-(void)_updateScrollViewContentSize;
-(void)dealloc;
-(void)invalidatedSpendingSummaryOfType:(NSUInteger)arg0 startingWithDate:(id)arg1 ;
-(void)invalidatedSummariesAvailable;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)spendingSingleSummaryViewController:(id)arg0 changedSelection:(NSUInteger)arg1 ;
-(void)spendingSingleSummaryViewController:(id)arg0 scrollViewDidScroll:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif