// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUALBUMLISTVIEWCONTROLLER_H
#define PUALBUMLISTVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, NSString, NSArray, UICollectionViewLayout, UIView, PXAssetBadgeManager, PHCachingImageManager, PXCollectionTileLayoutTemplate, UIAlertAction, UIAlertController, _UIContentUnavailableView, PXFeatureSpec, PXFeatureSpecManager, PHImageRequestOptions, UITableView, PXPeopleAlbumProvider, PXPlacesAlbumCoverProvider, NSMutableSet, PHCollection, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, PXPhotoKitCollectionsDataSourceManagerConfiguration, PXEditableNavigationTitleView, NSUserActivity, PXPhotosGlobalFooterView;
@protocol PXAssetCollectionActionPerformerDelegate, PUCollectionsCollectionViewDropDataProvider, UIGestureRecognizerDelegate, PUStackedAlbumTransitionDelegate, PUAlbumStreamActivityDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUCollectionViewReorderDelegate, PUSectionedGridLayoutDelegate, UITableViewDataSource, UITableViewDelegate, PUAlbumListTableViewCellDelegate, UIPopoverPresentationControllerDelegate, PXPhotoLibraryUIChangeObserver, PXSettingsKeyObserver, PXCollectionActionReceiver, PXCollectionsDataSourceManagerObserver, PXPlacesSnapshotFactoryDelegate, PXEditableNavigationTitleViewDelegate, PXNavigableCollectionContainer, PXForcedDismissableViewController, PLCloudFeedNavigating, PXNavigableSharedAlbumActivityFeedHostViewController, PUStackedAlbumControllerTransition;


#import "PUAlbumListViewControllerSpec.h"
#import "PUCollageView.h"
#import "PUAlbumListSectionHeaderView.h"
#import "PUAlbumStreamActivity.h"
#import "PUFeedViewController.h"
#import "PUFontManager.h"
#import "PUCollectionView.h"
#import "PUSectionedGridLayout.h"
#import "PUPhotoPinchGestureRecognizer.h"
#import "PUAlbumListTransitionContext.h"
#import "PUCollectionsCollectionViewDropDelegate.h"
#import "PUAlbumListCell.h"
#import "PUPhotosPickerViewController.h"
#import "PUSessionInfo.h"

@interface PUAlbumListViewController : UIViewController <PXAssetCollectionActionPerformerDelegate, PUCollectionsCollectionViewDropDataProvider, UIGestureRecognizerDelegate, PUStackedAlbumTransitionDelegate, PUAlbumStreamActivityDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUCollectionViewReorderDelegate, PUSectionedGridLayoutDelegate, UITableViewDataSource, UITableViewDelegate, PUAlbumListTableViewCellDelegate, UIPopoverPresentationControllerDelegate, PXPhotoLibraryUIChangeObserver, PXSettingsKeyObserver, PXCollectionActionReceiver, PXCollectionsDataSourceManagerObserver, PXPlacesSnapshotFactoryDelegate, PXEditableNavigationTitleViewDelegate, PXNavigableCollectionContainer, PXForcedDismissableViewController, PLCloudFeedNavigating, PXNavigableSharedAlbumActivityFeedHostViewController, PUStackedAlbumControllerTransition>

 {
    PUAlbumListViewControllerSpec *_spec;
    UIBarButtonItem *_doneButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    UIBarButtonItem *_albumCreationButtonItem;
    NSString *_albumSubtitleFormat;
    BOOL _showAddNewAlbumPlaceholder;
    PUCollageView *_aggregateCollageView;
    NSArray *_keyAssetsForMoments;
    PUAlbumListSectionHeaderView *_sectionHeaderView;
    PUAlbumStreamActivity *_albumStreamActivity;
    BOOL _didInitialRequestForPlacesCount;
    BOOL _didInitialRequestForPeopleCount;
    BOOL _didInitializeMemoriesTitleSupport;
    ? _needsUpdateFlags;
}


@property (nonatomic, setter=_setAboutToCreateAlbum:) BOOL _aboutToCreateAlbum; // ivar: __aboutToCreateAlbum
@property (retain, nonatomic, setter=setAlbumListTransitionLayout:) UICollectionViewLayout *_albumListTransitionLayout; // ivar: __albumListTransitionLayout
@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView; // ivar: __backgroundView
@property (readonly, nonatomic) PXAssetBadgeManager *_badgeManager; // ivar: __badgeManager
@property (retain, nonatomic, setter=_setCachedFeedViewController:) PUFeedViewController *_cachedFeedViewController; // ivar: __cachedFeedViewController
@property (readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // ivar: __cachingImageManager
@property (readonly, nonatomic) PXCollectionTileLayoutTemplate *_collectionTileLayoutTemplate; // ivar: __collectionTileLayoutTemplate
@property (weak, nonatomic, setter=_setCreateAlbumAlertAction:) UIAlertAction *_createAlbumAlertAction; // ivar: __createAlbumAlertAction
@property (weak, nonatomic, setter=_setCurrentDeleteConfirmationAlertController:) UIAlertController *_currentDeleteConfirmationAlertController; // ivar: __currentDeleteConfirmationAlertController
@property (retain, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView; // ivar: __emptyPlaceholderView
@property (retain, nonatomic, setter=_setFeatureSpec:) PXFeatureSpec *_featureSpec; // ivar: __featureSpec
@property (readonly, nonatomic) PXFeatureSpecManager *_featureSpecManager; // ivar: __featureSpecManager
@property (readonly, nonatomic) PUFontManager *_fontManager; // ivar: __fontManager
@property (nonatomic, setter=_setIgnoredReorderNotificationCount:) NSInteger _ignoredReorderNotificationCount; // ivar: __ignoredReorderNotificationCount
@property (readonly, nonatomic) PHImageRequestOptions *_imageRequestOptions; // ivar: __imageRequestOptions
@property (nonatomic, setter=_setKeyboardAware:) BOOL _isKeyboardAware; // ivar: __isKeyboardAware
@property (copy, nonatomic, setter=_setJustCreatedCollectionAnimationCompletionHandler:) id *_justCreatedCollectionAnimationCompletionHandler; // ivar: __justCreatedCollectionAnimationCompletionHandler
@property (retain, nonatomic, setter=_setJustCreatedCollectionIdentifier:) NSString *_justCreatedCollectionIdentifier; // ivar: __justCreatedCollectionIdentifier
@property (nonatomic, setter=_setLayoutReferenceSize:) CGSize _layoutReferenceSize; // ivar: __layoutReferenceSize
@property (nonatomic, setter=_setLayoutSafeAreaInsets:) UIEdgeInsets _layoutSafeAreaInsets; // ivar: __layoutSafeAreaInsets
@property (retain, nonatomic, setter=_setMainCollectionView:) PUCollectionView *_mainCollectionView; // ivar: __mainCollectionView
@property (retain, nonatomic, setter=_setMainCollectionViewLayout:) PUSectionedGridLayout *_mainCollectionViewLayout; // ivar: __mainCollectionViewLayout
@property (retain, nonatomic, setter=_setMainTableView:) UITableView *_mainTableView; // ivar: __mainTableView
@property (copy, nonatomic, setter=_setOnViewDidLayoutSubviewsBlock:) id *_onViewDidLayoutSubviewsBlock; // ivar: __onViewDidLayoutSubviewsBlock
@property (copy, nonatomic, setter=_setPendingScrollingAnimationEndBlock:) id *_pendingScrollingAnimationEndBlock; // ivar: __pendingScrollingAnimationEndBlock
@property (retain, nonatomic, setter=_setPeopleAlbumProvider:) PXPeopleAlbumProvider *_peopleAlbumProvider; // ivar: __peopleAlbumProvider
@property (retain, nonatomic, setter=_setPhotoPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer; // ivar: __photoPinchGestureRecognizer
@property (readonly, nonatomic) PXPlacesAlbumCoverProvider *_placesAlbumCoverProvider; // ivar: __placesAlbumCoverProvider
@property (readonly, nonatomic) UIViewController *_placesContainerController; // ivar: __placesContainerController
@property (retain, nonatomic, setter=_setPreheatedCollections:) NSMutableSet *_preheatedCollections; // ivar: __preheatedCollections
@property (nonatomic, setter=_setPreviousPreheatRect:) CGRect _previousPreheatRect; // ivar: __previousPreheatRect
@property (readonly, nonatomic) NSArray *_syncProgressAlbums; // ivar: __syncProgressAlbums
@property (retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext; // ivar: _albumListTransitionContext
@property (readonly, nonatomic) NSInteger albumsSection;
@property (readonly, nonatomic) _NSRange albumsSections;
@property (nonatomic) BOOL canShowAggregateItem; // ivar: _canShowAggregateItem
@property (retain, nonatomic) PHCollection *collection; // ivar: _collection
@property (retain, nonatomic) PUCollectionsCollectionViewDropDelegate *collectionViewDropDelegate; // ivar: _collectionViewDropDelegate
@property (retain, nonatomic) PXPhotoKitCollectionsDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration; // ivar: _dataSourceManagerConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXEditableNavigationTitleView *editableTitleView; // ivar: _editableTitleView
@property (readonly, nonatomic) PUAlbumListCell *focusedListCell;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRootSharedAlbumList;
@property (weak, nonatomic) PUPhotosPickerViewController *photosPickerViewController; // ivar: _photosPickerViewController
@property (nonatomic) BOOL progressViewVisible; // ivar: _progressViewVisible
@property (retain, nonatomic) PHCollection *pushedAlbum; // ivar: _pushedAlbum
@property (retain, nonatomic) UIViewController *pushedController; // ivar: _pushedController
@property (retain, nonatomic) PHCollection *retitlingCollection; // ivar: _retitlingCollection
@property (retain, nonatomic) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (retain, nonatomic) NSUserActivity *siriActionActivity; // ivar: _siriActionActivity
@property (readonly, nonatomic) PUAlbumListViewControllerSpec *spec;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXPhotosGlobalFooterView *syncProgressView; // ivar: _syncProgressView
@property (readonly, nonatomic) NSInteger topPlaceholdersSection;
@property (nonatomic, getter=isViewInSyncWithModel) BOOL viewInSyncWithModel; // ivar: _viewInSyncWithModel


+(id)newMyAlbumsViewControllerWithSpec:(id)arg0 sessionInfo:(id)arg1 ;
+(id)newMyAlbumsViewControllerWithSpec:(id)arg0 sessionInfo:(id)arg1 dataSourceManager:(id)arg2 ;
+(id)newSharedAlbumsViewControllerWithSpec:(id)arg0 sessionInfo:(id)arg1 ;
+(id)newSharedAlbumsViewControllerWithSpec:(id)arg0 sessionInfo:(id)arg1 dataSourceManager:(id)arg2 ;
-(BOOL)_canDragIn;
-(BOOL)_canTransitionInteractivelyToCollection:(id)arg0 ;
-(BOOL)_canUseStackTransitionFromCollection:(id)arg0 ;
-(BOOL)_isPlaceholderEnabled:(NSInteger)arg0 ;
-(BOOL)_needsUpdate;
-(BOOL)_shouldShowAggregateItem;
-(BOOL)_someAlbumSupportsEditing;
// -(BOOL)_updateInterfaceForIncrementalModelChangeHandler:(id)arg0 withSectionedChangeDetails:(unk)arg1 animated:(id)arg2  ;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)albumListCellContentViewShouldBeginRetitling:(id)arg0 ;
-(BOOL)allowDropForCollectionViewDropDelegate:(id)arg0 ;
-(BOOL)canNavigateToCollection:(id)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canPresentPicker;
-(BOOL)canShowAvatarViews;
-(BOOL)canShowSyncProgress;
-(BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg0 ;
-(BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg0 ;
-(BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canReorderItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSpringLoadItemAtIndexPath:(id)arg1 withContext:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isPlaceholderAtIndexPath:(id)arg0 ;
-(BOOL)isRootFolder;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg0 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg0 ;
-(BOOL)pu_wantsToolbarVisible;
-(BOOL)shouldAllowEmailInAlbumSubtitle;
-(BOOL)shouldAutorotate;
-(BOOL)shouldBeginRetitlingAlbumAtIndexPath:(id)arg0 ;
-(BOOL)shouldEnableCollection:(id)arg0 ;
-(BOOL)shouldHideEmptyCollections;
-(BOOL)shouldShowAllPhotosItem;
-(BOOL)showAddNewAlbumPlaceholder;
-(BOOL)showsEmptyPlaceholderWhenEmpty;
-(BOOL)showsSeparatorBelowTopPlaceholdersSection;
-(BOOL)showsTopPlaceholdersSection;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)updateSpec;
-(CGFloat)sectionedGridLayout:(id)arg0 sectionHeaderHeightForVisualSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_preferredWhitePointAdaptivityStyle;
-(NSInteger)_unfilteredFirstReorderableCollectionIndex;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)numberOfVisualSectionsForSectionedGridLayout:(id)arg0 ;
-(NSInteger)placeholderKindAtIndexPath:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)tableViewStyle;
-(NSUInteger)_editCapabilitiesForAlbum:(id)arg0 ;
-(NSUInteger)_stackViewStyleForCollection:(id)arg0 ;
-(NSUInteger)_unfilteredIndexForFilteredIndexPath:(id)arg0 ;
-(NSUInteger)filteringAssetTypes;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_albumCreationButtonItem;
-(id)_assetsFetchOptions;
-(id)_cancelButtonItem;
-(id)_createControllerForFolder:(id)arg0 ;
-(id)_createControllerForStandInCollection:(id)arg0 ;
-(id)_doneButtonItem;
-(id)_getDisplayableAssetsForStandInCollectionList:(id)arg0 maximumCount:(NSInteger)arg1 useCache:(BOOL)arg2 correspondingCollections:(*id)arg3 ;
-(id)_getDisplayableFacesForCollectionList:(id)arg0 maximumCount:(NSInteger)arg1 ;
-(id)_keyAssetsForMoments;
-(id)_nextCloudFeedNavigatingObject;
-(id)_pickerBannerView;
-(id)_preparedAlbumListCellContentViewAtIndexPath:(id)arg0 ;
-(id)_preparedPlaceholderListCellContentViewAtIndexPath:(id)arg0 ;
-(id)_preparedStackViewAtIndexPath:(id)arg0 ;
-(id)_preparedStackViewForCollection:(id)arg0 ;
-(id)_suppressionContexts;
-(id)_targetIndexPathForMoveFromIndexPath:(id)arg0 toProposedIndexPath:(id)arg1 ;
-(id)_validateNewCollectionTitle:(id)arg0 ;
-(id)_viewControllerForCollection:(id)arg0 userActivity:(*id)arg1 ;
-(id)_visibleAssetsForCollection:(id)arg0 ;
-(id)_visibleAssetsForCollection:(id)arg0 correspondingCollections:(*id)arg1 ;
-(id)_visibleAssetsForCollection:(id)arg0 maximumNumberOfVisibleAssets:(NSInteger)arg1 correspondingCollections:(*id)arg2 ;
-(id)actionPerformerDelegateForCollectionViewDropDelegate:(id)arg0 ;
-(id)assetsFilterPredicate;
-(id)backgroundColorForTableView;
-(id)bestReferenceItemIndexPath;
-(id)collectionAtIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 targetIndexPathForMoveFromIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 transitionLayoutForOldLayout:(id)arg1 newLayout:(id)arg2 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewDropDelegate:(id)arg0 collectionAtIndexPath:(id)arg1 ;
-(id)completionHandler:(SEL)arg0 ;
-(id)editableNavigationTitleView:(id)arg0 validateNewText:(id)arg1 ;
-(id)gridLayout;
-(id)hostViewContoller;
-(id)indexPathForAddNewAlbumPlaceholder;
-(id)indexPathForAlbumListCellContentView:(id)arg0 ;
-(id)indexPathForCollection:(id)arg0 ;
-(id)indexPathForFirstEditableAlbum;
-(id)indexPathForItemAtPoint:(struct CGPoint )arg0 ;
-(id)indexPathForPeopleAlbum;
-(id)indexPathForPlacesAlbum;
-(id)indexPathForPreparedItems;
-(id)indexPathsForItemsInRect:(struct CGRect )arg0 ;
-(id)indexPathsForVisibleItems;
-(id)initWithSpec:(id)arg0 ;
-(id)initWithSpec:(id)arg0 dataSourceManager:(id)arg1 ;
-(id)initWithSpec:(id)arg0 isRootSharedAlbumList:(BOOL)arg1 ;
-(id)mainScrollView;
-(id)newCloudFeedViewController;
-(id)newGridViewControllerForAllPhotos;
-(id)newGridViewControllerForFolder:(id)arg0 ;
-(id)newGridViewControllerForStandInCollection:(id)arg0 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(id)px_gridPresentation;
-(id)px_navigationDestination;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg0 ;
-(id)sectionedGridLayout:(id)arg0 sectionsForVisualSection:(NSInteger)arg1 ;
-(id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg0 ;
-(id)stackedAlbumTransition:(id)arg0 layoutForCollection:(id)arg1 forCollectionView:(id)arg2 ;
-(id)stackedAlbumTransition:(id)arg0 layoutForPHCollection:(id)arg1 forCollectionView:(id)arg2 ;
-(id)subtitleForCollection:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_beginInteractiveNavigationForItemAtPoint:(struct CGPoint )arg0 ;
-(void)_beginInteractiveZoomOut:(id)arg0 ;
-(void)_didSelectPlaceholderAtIndexPath:(id)arg0 ;
-(void)_dismissPhotosPickerControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_ensureEditableTitleView;
-(void)_getDisplayableAssets:(*id)arg0 indexes:(*id)arg1 forCollection:(id)arg2 maximumCount:(NSInteger)arg3 useCache:(BOOL)arg4 ;
-(void)_handleAlbumCreationAction;
-(void)_handleCancelButton:(id)arg0 ;
-(void)_handleCreateAlbumOrFolder:(BOOL)arg0 isSmartAlbum:(BOOL)arg1 ;
-(void)_handleDeleteAlbumAtIndexPath:(id)arg0 ;
-(void)_handleDeleteKeyCommand:(id)arg0 ;
-(void)_handleDoneButton:(id)arg0 ;
-(void)_handleOpenKeyCommand:(id)arg0 ;
-(void)_handlePendingScrollingAnimationEndBlock;
-(void)_handlePhotoPinchGestureRecognizer:(id)arg0 ;
-(void)_handleRenameKeyCommand:(id)arg0 ;
-(void)_initializeMemoriesTitleSupportIfNeeded;
-(void)_invalidatePreparedCellsConfiguration;
-(void)_invalidateSyncProgressAlbums;
-(void)_invalidateTitle;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_navigateToDestination:(id)arg0 provideViewControllers:(BOOL)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_navigateToMemories;
-(void)_navigateToPeopleAnimated:(BOOL)arg0 withPersonLocalIdentifier:(id)arg1 withCompletion:(id)arg2 ;
-(void)_navigateToPlacesFromCollection:(id)arg0 ;
-(void)_navigateToRevealCollection:(id)arg0 animated:(BOOL)arg1 ;
-(void)_peopleAlbumChanged:(id)arg0 ;
// -(void)_performBatchUpdates:(id)arg0 withDeletedSections:(unk)arg1 insertedSections:(id)arg2 changedSections:(id)arg3 deletedItemsIndexPaths:(id)arg4 insertedItemsIndexPaths:(id)arg5 changedItemsIndexPaths:(id)arg6 movedItemsFromIndexPaths:(id)arg7 movedItemsToIndexPaths:(id)arg8 completionHandler:(id)arg9  ;
-(void)_postDidAppearActions;
-(void)_prepareStackView:(id)arg0 forCollection:(id)arg1 withStackCount:(NSInteger)arg2 withCustomEmptyPlaceHolderImage:(id)arg3 ;
-(void)_recursivelyCollectCollectionsIn:(id)arg0 fetchResult:(id)arg1 ;
-(void)_resetConfiguration;
-(void)_resetPreheating;
-(void)_updateAddNewAlbumPlaceholderAnimated:(BOOL)arg0 ;
-(void)_updateAlbumSubtitleFormat;
-(void)_updateCollageView:(id)arg0 forAssets:(id)arg1 ;
-(void)_updateCreateAlbumTextField:(id)arg0 ;
-(void)_updateEmptyPlaceholderAnimated:(BOOL)arg0 ;
-(void)_updateIfNeeded;
-(void)_updateInterfaceForModelReloadAnimated:(BOOL)arg0 ;
-(void)_updateLayoutMetrics;
-(void)_updateMainView;
-(void)_updateNavigationBannerAnimated:(BOOL)arg0 ;
-(void)_updatePeripheralInterfaceAnimated:(BOOL)arg0 ;
-(void)_updatePreheatedAssets;
-(void)_updatePreparedCellsConfigurationIfNeeded;
-(void)_updateStackView:(id)arg0 forAssets:(id)arg1 collection:(id)arg2 withCustomEmptyPlaceholderImage:(id)arg3 ;
-(void)_updateStackView:(id)arg0 forAssets:(id)arg1 memoriesCollection:(id)arg2 memories:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4 ;
-(void)_updateStackView:(id)arg0 forFaces:(id)arg1 inCollection:(id)arg2 withCustomEmptyPlaceholderImage:(id)arg3 ;
-(void)_updateStackView:(id)arg0 forPeopleImages:(id)arg1 inCollection:(id)arg2 withCustomEmptyPlaceholderImage:(id)arg3 ;
-(void)_updateTitle;
// -(void)_visiblyInsertItemAtIndexPath:(id)arg0 modelUpdate:(id)arg1 completionHandler:(unk)arg2  ;
-(void)albumListCellContentView:(id)arg0 didEndRetitlingFromTitle:(id)arg1 toTitle:(id)arg2 ;
-(void)albumListCellContentView:(id)arg0 performDeleteAction:(id)arg1 ;
-(void)albumListTableViewCell:(id)arg0 willChangeState:(NSUInteger)arg1 ;
-(void)albumStreamActivity:(id)arg0 didCreateAlbum:(id)arg1 ;
-(void)albumStreamActivity:(id)arg0 didFinishSuccessfully:(BOOL)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 completionHandler:(id)arg3 ;
-(void)configureSupplementaryView:(id)arg0 ofKind:(id)arg1 forIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)deselectSelectedItemAnimated:(BOOL)arg0 ;
-(void)didSelectItemAtIndexPath:(id)arg0 ;
-(void)editableNavigationTitleViewDidEndEditing:(id)arg0 ;
-(void)handleCreateAlbumOrFolder:(BOOL)arg0 isSmartAlbum:(BOOL)arg1 helper:(id)arg2 ;
-(void)handleSessionInfoAlbumSelection:(id)arg0 ;
-(void)handleTransitionFade:(BOOL)arg0 animate:(BOOL)arg1 ;
-(void)navigateToAllPhotosAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)navigateToCollection:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)navigateToPeopleAnimated:(BOOL)arg0 withPersonLocalIdentifier:(id)arg1 withCompletion:(id)arg2 ;
// -(void)navigateToSharedAlbumActivityFeedAnimated:(BOOL)arg0 configuration:(id)arg1 completion:(unk)arg2  ;
-(void)newAlbum:(id)arg0 ;
-(void)newFolder:(id)arg0 ;
-(void)newSharedAlbum:(id)arg0 ;
-(void)newSmartAlbum:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)placesSnapshotCountDidChange;
-(void)placesSnapshotDidChange;
// -(void)ppt_navigateToPlacesAndRunPreparationBlock:(id)arg0 thenPerformTest:(unk)arg1  ;
// -(void)ppt_performPlacesScrollTest:(id)arg0 preparationHandler:(id)arg1 iterations:(unk)arg2 screenDelta:(NSInteger)arg3 delay:(NSInteger)arg4 completion:(CGFloat)arg5  ;
// -(void)ppt_performPlacesZoomTest:(id)arg0 preparationHandler:(id)arg1 iterations:(unk)arg2 delay:(NSInteger)arg3 completion:(CGFloat)arg4  ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)provideViewControllersForDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)reloadContentView;
-(void)scrollToItemAtIndexPath:(id)arg0 centered:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)sectionedGridLayoutWillPrepareLayout:(id)arg0 ;
-(void)selectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)sessionInfoPhotoSelectionDidChange:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setKeyboardAware:(BOOL)arg0 ;
-(void)setSyncProgressVisible:(BOOL)arg0 ;
-(void)setTitleForCell:(id)arg0 withCollection:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)setupDropDelegateForCollectionView:(id)arg0 ;
-(void)showPlacesCount:(NSInteger)arg0 ;
-(void)showPlacesCount:(NSInteger)arg0 atIndexPath:(id)arg1 ;
-(void)showPlacesPlaceholderImageInStackView:(id)arg0 andContentView:(id)arg1 ;
-(void)stackedAlbumTransition:(id)arg0 setVisibility:(BOOL)arg1 forCollection:(id)arg2 ;
-(void)stackedAlbumTransition:(id)arg0 setVisibility:(BOOL)arg1 forPHCollection:(id)arg2 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)updateAlbumListCellContentView:(id)arg0 forItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateInterfaceLayoutIfNecessary;
-(void)updateListCellForItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateNavigationBarAnimated:(BOOL)arg0 ;
-(void)updatePlaceholderListCellContentView:(id)arg0 forItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateSyncProgress;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif