// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSPENDINGSINGLESUMMARYVIEWCONTROLLER_H
#define PKSPENDINGSINGLESUMMARYVIEWCONTROLLER_H

@class UICollectionViewController, PKTransactionSourceCollection, PKAccount, PKAccountUserCollection, NSSet, PKAccountService, PKFamilyMemberCollection, PKSpendingSummary, NSDate, NSCalendar, NSArray, NSDateFormatter, NSString, UIGestureRecognizer;
@protocol PKPaymentDataProviderDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, PKDashboardViewControllerFooterViewDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKHorizontalScrollingChildLayoutDataSource, PKHorizontalScrollingChildViewControllerProtocol, PKHorizontalScrollingViewControllerDelegate, PKSpendingSingleSummaryViewControllerDelegate;


#import "PKContactAvatarManager.h"
#import "PKDashboardViewControllerFooterView.h"
#import "PKTransactionGroupItemPresenter.h"
#import "PKSpendingSummaryPresenter.h"
#import "PKDashboardTitleHeaderView.h"
#import "PKDashboardFooterTextView.h"
#import "PKDashboardButtonCollectionViewCell.h"
#import "PKDashboardAvatarPresenter.h"
#import "PKSpendingSummaryAccountUserPresenter.h"
#import "PKAccountServiceAccountResolutionController.h"
#import "PKHorizontalScrollingChildLayout.h"

@interface PKSpendingSingleSummaryViewController : UICollectionViewController <PKPaymentDataProviderDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, PKDashboardViewControllerFooterViewDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKHorizontalScrollingChildLayoutDataSource, PKHorizontalScrollingChildViewControllerProtocol>

 {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKContactAvatarManager *_avatarManager;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    NSSet *_physicalCards;
    PKAccountService *_accountService;
    NSUInteger _feature;
    NSUInteger _displayType;
    PKFamilyMemberCollection *_familyCollection;
    PKDashboardViewControllerFooterView *_currentFooter;
    BOOL _footerNeedsConfiguration;
    PKSpendingSummary *_summary;
    NSUInteger _summaryType;
    NSDate *_startDate;
    NSDate *_endDate;
    BOOL _hasTransactions;
    NSCalendar *_currentCalendar;
    UIEdgeInsets _contentInset;
    NSArray *_currentMonthTransactions;
    NSArray *_pendingPayments;
    NSArray *_upcomingScheduledPayments;
    NSDateFormatter *_formatterMonth;
    NSDateFormatter *_formatterFullMonth;
    NSDateFormatter *_formatterDay;
    NSDateFormatter *_formatterYear;
    PKTransactionGroupItemPresenter *_transactionGroupPresenter;
    PKSpendingSummaryPresenter *_summaryPresenter;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    PKDashboardFooterTextView *_sampleFooterView;
    PKDashboardButtonCollectionViewCell *_sampleButtonCell;
    PKDashboardAvatarPresenter *_avatarPresenter;
    PKSpendingSummaryAccountUserPresenter *_summaryUsersPresenter;
    NSArray *_sortedAccountUsers;
    PKAccountServiceAccountResolutionController *_resolutionController;
    PKHorizontalScrollingChildLayout *_layout;
    BOOL _isLowEndDevice;
}


@property (nonatomic) CGFloat alphaTransition; // ivar: _alphaTransition
@property (nonatomic) NSUInteger categorization; // ivar: _categorization
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInsett
@property (nonatomic) NSInteger contentInsetAdjustmentBehavior; // ivar: _contentInsetAdjustmentBehavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizerRequiredToFail; // ivar: gestureRecognizerRequiredToFail
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKHorizontalScrollingViewControllerDelegate> *scrollingDelegate; // ivar: scrollingDelegate
@property (weak, nonatomic) NSObject<PKSpendingSingleSummaryViewControllerDelegate> *summaryDelegate; // ivar: _summaryDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL visible; // ivar: _visible


-(BOOL)_hasFooterForSection:(NSUInteger)arg0 ;
-(BOOL)_hasHeaderForSection:(NSUInteger)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(CGFloat)alphaForIndexPath:(id)arg0 visible:(BOOL)arg1 transition:(CGFloat)arg2 ;
-(CGFloat)lineSpacingForSection:(NSInteger)arg0 ;
-(NSInteger)_numberOfAggregateCells;
-(NSInteger)_numberOfNonSpendingTransactionTypeRowsEnabled;
-(NSInteger)_numberOfRewardsCells;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)_aggregateCellAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)_nonSpendingTransactionTypeForRow:(NSInteger)arg0 ;
-(NSUInteger)_rewardsCellAtIndex:(NSUInteger)arg0 ;
-(id)_nonSpendingTransactionGroupForType:(NSUInteger)arg0 ;
-(id)_sortedAccountUsersForSummary:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)data;
-(id)footer;
-(id)indexPathForSummary;
-(id)initWithTransationSourceCollection:(id)arg0 familyCollection:(id)arg1 avatarManager:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 physicalCards:(id)arg5 transactionGroupPresenter:(id)arg6 summaryPresenter:(id)arg7 currentMonthTransactions:(id)arg8 pendingPayments:(id)arg9 upcomingScheduledPayments:(id)arg10 displayType:(NSUInteger)arg11 ;
-(struct CGSize )_sizeForAggregateOrRewardsCellInCollectionView:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(unsigned int)horizontalAlignmentForSection:(NSInteger)arg0 ;
-(void)_accountsChanged:(id)arg0 ;
-(void)_applyMaskToCell:(id)arg0 firstInSection:(BOOL)arg1 lastInSection:(BOOL)arg2 ;
-(void)_configureDefaultFooter;
-(void)_configureFooter;
-(void)_configureFooterForAccountUsers;
-(void)_configureFooterView:(id)arg0 inSection:(NSUInteger)arg1 ;
-(void)_configureHeaderView:(id)arg0 inSection:(NSUInteger)arg1 ;
-(void)_configureRewardsHubButtonCell:(id)arg0 ;
-(void)accountServiceAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)buttonTappedInFooterView:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)didUpdateFamilyMembers:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setData:(id)arg0 swap:(BOOL)arg1 ;
-(void)setSummary:(id)arg0 swap:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif