// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCAROUSELSHARINGVIEWCONTROLLER_H
#define PUCAROUSELSHARINGVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, NSMapTable, UITapGestureRecognizer, NSIndexPath, PXAssetBadgeManager, PHAsset, NSMutableArray, NSMutableSet, UICollectionViewLayout, PHFetchResult, PHCachingImageManager, NSString, UICollectionView, PXPhotosDataSource;
@protocol UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUPhotosSharingCollectionViewLayoutDelegate, PUScrollViewSpeedometerDelegate, PXPhotoLibraryUIChangeObserver, PUPhotoViewContentHelperDelegate, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource, PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController, PUCarouselSharingViewControllerDelegate, OS_os_log;


#import "PUScrollViewSpeedometer.h"
#import "PUAssetTransitionInfo.h"
#import "PUPhotosSharingCollectionViewLayout.h"
#import "PUPhotoSelectionManager.h"
#import "PUPhotosSharingTransitionContext.h"
#import "PUPhotosSharingViewControllerSpec.h"

@interface PUCarouselSharingViewController : UIViewController <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUPhotosSharingCollectionViewLayoutDelegate, PUScrollViewSpeedometerDelegate, PXPhotoLibraryUIChangeObserver, PUPhotoViewContentHelperDelegate, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource, PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController>

 {
    PUScrollViewSpeedometer *_speedometer;
    NSMutableDictionary *_resultsForAssetCollection;
    NSMutableDictionary *_assetItemsByAssetIdentifier;
    NSMapTable *_indexPathsByOptionView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSIndexPath *_inFlightReferenceIndexPath;
    BOOL _shouldScrollToSelection;
    BOOL _inFlightRotation;
    BOOL _shouldPlayVitalityHintAfterViewDidAppear;
}


@property (readonly, nonatomic) PXAssetBadgeManager *_badgeManager; // ivar: __badgeManager
@property (retain, nonatomic, setter=_setLastKnownReferenceAsset:) PHAsset *_lastKnownReferenceAsset; // ivar: __lastKnownReferenceAsset
@property (retain, nonatomic, setter=_setLastKnownReferenceIndexPath:) NSIndexPath *_lastKnownReferenceIndexPath; // ivar: __lastKnownReferenceIndexPath
@property (readonly, nonatomic) NSMutableArray *_livePhotoViewLoaderBlocks; // ivar: __livePhotoViewLoaderBlocks
@property (nonatomic, getter=_isLoopingPlaybackAllowed, setter=_setLoopingPlaybackAllowed:) BOOL _loopingPlaybackAllowed; // ivar: __loopingPlaybackAllowed
@property (readonly, nonatomic) NSMutableArray *_photoViewLoaderBlocks; // ivar: __photoViewLoaderBlocks
@property (copy, nonatomic, setter=_pptSetOnDidEndScrollingBlock:) id *_pptOnDidEndScrollingBlock; // ivar: __pptOnDidEndScrollingBlock
@property (retain, nonatomic, setter=_setPreheatedAssets:) NSMutableSet *_preheatedAssets; // ivar: __preheatedAssets
@property (nonatomic, setter=_setPreviousPreheatRect:) CGRect _previousPreheatRect; // ivar: __previousPreheatRect
@property (retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // ivar: __transitionLayout
@property (nonatomic, getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:) BOOL _viewInSyncWithModel; // ivar: __viewInSyncWithModel
@property (readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
@property (retain, nonatomic) PUAssetTransitionInfo *assetTransitionInfo; // ivar: _assetTransitionInfo
@property (readonly, nonatomic) PHCachingImageManager *cachingImageManager; // ivar: _cachingImageManager
@property (readonly, nonatomic) PHAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUCarouselSharingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PUAssetTransitionInfo *leadingAssetTransitionInfo; // ivar: _leadingAssetTransitionInfo
@property (readonly, nonatomic) NSString *localizedSelectionTitle;
@property (retain, nonatomic, setter=_setMainCollectionView:) UICollectionView *mainCollectionView; // ivar: _mainCollectionView
@property (retain, nonatomic, setter=_setMainCollectionViewLayout:) PUPhotosSharingCollectionViewLayout *mainCollectionViewLayout; // ivar: _mainCollectionViewLayout
@property (readonly, nonatomic) PHFetchResult *photoCollectionsFetchResult; // ivar: _photoCollectionsFetchResult
@property (retain, nonatomic) PUPhotoSelectionManager *photoSelectionManager; // ivar: _photoSelectionManager
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource
@property (retain, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext; // ivar: _photosSharingTransitionContext
@property (nonatomic, getter=isReadyForInteraction) BOOL readyForInteraction; // ivar: _readyForInteraction
@property (nonatomic) BOOL sendAsOriginals; // ivar: _sendAsOriginals
@property (readonly, nonatomic) NSObject<OS_os_log> *sharingLog;
@property (retain, nonatomic) PUPhotosSharingViewControllerSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (retain, nonatomic) PUAssetTransitionInfo *trailingAssetTransitionInfo; // ivar: _trailingAssetTransitionInfo


-(BOOL)_isAnyAssetSelected;
-(BOOL)_shouldShowAsset:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isItemAtIndexPathSelected:(id)arg0 ;
-(BOOL)ppt_scrollToAssetAtRelativeIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(CGFloat)_horizontalOffsetInCollectionView:(id)arg0 forCenteringOnItemAtIndexPath:(id)arg1 ;
-(CGFloat)layout:(id)arg0 collectionView:(id)arg1 bottomBadgeInsetforItemAtIndexPath:(id)arg2 ;
-(NSInteger)_numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)_numberOfSections;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)_indexForPhotoCollection:(id)arg0 ;
-(id)_activityAssetItemForAsset:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)_assetAtIndexPath:(id)arg0 ;
-(id)_badgeTransitionInfosForCell:(id)arg0 ;
-(id)_firstSelectedIndexPath;
-(id)_indexPathInCollectionView:(id)arg0 closestToContentOffsetX:(CGFloat)arg1 ;
-(id)_indexPathInCollectionView:(id)arg0 closestToPoint:(struct CGPoint )arg1 ;
-(id)_indexPathOfAsset:(id)arg0 sectionHint:(NSInteger)arg1 ;
-(id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg0 ;
-(id)_optionViewAtIndexPath:(id)arg0 forCollectionView:(id)arg1 ;
-(id)_photoCollectionAtIndex:(NSInteger)arg0 ;
-(id)_selectionViewAtIndexPath:(id)arg0 forCollectionView:(id)arg1 ;
-(id)_updatedActivityAssetItemsForAssets:(id)arg0 ;
-(id)_validIndexPathFromIndexPath:(id)arg0 ;
-(id)adjacentVisibleAssetsTransitionInfos;
-(id)assetsInAssetCollection:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)currentActivityAssetItems;
-(id)currentIndexPath;
-(id)initWithPhotoCollectionsFetchResult:(id)arg0 assetsFetchResultsByAssetCollection:(id)arg1 selection:(id)arg2 ;
-(id)layout:(id)arg0 collectionView:(id)arg1 referenceIndexPathWithOffsetX:(*CGFloat)arg2 ;
-(id)ppt_scrollView;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(id)referenceAssetTransitionInfo;
-(id)transitionCollectionView;
-(struct CGRect )_collectionViewContentFrame;
-(struct CGRect )_frameAtIndexPath:(id)arg0 inView:(id)arg1 ;
-(struct CGRect )frameForBadgeOfKind:(id)arg0 forItemFrame:(struct CGRect )arg1 atIndexPath:(id)arg2 ;
-(struct CGRect )oneUpAssetTransitionAssetFinalFrame:(id)arg0 ;
-(struct CGSize )_sizeForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )layout:(id)arg0 collectionView:(id)arg1 sizeForBadgeViewOfKind:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(struct CGSize )layout:(id)arg0 collectionView:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_addActivityAssetItem:(id)arg0 ;
-(void)_arrowKey:(id)arg0 ;
-(void)_getFirstValidIndexPath:(*id)arg0 lastValidIndexPath:(*id)arg1 ;
-(void)_getMainCollectionViewFrame:(struct CGRect *)arg0 collectionViewLayoutInsets:(struct UIEdgeInsets *)arg1 ;
-(void)_handleAnimatedImageResult:(id)arg0 forCell:(id)arg1 asset:(id)arg2 tag:(NSInteger)arg3 ;
-(void)_handleLivePhotoRequestResult:(id)arg0 forCell:(id)arg1 tag:(NSInteger)arg2 ;
-(void)_handleLoopingVideoRequestResult:(id)arg0 forCell:(id)arg1 asset:(id)arg2 tag:(NSInteger)arg3 ;
-(void)_handlePhotoViewLoaderBlocks;
-(void)_handleSchedulingLivePhotoRequestResult:(id)arg0 forCell:(id)arg1 tag:(NSInteger)arg2 ;
-(void)_handleSchedulingStillPhotoRequestResult:(id)arg0 forCell:(id)arg1 tag:(NSInteger)arg2 ;
-(void)_handleSelectionOption:(id)arg0 ;
-(void)_handleStillImageRequestResult:(id)arg0 info:(id)arg1 forCell:(id)arg2 indexPath:(id)arg3 ;
-(void)_handleStillPhotoRequestResult:(id)arg0 forCell:(id)arg1 tag:(NSInteger)arg2 ;
-(void)_handleTapAtIndexPath:(id)arg0 ;
-(void)_handleTapInMainCollectionView:(id)arg0 ;
-(void)_pageToIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)_playLivePhotoHintIfNeededAtIndexPath:(id)arg0 ;
-(void)_playVitalityHintAfterViewDidAppear;
-(void)_pptSetOnDidEndScrollingBlock:(id)arg0 ;
-(void)_processCollectionListChangeNotifications:(id)arg0 singleCollectionNotifications:(id)arg1 needsReloadData:(BOOL)arg2 ;
-(void)_removeActivityAssetItem:(id)arg0 ;
-(void)_replaceActivityAssetItem:(id)arg0 withAssetItem:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_resetPreheating;
-(void)_setSelected:(BOOL)arg0 atIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateAdditionalContentForAsset:(id)arg0 cell:(id)arg1 ;
-(void)_updateAdditionalContentForVisibleCells;
-(void)_updateAssetTransitionInfo:(id)arg0 ;
-(void)_updateCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)_updateCellAtIndexPath:(id)arg0 withTransitionInfo:(id)arg1 ;
-(void)_updateInterfaceForModelReloadAnimated:(BOOL)arg0 ;
-(void)_updateLastKnownReferenceIndexPath;
-(void)_updateMainViewAnimated:(BOOL)arg0 ;
-(void)_updateOptionView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_updatePhotoForAsset:(id)arg0 cell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_updatePreheatedAssets;
-(void)_updateVisibleCellBadges;
-(void)_updateVisibleCells;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didEndDisplayingSupplementaryView:(id)arg1 forElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)dealloc;
-(void)deselectItemAtIndexPath:(id)arg0 ;
-(void)layout:(id)arg0 collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didChangeToVisibleFrame:(struct CGRect )arg3 ;
-(void)oneUpAssetTransition:(id)arg0 requestTransitionContextWithCompletion:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)photoViewContentHelper:(id)arg0 livePhotoWillBeginPlaybackWithStyle:(NSInteger)arg1 ;
-(void)ppt_faultInScollViewContentSize;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewSpeedometer:(id)arg0 regimeDidChange:(NSInteger)arg1 from:(NSInteger)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)selectItemAtIndexPath:(id)arg0 ;
-(void)setHideCellForCurrentReferenceAsset:(BOOL)arg0 ;
-(void)setOneUpPhotosSharingTransitionContext:(id)arg0 ;
-(void)setOneUpPhotosSharingTransitionInfo:(id)arg0 ;
-(void)setPhotosSharingTransitionLayout:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif