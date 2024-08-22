// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUAVALANCHEREVIEWCONTROLLER_H
#define PUAVALANCHEREVIEWCONTROLLER_H

@class UIViewController, PHFetchResult, NSMutableDictionary, PLAvalanche, PHCachingImageManager, UIBarButtonItem, UICollectionView, NSIndexPath, PLManagedAsset, NSOrderedSet, NSMutableSet, UITapGestureRecognizer, UICollectionViewLayout, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, PUReviewScrubberDataSource, PUReviewScrubberDelegate, PUAvalancheReviewCollectionViewLayoutDelegate, UIGestureRecognizerDelegate, PUTransitionViewAnimatorDelegate, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource, PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController, PLAssetContainer, PLAssetContainerList, PUAvalancheReviewControllerDelegate;


#import "PUAssetTransitionInfo.h"
#import "PUAvalancheReviewCollectionViewLayout.h"
#import "PUTransitionViewAnimator.h"
#import "PUPhotosZoomingSharingGridCell.h"
#import "PUPhotoPinchGestureRecognizer.h"
#import "PUPhotosSharingTransitionContext.h"
#import "PUReviewScrubber.h"
#import "PUAvalancheReviewControllerSpec.h"

@interface PUAvalancheReviewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, PUReviewScrubberDataSource, PUReviewScrubberDelegate, PUAvalancheReviewCollectionViewLayoutDelegate, UIGestureRecognizerDelegate, PUTransitionViewAnimatorDelegate, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource, PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController>

 {
    PHFetchResult *_assetCollectionsFetchResult;
    NSMutableDictionary *_resultsForAssetCollection;
}


@property (retain, nonatomic) PUAssetTransitionInfo *_assetTransitionInfo; // ivar: __assetTransitionInfo
@property (retain, nonatomic, setter=_setAssetsToSizeDictionary:) NSMutableDictionary *_assetsToSizeDictionary; // ivar: __assetsToSizeDictionary
@property (readonly, nonatomic) PLAvalanche *_avalancheBeingReviewed; // ivar: __avalancheBeingReviewed
@property (readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // ivar: __cachingImageManager
@property (readonly, nonatomic) UIBarButtonItem *_cancelBarButtonItem; // ivar: __cancelBarButtonItem
@property (readonly, nonatomic) UICollectionView *_collectionView; // ivar: __collectionView
@property (readonly, nonatomic) PUAvalancheReviewCollectionViewLayout *_collectionViewLayout; // ivar: __collectionViewLayout
@property (nonatomic) BOOL _completingReviewMode; // ivar: __completingReviewMode
@property (readonly, nonatomic) NSObject<PLAssetContainer> *_currentAssetContainer; // ivar: __currentAssetContainer
@property (readonly, nonatomic) UIBarButtonItem *_doneBarButtonItem; // ivar: __doneBarButtonItem
@property (readonly, nonatomic) NSIndexPath *_inFlightReferenceIndexPath; // ivar: __inFlightReferenceIndexPath
@property (readonly, nonatomic) PLManagedAsset *_initialAsset; // ivar: __initialAsset
@property (readonly, nonatomic) NSOrderedSet *_initialFavorites; // ivar: __initialFavorites
@property (retain, nonatomic, setter=_setPhotoZoomAnimator:) PUTransitionViewAnimator *_photoZoomAnimator; // ivar: __photoZoomAnimator
@property (retain, nonatomic, setter=_setPhotoZoomCell:) PUPhotosZoomingSharingGridCell *_photoZoomCell; // ivar: __photoZoomCell
@property (retain, nonatomic, setter=_setPhotoZoomPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoZoomPinchGestureRecognizer; // ivar: __photoZoomPinchGestureRecognizer
@property (retain, nonatomic) PUPhotosSharingTransitionContext *_photosSharingTransitionContext; // ivar: __photosSharingTransitionContext
@property (retain, nonatomic, setter=_setPreheatedAssets:) NSMutableSet *_preheatedAssets; // ivar: __preheatedAssets
@property (nonatomic, setter=_setPreviousPreheatRect:) CGRect _previousPreheatRect; // ivar: __previousPreheatRect
@property (readonly, nonatomic) PUReviewScrubber *_reviewScrubber;
@property (readonly, nonatomic) PUAvalancheReviewControllerSpec *_spec; // ivar: __spec
@property (readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // ivar: __tapGestureRecognizer
@property (retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // ivar: __transitionLayout
@property (readonly, nonatomic) BOOL _updatingContentOffsetFromScrubbing; // ivar: __updatingContentOffsetFromScrubbing
@property (readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
@property (readonly, nonatomic) NSObject<PLAssetContainerList> *avalancheContainerList; // ivar: _avalancheContainerList
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<PUAvalancheReviewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pu_wantsNavigationBarVisible;
-(BOOL)pu_wantsTabBarVisible;
-(BOOL)pu_wantsToolbarVisible;
-(BOOL)reviewScrubber:(id)arg0 shouldProvideFeedbackForCellAtIndexPath:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)_horizontalOffsetInCollectionView:(id)arg0 forCenteringOnItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)reviewScrubber:(id)arg0 numberOfItemsInSection:(NSUInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_assetAtIndexPath:(id)arg0 ;
-(id)_currentAsset;
-(id)_indexPathInCollectionView:(id)arg0 closestToPoint:(struct CGPoint )arg1 excludingIndexPath:(id)arg2 ;
-(id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg0 ;
-(id)_phAssetAtIndexPath:(id)arg0 ;
-(id)_selectionViewAtIndexPath:(id)arg0 forCollectionView:(id)arg1 ;
-(id)assetsInAssetCollection:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)embeddedActivityView;
-(id)initWithSpec:(id)arg0 startingAtAsset:(id)arg1 inAvalanche:(id)arg2 currentAssetContainer:(id)arg3 ;
-(id)transitionCollectionView;
-(struct CGRect )_frameAtIndexPath:(id)arg0 inView:(id)arg1 ;
-(struct CGRect )embeddedActivityViewFrameWhenShowing:(BOOL)arg0 ;
-(struct CGRect )layout:(id)arg0 collectionView:(id)arg1 selectionBadgeFrameForItemFrame:(struct CGRect )arg2 atIndexPath:(id)arg3 ;
-(struct CGRect )oneUpAssetTransitionAssetFinalFrame:(id)arg0 ;
-(struct CGRect )selectionBadgeFrameForItemFrame:(struct CGRect )arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )_sizeForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )layout:(id)arg0 collectionView:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(unsigned short)reviewScrubberImageFormat;
-(void)_beginZoomingForCellAtIndexPath:(id)arg0 ;
-(void)_cancelReviewMode;
-(void)_cancelReviewModeAction:(id)arg0 ;
-(void)_dismissReviewControllerWithAsset:(id)arg0 ;
-(void)_endZoomingForCell;
-(void)_finishReviewAndDeleteNonPicks:(BOOL)arg0 ;
-(void)_getFirstValidIndexPath:(*id)arg0 lastValidIndexPath:(*id)arg1 ;
-(void)_getMainCollectionViewFrame:(struct CGRect *)arg0 collectionViewLayoutInsets:(struct UIEdgeInsets *)arg1 ;
-(void)_handleDoneButton:(id)arg0 ;
-(void)_handlePhotoPinch:(id)arg0 ;
-(void)_handleTapAtIndexPath:(id)arg0 ;
-(void)_handleTapInMainCollectionView:(id)arg0 ;
-(void)_pageToIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)_promoteFavoriteAssetsAndDeleteNonPicks:(BOOL)arg0 withReviewCompletionHandler:(id)arg1 ;
-(void)_reallyToggleCurrentPickStatusAtIndexPath:(id)arg0 ;
-(void)_reloadAvalancheDataWithAsset:(id)arg0 ;
-(void)_resetPreheating;
-(void)_startPreheatingAllAssets;
-(void)_stopPreheatingAllAssets;
-(void)_toggleCurrentPickStatusAtIndexPath:(id)arg0 ;
-(void)_updateBarItemsAnimated:(BOOL)arg0 ;
-(void)_updateCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)_updateCollectionViewLayoutInsets;
-(void)_updateEnabledNavigationBarItems;
-(void)_updateMainViewAnimated:(BOOL)arg0 ;
-(void)_updateNavigationItemTitle;
-(void)_updatePhotoForAsset:(id)arg0 cell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_updatePreheatedAssets;
-(void)_updateReviewScrubberFromContentOffset;
-(void)dealloc;
-(void)oneUpAssetTransition:(id)arg0 requestTransitionContextWithCompletion:(id)arg1 ;
-(void)pu_assetContainerDidChange:(id)arg0 ;
-(void)reviewScrubber:(id)arg0 willDisplayCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)reviewScrubberDidScrub:(id)arg0 ;
-(void)reviewScrubberDidSelectItemAtIndexPath:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setOneUpPhotosSharingTransitionContext:(id)arg0 ;
-(void)setOneUpPhotosSharingTransitionInfo:(id)arg0 ;
-(void)setPhotosSharingTransitionContext:(id)arg0 ;
-(void)setPhotosSharingTransitionLayout:(id)arg0 animated:(BOOL)arg1 ;
-(void)transitionViewAnimatorDidEnd:(id)arg0 finished:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif