// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSACTIONHISTORYVIEWCONTROLLER_H
#define PKTRANSACTIONHISTORYVIEWCONTROLLER_H

@class UIButton, NSIndexPath, UIImageView, NSString, PKFamilyMemberCollection, PKPaymentTransaction, PKTransactionSourceCollection;
@protocol CNAvatarViewDelegate, OS_dispatch_source;


#import "PKDashboardViewController.h"
#import "PKSpendingSummaryFooterView.h"
#import "PKSpendingSummaryFooterContainer.h"
#import "PKAlignedContentContainerView.h"
#import "PKNavigationController.h"
#import "PKAnimatedNavigationBarTitleView.h"
#import "PKTransactionHistoryHeaderPresenter.h"
#import "PKContactAvatarManager.h"

@interface PKTransactionHistoryViewController : PKDashboardViewController <CNAvatarViewDelegate>

 {
    PKSpendingSummaryFooterView *_footer;
    PKSpendingSummaryFooterContainer *_footerContainer;
    BOOL _loadingMapsViewController;
    NSObject<OS_dispatch_source> *_loadingMapsTimer;
    PKAlignedContentContainerView *_detailsButtonContainer;
    PKAlignedContentContainerView *_phoneButtonContainer;
    PKAlignedContentContainerView *_messageButtonContainer;
    UIButton *_detailsButton;
    UIButton *_phoneButton;
    UIButton *_messageButton;
    UIEdgeInsets _lastContentInset;
    CGFloat _headerHeight;
    PKNavigationController *_navigationController;
    NSIndexPath *_headerIndexPath;
    CGFloat _merchantHeaderAnimationProgress;
    PKAnimatedNavigationBarTitleView *_titleView;
    UIImageView *_titleIconImageView;
    NSString *_titleText;
    PKTransactionHistoryHeaderPresenter *_headerPresenter;
    BOOL _isHeaderPinned;
}


@property (retain, nonatomic) PKContactAvatarManager *contactAvatarManager; // ivar: _contactAvatarManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKFamilyMemberCollection *familyCollection; // ivar: _familyCollection
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger historyType; // ivar: _historyType
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction
@property (readonly, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection


-(BOOL)_shouldBlurButtons;
-(id)_barButtonItems;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithFetcher:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 featuredTransaction:(id)arg5 selectedTransactions:(id)arg6 transactionHistory:(id)arg7 ;
-(id)initWithInstallmentPlan:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 ;
-(id)initWithTransactionGroup:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 fetcher:(id)arg5 transactionHistory:(id)arg6 ;
-(id)initWithTransactionGroups:(id)arg0 headerGroup:(id)arg1 groupPresenter:(id)arg2 regionUpdater:(id)arg3 tokens:(id)arg4 transactionSourceCollection:(id)arg5 familyCollection:(id)arg6 account:(id)arg7 accountUserCollection:(id)arg8 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(struct ? )pkui_navigationStatusBarStyleDescriptor;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_handleInfoButtonTapped;
-(void)_handleMessageButtonTapped;
-(void)_handlePhoneButtonTapped;
-(void)_showContactDetailsViewController;
-(void)_showMapsDetailsViewController;
-(void)_updateButtonConfigurationsDisablingBlur:(BOOL)arg0 ;
-(void)_updateHeaderCellWithAnimationProgress:(id)arg0 ;
-(void)_updateNavigationBarIconForNavigationBarAppeared:(BOOL)arg0 ;
-(void)_updateNavigationBarIconWithLogoURL:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)updateContent;
-(void)updateGroup:(id)arg0 ;
-(void)updateGroups:(id)arg0 headerGroup:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif