// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUFEEDVIEWCONTROLLER_H
#define PUFEEDVIEWCONTROLLER_H

@class UIViewController, PXFeedAssetContainerList, PLManagedAsset, PLCloudSharedComment, PHCachingImageManager, UICollectionView, PXFeedDateFormatter, PXFeedSectionInfosManager, NSIndexPath, UIBarButtonItem, NSDictionary, NSMutableArray, PLCloudSharedAlbum, NSMutableSet, PLManagedAlbumList, UITapGestureRecognizer, NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UIPopoverPresentationControllerDelegate, PUFeedCollectionViewLayoutDelegate, PXFeedSectionInfosManagerDelegate, PUPhotoBrowserZoomTransitionDelegate, PUFeedImageCellDelegate, PUFeedPlayerCellDelegate, PUFeedTextCellDelegate, PUFeedInvitationCellDelegate, PUFeedCaptionCellDelegate, UIGestureRecognizerDelegate, PUAlbumStreamActivityDelegate, PUScrollViewSpeedometerDelegate, PUOneUpPresentationHelperDelegate, PXSettingsKeyObserver, UICollectionViewDragSource, PLCloudFeedNavigating, PXNavigableCloudFeedViewController;


#import "PUAlbumStreamActivity.h"
#import "PUScrollViewSpeedometer.h"
#import "PUFeedViewController.h"
#import "PUOneUpPresentationHelper.h"
#import "PUPhotoBrowserOneUpPresentationAdaptor.h"
#import "PUPhotoPinchGestureRecognizer.h"
#import "PUFeedViewControllerRestorableState.h"
#import "PUFeedViewControllerSpec.h"

@interface PUFeedViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIPopoverPresentationControllerDelegate, PUFeedCollectionViewLayoutDelegate, PXFeedSectionInfosManagerDelegate, PUPhotoBrowserZoomTransitionDelegate, PUFeedImageCellDelegate, PUFeedPlayerCellDelegate, PUFeedTextCellDelegate, PUFeedInvitationCellDelegate, PUFeedCaptionCellDelegate, UIGestureRecognizerDelegate, PUAlbumStreamActivityDelegate, PUScrollViewSpeedometerDelegate, PUOneUpPresentationHelperDelegate, PXSettingsKeyObserver, UICollectionViewDragSource, PLCloudFeedNavigating, PXNavigableCloudFeedViewController>



@property (retain, nonatomic, setter=_setAlbumStreamActivity:) PUAlbumStreamActivity *_albumStreamActivity; // ivar: __albumStreamActivity
@property (nonatomic, setter=_setAppJustEnteredForeground:) BOOL _appJustEnteredForeground; // ivar: __appJustEnteredForeground
@property (nonatomic, setter=_setAssetsAddedCachedSectionHeaderSize:) CGSize _assetsAddedCachedSectionHeaderSize; // ivar: __assetsAddedCachedSectionHeaderSize
@property (nonatomic, setter=_setBarsState:) NSInteger _barsState; // ivar: __barsState
@property (retain, nonatomic, setter=_setBrowsingAssetContainerList:) PXFeedAssetContainerList *_browsingAssetContainerList; // ivar: __browsingAssetContainerList
@property (retain, nonatomic, setter=_setBrowsingSelectedAsset:) PLManagedAsset *_browsingSelectedAsset; // ivar: __browsingSelectedAsset
@property (retain, nonatomic, setter=_setBrowsingSelectedComment:) PLCloudSharedComment *_browsingSelectedComment; // ivar: __browsingSelectedComment
@property (readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // ivar: __cachingImageManager
@property (nonatomic, getter=_hasCheckedLibraryUpdatingExpiration, setter=_setCheckedLibraryUpdatingExpiration:) BOOL _checkedLibraryUpdatingExpiration; // ivar: __checkedLibraryUpdatingExpiration
@property (nonatomic, getter=_isCollectionViewScrolledToNewest, setter=_setCollectionViewScrolledToNewest:) BOOL _collectionViewScrolledToNewest; // ivar: __collectionViewScrolledToNewest
@property (retain, nonatomic, setter=_setCollectionViewSpeedometer:) PUScrollViewSpeedometer *_collectionViewSpeedometer; // ivar: __collectionViewSpeedometer
@property (retain, nonatomic, setter=_setCurrentCollectionView:) UICollectionView *_currentCollectionView; // ivar: __currentCollectionView
@property (nonatomic, setter=_setCurrentCollectionViewType:) NSInteger _currentCollectionViewType; // ivar: __currentCollectionViewType
@property (readonly, nonatomic) PXFeedDateFormatter *_dateFormatter; // ivar: __dateFormatter
@property (readonly, nonatomic) PXFeedSectionInfosManager *_feedSectionInfosManager; // ivar: __feedSectionInfosManager
@property (nonatomic, getter=_isFlowDirectionReversed, setter=_setFlowDirectionReversed:) BOOL _flowDirectionReversed; // ivar: __flowDirectionReversed
@property (nonatomic, setter=_setHasAppeared:) BOOL _hasAppeared; // ivar: __hasAppeared
@property (copy, nonatomic, setter=_setIndexPathForImageHiddenDuringZoomTransition:) NSIndexPath *_indexPathForImageHiddenDuringZoomTransition; // ivar: __indexPathForImageHiddenDuringZoomTransition
@property (nonatomic, getter=_isInterfaceBatchUpdateScheduled, setter=_setInterfaceBatchUpdateScheduled:) BOOL _interfaceBatchUpdateScheduled; // ivar: __interfaceBatchUpdateScheduled
@property (retain, nonatomic, setter=_setInvitationsBarButtonItem:) UIBarButtonItem *_invitationsBarButtonItem; // ivar: __invitationsBarButtonItem
@property (retain, nonatomic, setter=_setInvitationsPopoverRootController:) PUFeedViewController *_invitationsPopoverRootController; // ivar: __invitationsPopoverRootController
@property (nonatomic, getter=_isInvitationsPopoverShowPending, setter=_setInvitationsPopoverShowPending:) BOOL _invitationsPopoverShowPending; // ivar: __invitationsPopoverShowPending
@property (retain, nonatomic, setter=_setJustLikedSections:) NSDictionary *_justLikedSections; // ivar: __justLikedSections
@property (retain, nonatomic) NSMutableArray *_lastPreheatIndexPathInfoList; // ivar: __lastPreheatIndexPathInfoList
@property (retain, nonatomic) NSMutableArray *_lastPreheatIndexPathList; // ivar: __lastPreheatIndexPathList
@property (nonatomic, setter=_setLastPreheatedContentOffset:) CGPoint _lastPreheatedContentOffset; // ivar: __lastPreheatedContentOffset
@property (nonatomic, getter=_isLibraryUpdatingPreviouslyExpired, setter=_setLibraryUpdatingPreviouslyExpired:) BOOL _libraryUpdatingPreviouslyExpired; // ivar: __libraryUpdatingPreviouslyExpired
@property (nonatomic, setter=_setLoadedSectionInfosWindowSize:) NSInteger _loadedSectionInfosWindowSize; // ivar: __loadedSectionInfosWindowSize
@property (nonatomic, setter=_setNeedsUpdateLayout:) BOOL _needsUpdateLayout; // ivar: __needsUpdateLayout
@property (nonatomic, getter=_isOneUpDataSourceUpdateScheduled, setter=_setOneUpDataSourceUpdateScheduled:) BOOL _oneUpDataSourceUpdateScheduled; // ivar: __oneUpDataSourceUpdateScheduled
@property (retain, nonatomic, setter=_setOneUpPresentationAssetContainerList:) PXFeedAssetContainerList *_oneUpPresentationAssetContainerList; // ivar: __oneUpPresentationAssetContainerList
@property (retain, nonatomic, setter=_setOneUpPresentationHelper:) PUOneUpPresentationHelper *_oneUpPresentationHelper; // ivar: __oneUpPresentationHelper
@property (retain, nonatomic, setter=_setPhotoBrowserOneUpPresentationAdaptor:) PUPhotoBrowserOneUpPresentationAdaptor *_photoBrowserOneUpPresentationAdaptor; // ivar: __photoBrowserOneUpPresentationAdaptor
@property (retain, nonatomic, setter=_setPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_pinchGestureRecognizer; // ivar: __pinchGestureRecognizer
@property (retain, nonatomic, setter=_setPinchedCollectionView:) UICollectionView *_pinchedCollectionView; // ivar: __pinchedCollectionView
@property (nonatomic, setter=_setPreheatingWindowSize:) CGFloat _preheatingWindowSize; // ivar: __preheatingWindowSize
@property (nonatomic, setter=_setPreviousSafeAreaInsets:) UIEdgeInsets _previousSafeAreaInsets; // ivar: __previousSafeAreaInsets
@property (retain, nonatomic, setter=_setPushedAlbum:) PLCloudSharedAlbum *_pushedAlbum; // ivar: __pushedAlbum
@property (retain, nonatomic, setter=_setPushedViewController:) UIViewController *_pushedViewController; // ivar: __pushedViewController
@property (retain, nonatomic, setter=_setRotationLastRestorableState:) PUFeedViewControllerRestorableState *_rotationLastRestorableState; // ivar: __rotationLastRestorableState
@property (retain, nonatomic, setter=_setSectionInfosWithCommentChanges:) NSMutableSet *_sectionInfosWithCommentChanges; // ivar: __sectionInfosWithCommentChanges
@property (readonly, nonatomic) PLManagedAlbumList *_sharedAlbumList; // ivar: __sharedAlbumList
@property (nonatomic, setter=_setShouldSuspendQualityImageFormats:) BOOL _shouldSuspendQualityImageFormats; // ivar: __shouldSuspendQualityImageFormats
@property (nonatomic, setter=_setSizeTransitionState:) NSInteger _sizeTransitionState; // ivar: __sizeTransitionState
@property (retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // ivar: __tapGestureRecognizer
@property (retain, nonatomic, setter=_setTargetCollectionView:) UICollectionView *_targetCollectionView; // ivar: __targetCollectionView
@property (nonatomic, setter=_setTargetCollectionViewType:) NSInteger _targetCollectionViewType; // ivar: __targetCollectionViewType
@property (nonatomic, setter=_setTargetSize:) CGSize _targetSize; // ivar: __targetSize
@property (retain, nonatomic, setter=_setUpdatedAssets:) NSMutableSet *_updatedAssets; // ivar: __updatedAssets
@property (nonatomic, setter=_setUserDidDismissPlaceholder:) BOOL _userDidDismissPlaceholder; // ivar: __userDidDismissPlaceholder
@property (nonatomic, setter=_setViewDidAppear:) BOOL _viewDidAppear; // ivar: __viewDidAppear
@property (nonatomic, getter=_areViewsInSyncWithModel, setter=_setViewsInSyncWithModel:) BOOL _viewsInSyncWithModel; // ivar: __viewsInSyncWithModel
@property (readonly, nonatomic) NSInteger contentType; // ivar: _contentType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *imageCellsPlayingVideo; // ivar: _imageCellsPlayingVideo
@property (nonatomic) BOOL observingPopoverContentSizeChange; // ivar: _observingPopoverContentSizeChange
@property (copy, nonatomic) id *onNextViewLayout; // ivar: _onNextViewLayout
@property (readonly, nonatomic) PUFeedViewControllerSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_areSharedStreamsEnabled;
-(BOOL)_beginInteractiveNavigationForItemAtIndexPath:(id)arg0 inCollectionView:(id)arg1 ;
-(BOOL)_beginPlayingVideoInCellIfNeeded:(id)arg0 ;
-(BOOL)_confidentialityWarningRequiredForAsset:(id)arg0 ;
-(BOOL)_configureTextCell:(id)arg0 forFooterOfSection:(NSInteger)arg1 inCollectionView:(id)arg2 ;
-(BOOL)_isAnySharedAlbumAvailable;
-(BOOL)_isCollectionViewEmpty:(id)arg0 ;
-(BOOL)_isLibraryUpdatingTimeoutExpired;
-(BOOL)_navigateToRevealComment:(id)arg0 completion:(id)arg1 ;
-(BOOL)_setupBrowsingFromItemAtIndexPath:(id)arg0 inCollectionView:(id)arg1 ;
-(BOOL)_shouldHideHeaderForSectionWithType:(NSInteger)arg0 ;
-(BOOL)_shouldHideSectionInfo:(id)arg0 forCollectionView:(id)arg1 ;
-(BOOL)_shouldHideSectionWithType:(NSInteger)arg0 inCollectionViewType:(NSInteger)arg1 ;
-(BOOL)_shouldJoinSectionInfo:(id)arg0 withSectionInfo:(id)arg1 collectionViewType:(NSInteger)arg2 ;
-(BOOL)_shouldNavigateToNewestContent;
-(BOOL)_shouldShowBarsForCollectionViewType:(NSInteger)arg0 ;
-(BOOL)_shouldShowTransitionUI;
-(BOOL)_updateSpec;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canDragOut;
-(BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg0 ;
-(BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg0 ;
-(BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 layout:(id)arg1 shouldHideHeaderInSection:(NSInteger)arg2 ;
-(BOOL)collectionView:(id)arg0 layout:(id)arg1 shouldHideSection:(NSInteger)arg2 ;
-(BOOL)collectionView:(id)arg0 layout:(id)arg1 shouldJoinSection:(NSInteger)arg2 withSection:(NSInteger)arg3 ;
-(BOOL)collectionView:(id)arg0 layout:(id)arg1 shouldShowCaptionForTileAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg0 layout:(id)arg1 shouldShowLikesForTileAtIndexPath:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg0 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg0 ;
-(BOOL)pu_wantsNavigationBarVisible;
-(BOOL)pu_wantsTabBarVisible;
-(BOOL)pu_wantsToolbarVisible;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(BOOL)zoomTransition:(id)arg0 getFrame:(struct CGRect *)arg1 inCoordinateSpace:(*id)arg2 contentMode:(*NSInteger)arg3 cropInsets:(struct UIEdgeInsets *)arg4 forPhotoToken:(id)arg5 operation:(NSInteger)arg6 ;
-(BOOL)zoomTransition:(id)arg0 transitionImageForPhotoToken:(id)arg1 callback:(id)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 spacingBetweenSection:(NSInteger)arg2 andHeaderForGroupID:(id)arg3 ;
-(NSInteger)_browsingSelectedSection;
-(NSInteger)_collectionViewTypeForSize:(struct CGSize )arg0 ;
-(NSInteger)_defaultMaximumScrollRegimeForQualityImageFormats;
-(NSInteger)_numberOfSectionInfosForCollectionView:(id)arg0 ;
-(NSInteger)_placeholderTypeForSizeTransitionState:(NSInteger)arg0 ;
-(NSInteger)_typeForCollectionView:(id)arg0 ;
-(NSInteger)_typeForSectionInfo:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 layout:(id)arg1 commentCountForTileAtIndexPath:(id)arg2 ;
-(NSInteger)collectionView:(id)arg0 layout:(id)arg1 configurationForSectionHeaderType:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 layout:(id)arg1 typeForSection:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_assetForItemAtIndexPath:(id)arg0 inCollectionView:(id)arg1 ;
-(id)_browsingSelectedIndexPath;
-(id)_collectionView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)_collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_collectionViewContainingView:(id)arg0 ;
-(id)_collectionViews;
-(id)_createOneUpPhotosDataSource;
-(id)_currentRestorableState;
-(id)_dateForSectionWithInfo:(id)arg0 ;
-(id)_dragItemsForIndexPath:(id)arg0 ;
-(id)_groupIDForSectionWithInfo:(id)arg0 ;
-(id)_indexPathForItemWithAsset:(id)arg0 inCollectionView:(id)arg1 ;
-(id)_loadedSectionInfoForCloudFeedEntry:(id)arg0 ;
-(id)_placeholderConfiguration:(NSInteger)arg0 ;
-(id)_sectionInfoForSection:(NSInteger)arg0 collectionView:(id)arg1 ;
-(id)_sectionInfosForBrowsingFromSectionInfo:(id)arg0 ;
-(id)_sectionInfosForSections:(id)arg0 collectionView:(id)arg1 ;
-(id)_suppressionContexts;
-(id)_textForDate:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 layout:(id)arg1 batchIDForTileAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 layout:(id)arg1 groupIDForSection:(NSInteger)arg2 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithSpec:(id)arg0 contentType:(NSInteger)arg1 ;
-(id)oneUpPresentationHelperScrollView:(id)arg0 ;
-(id)oneUpPresentationHelperViewController:(id)arg0 ;
-(id)px_navigationDestination;
-(id)zoomTransition:(id)arg0 photoTokenForPhoto:(id)arg1 inCollection:(id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 captionSizeForTileAtIndexPath:(id)arg2 proposedSize:(struct CGSize )arg3 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 commentSizeForTileAtIndexPath:(id)arg2 commentIndex:(NSInteger)arg3 proposedSize:(struct CGSize )arg4 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 headerSizeForGroupID:(id)arg2 proposedSize:(struct CGSize )arg3 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 imageSizeForTileAtIndexPath:(id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 likesSizeForTileAtIndexPath:(id)arg2 proposedSize:(struct CGSize )arg3 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 mininumSizeForTileAtIndexPath:(id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForFooterInSection:(NSInteger)arg2 proposedSize:(struct CGSize )arg3 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForHeaderOfSections:(id)arg2 proposedSize:(struct CGSize )arg3 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForRowAtIndexPath:(id)arg2 proposedSize:(struct CGSize )arg3 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForThumbnailInSection:(NSInteger)arg2 ;
-(struct CGSize )preferredContentSize;
-(struct PUFeedSeparatorMetrics )collectionView:(id)arg0 layout:(id)arg1 metricsForSeparatorBetweenRowAtIndexPath:(id)arg2 andRowAtIndexPath:(id)arg3 proposedMetrics:(struct PUFeedSeparatorMetrics )arg4 ;
-(struct PUFeedSeparatorMetrics )collectionView:(id)arg0 layout:(id)arg1 metricsForSeparatorBetweenSection:(NSInteger)arg2 andSection:(NSInteger)arg3 proposedMetrics:(struct PUFeedSeparatorMetrics )arg4 ;
-(struct UIEdgeInsets )_desiredSafeAreaInsetsForCollectionViewType:(NSInteger)arg0 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 contentInsetsForSection:(NSInteger)arg2 ;
-(void)_appDidEnterBackground:(id)arg0 ;
-(void)_appDidFinishEnteringForeground;
-(void)_appWillEnterForeground:(id)arg0 ;
-(void)_autoHideBarsNow;
-(void)_cancelBarsAutoHide;
-(void)_clearOneUpPresentationHelper;
-(void)_configureBadgedThumbnailCell:(id)arg0 forThumbnailsAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureCaptionCell:(id)arg0 forCaptionAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureCollectionView:(id)arg0 isVertical:(BOOL)arg1 ;
-(void)_configureImageCell:(id)arg0 forAssetAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureImageCell:(id)arg0 forThumbnailAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureInvitationCell:(id)arg0 forInvitationAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configurePlayerCell:(id)arg0 forAssetAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureSpeedometer:(id)arg0 ;
-(void)_configureStackCell:(id)arg0 forThumbnailsAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureTextCell:(id)arg0 forCommentAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureTextCell:(id)arg0 forHeaderOfGroupID:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureTextCell:(id)arg0 forHeaderOfSections:(id)arg1 inCollectionView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_configureTextCell:(id)arg0 forLikesAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureTextCell:(id)arg0 forTextAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureTitleCell:(id)arg0 forHeaderOfSections:(id)arg1 inCollectionView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_configureTitleCell:(id)arg0 forTextAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_contextDidFinishRemoteMerge:(id)arg0 ;
-(void)_createNewStream;
-(void)_dateFormatterChanged:(id)arg0 ;
-(void)_didTapCommentButtonInFeedCell:(id)arg0 ;
-(void)_didTapSectionFooterFeedCell:(id)arg0 ;
-(void)_didTapSectionHeaderFeedCell:(id)arg0 ;
-(void)_didTapThumbnailOrOverlayPlayButtonInFeedCell:(id)arg0 ;
-(void)_dismissInvitationsPopoverIfNeeded;
-(void)_endPlayingVideoInCellIfNeeded:(id)arg0 ;
-(void)_ensureOneUpPresentationHelper;
-(void)_ensureWindowOfLoadedSectionInfosIncludesSection:(NSInteger)arg0 ;
-(void)_enumerateCenterAssetsInRestorableState:(id)arg0 inCollectionView:(id)arg1 usingBlock:(id)arg2 ;
-(void)_expandWindowOfLoadedSectionInfos;
-(void)_getDescriptionPhrase:(*id)arg0 streamDisclosureLabel:(*id)arg1 actionText:(*id)arg2 buttonType:(*NSInteger)arg3 forSections:(id)arg4 inCollectionView:(id)arg5 ;
-(void)_handlePinch:(id)arg0 ;
-(void)_handlePlaceholderAction;
-(void)_handleTap:(id)arg0 ;
-(void)_handleVideoRequestID:(int)arg0 forCellAtIndexPath:(id)arg1 withTag:(NSInteger)arg2 ;
-(void)_handleVideoRequestResult:(id)arg0 forCellAtIndexPath:(id)arg1 withTag:(NSInteger)arg2 ;
-(void)_invalidateCachedMetrics;
-(void)_invalidateLastPreheatedContentOffset;
-(void)_invalidatePreheatedAssets;
-(void)_invitationsButtonAction:(id)arg0 ;
-(void)_libraryUpdatingDidExpire:(id)arg0 ;
-(void)_navigateToOneUpBrowserAnimated:(BOOL)arg0 ;
-(void)_navigateToOneUpBrowserWithOptions:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_navigateToOneUpBrowserWithOptions:(NSInteger)arg0 animated:(BOOL)arg1 pinchGestureRecognizer:(id)arg2 ;
-(void)_navigateToRevealAsset:(id)arg0 completion:(id)arg1 ;
-(void)_navigateToRevealPhoto:(id)arg0 inAlbum:(id)arg1 animated:(BOOL)arg2 ;
-(void)_navigateToSectionInfo:(id)arg0 atItemIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_openiCloudSettings;
-(void)_performInterfaceBatchUpdateNow;
-(void)_performOnNextViewLayout:(id)arg0 ;
-(void)_performOneUpDataSourceUpdateNow;
-(void)_preferredContentSizeChanged:(id)arg0 ;
-(void)_preheatSectionInfosAtIndexes:(id)arg0 ;
-(void)_presentConfidentialityWarning;
-(void)_reduceMotionStatusChanged:(id)arg0 ;
-(void)_requestImageForAsset:(id)arg0 tileSize:(struct CGSize )arg1 completion:(id)arg2 ;
// -(void)_requestPlayerItemForAsset:(id)arg0 preparation:(id)arg1 completion:(unk)arg2  ;
-(void)_restoreScrollPositionInCollectionView:(id)arg0 fromRestorableState:(id)arg1 ;
-(void)_scheduleBarsAutoHide;
-(void)_scheduleInterfaceUpdateForSectionInfosWithCommentChanges:(id)arg0 updatedAssets:(id)arg1 ;
-(void)_scheduleOneUpDataSourceUpdate;
-(void)_setUserCloudSharedLiked:(BOOL)arg0 forItemsInSections:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_setupBrowsingFromAsset:(id)arg0 orComment:(id)arg1 ;
-(void)_showInvitationsPopoverAnimated:(BOOL)arg0 ;
-(void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg0 completionHandler:(id)arg1 ;
-(void)_startObservingPopoverContentSizeIfNecessary;
-(void)_stopObservingPopoverContentSizeIfNecessary;
-(void)_tearDownBrowsing;
-(void)_updateBrowsingAssetContainerList;
-(void)_updateCellsVideoEnabledness;
-(void)_updateCollectionViews;
-(void)_updateEmptyPlaceholder;
-(void)_updateInterfaceForDeletedSections:(id)arg0 insertedSections:(id)arg1 updatedSections:(id)arg2 ;
-(void)_updateInterfaceForModelReloadAnimated:(BOOL)arg0 ;
-(void)_updateNavigationItemAnimated:(BOOL)arg0 ;
-(void)_updateOneUpBrowsingCurrentAssetReference;
-(void)_updateOneUpDataSource;
-(void)_updateParallaxForCollectionView:(id)arg0 ;
-(void)_updatePeripheralInterfaceAnimated:(BOOL)arg0 ;
-(void)_updatePreheatedAssetsForCollectionView:(id)arg0 ;
-(void)_updateSectionsWithCaptionChangesFromUpdatedAssets:(id)arg0 ;
-(void)_updateSectionsWithLikesAndCommentChangesFromUpdatedAssets:(id)arg0 ;
-(void)_updateWindowOfLoadedSectionInfos;
-(void)_userDidScrollFeed;
-(void)_userDidViewFeed;
-(void)_viewWillLayoutBeforeAppearing;
-(void)assetContainerListDidChange:(id)arg0 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 layout:(id)arg1 referenceMaximumLength:(*CGFloat)arg2 minimumNumberOfTilesToOmit:(*NSInteger)arg3 forSection:(NSInteger)arg4 ;
-(void)dealloc;
-(void)didTapButtonInFeedTextCell:(id)arg0 ;
-(void)didTapCommentButtonInFeedImageCell:(id)arg0 ;
-(void)didTapCommentButtonInFeedPlayerCell:(id)arg0 ;
-(void)didTapFeedCell:(id)arg0 ;
-(void)didTapLikeButtonInFeedCaptionCell:(id)arg0 ;
-(void)didTapOverlayPlayButtonInFeedImageCell:(id)arg0 ;
-(void)feedInvitationCell:(id)arg0 didAccept:(BOOL)arg1 ;
-(void)feedInvitationCell:(id)arg0 presentViewController:(id)arg1 ;
-(void)feedInvitationCellReportAsJunk:(id)arg0 ;
-(void)feedSectionInfosManager:(id)arg0 sectionInfosDidChange:(id)arg1 ;
-(void)navigateToCloudFeedAsset:(id)arg0 completion:(id)arg1 ;
-(void)navigateToCloudFeedComment:(id)arg0 completion:(id)arg1 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)navigateToNewestContentAnimated:(BOOL)arg0 ;
-(void)navigateToRevealCloudFeedAsset:(id)arg0 completion:(id)arg1 ;
-(void)navigateToRevealCloudFeedComment:(id)arg0 completion:(id)arg1 ;
-(void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg0 completion:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)oneUpPresentationHelper:(id)arg0 didDismissOneUpViewController:(id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg0 willPresentOneUpViewController:(id)arg1 ;
-(void)performWhenReadyToNavigate:(id)arg0 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewSpeedometer:(id)arg0 regimeDidChange:(NSInteger)arg1 from:(NSInteger)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)zoomTransition:(id)arg0 didFinishForOperation:(NSInteger)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)zoomTransition:(id)arg0 setVisibility:(BOOL)arg1 forPhotoToken:(id)arg2 ;
-(void)zoomTransition:(id)arg0 willBeginForOperation:(NSInteger)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;


@end


#endif