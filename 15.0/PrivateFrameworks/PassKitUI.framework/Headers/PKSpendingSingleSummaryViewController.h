// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSPENDINGSINGLESUMMARYVIEWCONTROLLER_H
#define PKSPENDINGSINGLESUMMARYVIEWCONTROLLER_H

@class UICollectionViewController, PKTransactionSourceCollection, PKAccount, PKAccountUserCollection, PKAccountService, PKFamilyMemberCollection, NSDate, NSCalendar, NSArray, NSDateFormatter, NSString, UIGestureRecognizer, PKSpendingSummary;
@protocol PKPaymentDataProviderDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, PKSpendingSummaryFooterViewDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKSpendingSummaryResponder, PKSpendingSingleSummaryViewControllerDelegate;


#import "PKContactAvatarManager.h"
#import "PKSpendingSummaryFooterView.h"
#import "PKTransactionGroupItemPresenter.h"
#import "PKSpendingSummaryPresenter.h"
#import "PKDashboardTitleHeaderView.h"
#import "PKDashboardFooterTextView.h"
#import "PKDashboardAvatarPresenter.h"
#import "PKSpendingSummaryAccountUserPresenter.h"
#import "PKAccountServiceAccountResolutionController.h"
#import "PKSpendingSummaryLayout.h"

@interface PKSpendingSingleSummaryViewController : UICollectionViewController <PKPaymentDataProviderDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, PKSpendingSummaryFooterViewDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKSpendingSummaryResponder>

 {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKContactAvatarManager *_avatarManager;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKAccountService *_accountService;
    NSUInteger _feature;
    NSUInteger _displayType;
    PKFamilyMemberCollection *_familyCollection;
    PKSpendingSummaryFooterView *_currentFooter;
    BOOL _footerNeedsConfiguration;
    NSUInteger _summaryType;
    NSDate *_startDate;
    NSDate *_endDate;
    BOOL _hasTransactions;
    NSCalendar *_currentCalendar;
    CGFloat _transitionAlpha;
    NSArray *_currentMonthTransactions;
    NSArray *_upcomingScheduledPayments;
    NSDateFormatter *_formatterMonth;
    NSDateFormatter *_formatterFullMonth;
    NSDateFormatter *_formatterDay;
    NSDateFormatter *_formatterYear;
    PKTransactionGroupItemPresenter *_transactionGroupPresenter;
    PKSpendingSummaryPresenter *_summaryPresenter;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    PKDashboardFooterTextView *_sampleFooterView;
    PKDashboardAvatarPresenter *_avatarPresenter;
    PKSpendingSummaryAccountUserPresenter *_summaryUsersPresenter;
    NSArray *_sortedAccountUsers;
    PKAccountServiceAccountResolutionController *_resolutionController;
    PKSpendingSummaryLayout *_layout;
    BOOL _isLowEndDevice;
}


@property (nonatomic) NSUInteger categorization; // ivar: _categorization
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (nonatomic) NSInteger contentInsetAdjustmentBehavior; // ivar: _contentInsetAdjustmentBehavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizerRequiredToFail; // ivar: _gestureRecognizerRequiredToFail
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKSpendingSingleSummaryViewControllerDelegate> *scrollingDelegate; // ivar: _scrollingDelegate
@property (readonly, nonatomic) PKSpendingSummary *summary; // ivar: _summary
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(BOOL)_hasFooterForSection:(NSUInteger)arg0 ;
-(BOOL)_hasHeaderForSection:(NSUInteger)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(NSInteger)_numberOfNonSpendingTransactionTypeRowsEnabled;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)_aggregateCellAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)_nonSpendingTransactionTypeForRow:(NSInteger)arg0 ;
-(id)_nonSpendingTransactionGroupForType:(NSUInteger)arg0 ;
-(id)_sortedAccountUsersForSummary:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)footer;
-(id)indexPathForSummary;
-(id)initWithTransationSourceCollection:(id)arg0 familyCollection:(id)arg1 avatarManager:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 transactionGroupPresenter:(id)arg5 summaryPresenter:(id)arg6 currentMonthTransactions:(id)arg7 upcomingScheduledPayments:(id)arg8 displayType:(NSUInteger)arg9 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_accountsChanged:(id)arg0 ;
-(void)_applyMaskToCell:(id)arg0 firstInSection:(BOOL)arg1 lastInSection:(BOOL)arg2 ;
-(void)_configureDefaultFooter;
-(void)_configureFooter;
-(void)_configureFooterForAccountUsers;
-(void)_configureFooterView:(id)arg0 inSection:(NSUInteger)arg1 ;
-(void)_configureHeaderView:(id)arg0 inSection:(NSUInteger)arg1 ;
-(void)accountServiceAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)buttonTappedInFooterView:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)didUpdateFamilyMembers:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setAlphaForTransition:(CGFloat)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif