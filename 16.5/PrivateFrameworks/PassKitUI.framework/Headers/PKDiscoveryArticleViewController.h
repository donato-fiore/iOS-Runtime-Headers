// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDISCOVERYARTICLEVIEWCONTROLLER_H
#define PKDISCOVERYARTICLEVIEWCONTROLLER_H

@class UIViewController, PKDiscoveryArticleLayout, UIActivityIndicatorView, UILabel, NSString, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, NSMutableDictionary, UICollectionView;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, PKDiscoveryCardViewDelegate, PKPaymentSetupDelegate, OS_dispatch_queue, PKDiscoveryArticleViewControllerDelegate;


#import "PKDiscoveryDismissButton.h"
#import "PKDiscoveryCardViewTemplateInformation.h"
#import "PKDiscoveryCardView.h"

@interface PKDiscoveryArticleViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, PKDiscoveryCardViewDelegate, PKPaymentSetupDelegate>

 {
    PKDiscoveryArticleLayout *_articleLayout;
    UIEdgeInsets _contentInsets;
    PKDiscoveryDismissButton *_dismissButton;
    BOOL _isDownloading;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_downloadingLabel;
    NSString *_referrerIdentifierOverride;
    NSInteger _callToAction;
    id *_callToActionTappedOverride;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIScreenEdgePanGestureRecognizer *_screenEdgePanGestureRecognizer;
    NSMutableDictionary *_cellImageCache;
    NSMutableDictionary *_imageDownloads;
    os_unfair_lock_s _lockDownloads;
    NSObject<OS_dispatch_queue> *_loadImageQueue;
    BOOL _scrolledToBottom;
    BOOL _reportedScrolledToBottom;
    PKDiscoveryCardViewTemplateInformation *_cardTemplateInformation;
}


@property (nonatomic, getter=isAnimatingCard) BOOL animatingCard; // ivar: _animatingCard
@property (readonly, nonatomic) PKDiscoveryCardView *cardView; // ivar: _cardView
@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDiscoveryArticleViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSafeAreaInsetOverride; // ivar: _hasSafeAreaInsetOverride
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets safeAreaOverrideInsets; // ivar: _safeAreaOverrideInsets
@property (nonatomic) BOOL shouldHideStatusBar; // ivar: _shouldHideStatusBar
@property (readonly) Class superclass;


-(BOOL)_hasCardInGalleryView;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isScrollable;
-(BOOL)prefersStatusBarHidden;
-(NSInteger)_dismissButtonStyleForCard;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg0 ;
-(id)_shelfForIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithArticleLayout:(id)arg0 referrerIdentifier:(id)arg1 cardTemplateInformation:(id)arg2 ;
-(id)initWithItemIdentifier:(id)arg0 referrerIdentifier:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_applicationWillResignActive;
-(void)_applicationWillTerminate;
-(void)_configureCallToActionShelfView:(id)arg0 forCallToActionShelf:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureInlineMediaShelfView:(id)arg0 forInlineMediaShelf:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_dismissButtonTapped;
-(void)_dismissForActionCompleted:(BOOL)arg0 withRelevantPassUniqueIdentifier:(id)arg1 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_leftScreenEdgePanSwipeGesture:(id)arg0 ;
-(void)_loadMedia:(id)arg0 forShelfViewAtIndexPath:(id)arg1 completion:(id)arg2 ;
-(void)_performAccountUserInvitationFlowWithCTATapped:(id)arg0 callToAction:(id)arg1 ;
-(void)_performProvisioningCTATapped:(id)arg0 callToAction:(id)arg1 ;
-(void)_performStandaloneApplyWithCTATapped:(id)arg0 callToAction:(id)arg1 ;
-(void)_reportScolledToBottomIfNecessary;
-(void)_showActivityIndicator:(BOOL)arg0 view:(id)arg1 ;
-(void)_systemTextSizeChanged;
-(void)_updateDismissButtonIfNecessary;
-(void)dealloc;
-(void)discoveryCardViewCTATapped:(id)arg0 callToAction:(id)arg1 itemIdentifier:(id)arg2 ;
-(void)loadView;
-(void)paymentSetupDidFinish:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setArticleLayout:(id)arg0 animated:(BOOL)arg1 ;
-(void)setCallToActionTappedOverride:(id)arg0 ;
-(void)setIsDownloading:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif