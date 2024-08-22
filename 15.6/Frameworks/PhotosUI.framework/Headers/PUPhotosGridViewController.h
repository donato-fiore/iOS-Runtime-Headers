// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOSGRIDVIEWCONTROLLER_H
#define PUPHOTOSGRIDVIEWCONTROLLER_H

@class UICollectionViewController, UIView, PHFetchResult, PHAsset, PHAssetCollection, NSIndexPath, NSIndexSet, UIBarButtonItem, UINavigationButton, UILongPressGestureRecognizer, NSMutableDictionary, UIViewController, UICollectionViewLayout, PXAssetBadgeManager, PHCachingImageManager, UIContextMenuInteraction, PLDateRangeFormatter, UIMultiSelectInteraction, UIPopoverPresentationController, NSString, UICollectionViewLayout<PUGridLayoutProtocol>, PXPhotosDataSource, UIActivityViewController;
@protocol UIPopoverPresentationControllerDelegate, PUCollectionViewSelectionDelegate, PUSessionInfoObserver, PHAssetCollectionDataSource, PXSettingsKeyObserver, PXPhotosDataSourceChangeObserver, PUDeletePhotosActionControllerDelegate, PXActivitySharingControllerDelegate, PUSlideshowViewControllerDelegate, PXCMMActionPerformerDelegate, PUOneUpPresentationHelperDelegate, PUSwipeSelectionManagerDelegate, PUSwipeSelectionManagerDataSource, PXAutoScrollerDelegate, PXPhotosGlobalFooterViewDelegate, PXPhotosGlobalFooterViewLayoutDelegate, PUPhotosGridBarsHelperDelegate, UICollectionViewDragSource, UICollectionViewDragDestination, UIDropInteractionDelegate, UIMultiSelectInteractionDelegate, UIGestureRecognizerDelegate, PXNavigableAssetContainerViewController, PXForcedDismissableViewController, PUStackedAlbumControllerTransition, PUScrollViewSpeedometerDelegate, PUPhotosGridViewSupplementalToolbarProvider;


#import "PUAlbumPickerViewController.h"
#import "PUPhotosGridBarsHelper.h"
#import "PUScrollViewSpeedometer.h"
#import "PUDeletePhotosActionController.h"
#import "PUDuplicateActionController.h"
#import "PUPhotoBrowserOneUpPresentationAdaptor.h"
#import "PUSlideshowViewController.h"
#import "PUSwipeSelectionManager.h"
#import "PUActivitySharingController.h"
#import "PUAlbumListTransitionContext.h"
#import "PUPhotosGridViewControllerSpec.h"
#import "PUOneUpPresentationHelper.h"
#import "PUPhotoPinchGestureRecognizer.h"
#import "PUPhotoSelectionManager.h"
#import "PUSessionInfo.h"

@interface PUPhotosGridViewController : UICollectionViewController <UIPopoverPresentationControllerDelegate, PUCollectionViewSelectionDelegate, PUSessionInfoObserver, PHAssetCollectionDataSource, PXSettingsKeyObserver, PXPhotosDataSourceChangeObserver, PUDeletePhotosActionControllerDelegate, PXActivitySharingControllerDelegate, PUSlideshowViewControllerDelegate, PXCMMActionPerformerDelegate, PUOneUpPresentationHelperDelegate, PUSwipeSelectionManagerDelegate, PUSwipeSelectionManagerDataSource, PXAutoScrollerDelegate, PXPhotosGlobalFooterViewDelegate, PXPhotosGlobalFooterViewLayoutDelegate, PUPhotosGridBarsHelperDelegate, UICollectionViewDragSource, UICollectionViewDragDestination, UIDropInteractionDelegate, UIMultiSelectInteractionDelegate, UIGestureRecognizerDelegate, PXNavigableAssetContainerViewController, PXForcedDismissableViewController, PUStackedAlbumControllerTransition, PUScrollViewSpeedometerDelegate>

 {
    BOOL _isMenuIndexPathExact;
    BOOL _showingMenu;
    BOOL _contentViewInSyncWithModel;
    BOOL _didScrollToInitialPosition;
    UIView *_alternateContentView;
    CGFloat _lastTransitionWidth;
    PHFetchResult *_collectionListFetchResultBeforeChange;
    PHAsset *_visibleReferenceAssetBeforeChange;
    PHAssetCollection *_visibleReferenceAssetContainerBeforeChange;
    NSIndexPath *_visibleReferenceAssetIndexPathBeforeChange;
    CGFloat _visibleReferenceAssetRelativeYBeforeChange;
    NSIndexSet *_visibleSectionsBeforeChange;
    UIBarButtonItem *_selectSessionDoneBarButtonItem;
    UIBarButtonItem *_selectSessionCancelBarButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    UINavigationButton *_selectionButton;
    UIBarButtonItem *_selectAllBarButtonItem;
    UIBarButtonItem *_deselectAllBarButtonItem;
    UIBarButtonItem *_shareToolbarButton;
    UIBarButtonItem *_addToolbarButton;
    UIBarButtonItem *_removeToolbarButton;
    UIBarButtonItem *_restoreToolbarButton;
    UIBarButtonItem *_slideshowButtonSpacer;
    UIBarButtonItem *_slideshowButton;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSMutableDictionary *_progressInfosByIdentifier;
    NSMutableDictionary *_progressInfosByCachedIndexPath;
    id *_pendingNavigationBlock;
    NSUInteger _suppressesColorSettingsCount;
    NSUInteger _coalescedSelectionEntranceCount;
    CGFloat _lastUserScrollTime;
}


@property (weak, nonatomic, setter=_setActionConfirmationAlert:) UIViewController *_actionConfirmationAlert; // ivar: __actionConfirmationAlert
@property (retain, nonatomic, setter=setAlbumListTransitionLayout:) UICollectionViewLayout *_albumListTransitionLayout; // ivar: __albumListTransitionLayout
@property (retain, nonatomic, setter=_setAlbumPickerViewController:) PUAlbumPickerViewController *_albumPickerViewController; // ivar: __albumPickerViewController
@property (readonly, nonatomic) PXAssetBadgeManager *_badgeManager; // ivar: __badgeManager
@property (readonly, nonatomic) PUPhotosGridBarsHelper *_barsHelper; // ivar: __barsHelper
@property (nonatomic, setter=_setBatchPreheatingCount:) NSInteger _batchPreheatingCount; // ivar: __batchPreheatingCount
@property (retain, nonatomic, setter=_setCachedViewSizeTransitionContext:) id *_cachedViewSizeTransitionContext; // ivar: __cachedViewSizeTransitionContext
@property (nonatomic, setter=_setCachedViewSizeTransitionContextSize:) CGSize _cachedViewSizeTransitionContextSize; // ivar: __cachedViewSizeTransitionContextSize
@property (readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // ivar: __cachingImageManager
@property (retain, nonatomic, setter=_setCollectionViewSpeedometer:) PUScrollViewSpeedometer *_collectionViewSpeedometer; // ivar: __collectionViewSpeedometer
@property (retain, nonatomic, setter=_setContextMenuInteraction:) UIContextMenuInteraction *_contextMenuInteraction; // ivar: __contextMenuInteraction
@property (readonly, nonatomic) PLDateRangeFormatter *_dateRangeFormatter; // ivar: __dateRangeFormatter
@property (retain, nonatomic, setter=_setDeleteActionController:) PUDeletePhotosActionController *_deleteActionController; // ivar: __deleteActionController
@property (nonatomic, setter=_setDidForceDataSource:) BOOL _didForceDataSource; // ivar: __didForceDataSource
@property (retain, nonatomic, setter=_setDuplicateActionController:) PUDuplicateActionController *_duplicateActionController; // ivar: __duplicateActionController
@property (retain, nonatomic, setter=_setEmptyPlaceholderView:) UIView *_emptyPlaceholderView; // ivar: __emptyPlaceholderView
@property (nonatomic, setter=_setMaximumNumberOfRowsToPreheat:) NSInteger _maximumNumberOfRowsToPreheat; // ivar: __maximumNumberOfRowsToPreheat
@property (retain, nonatomic, setter=_setMenuIndexPath:) NSIndexPath *_menuIndexPath; // ivar: __menuIndexPath
@property (retain, nonatomic) UIMultiSelectInteraction *_multiSelectInteraction; // ivar: __multiSelectInteraction
@property (nonatomic, setter=_setNeedsNewEmptyPlaceholderView:) BOOL _needsNewEmptyPlaceholderView; // ivar: __needsNewEmptyPlaceholderView
@property (retain, nonatomic, setter=_setPendingViewSizeTransitionContext:) id *_pendingViewSizeTransitionContext; // ivar: __pendingViewSizeTransitionContext
@property (retain, nonatomic, setter=_setPhotoBrowserOneUpPresentationAdaptor:) PUPhotoBrowserOneUpPresentationAdaptor *_photoBrowserOneUpPresentationAdaptor; // ivar: __photoBrowserOneUpPresentationAdaptor
@property (nonatomic, setter=_setPreviewCommitting:) BOOL _previewCommitting; // ivar: __previewCommitting
@property (retain, nonatomic, setter=_setPreviewViewController:) UIViewController *_previewViewController; // ivar: __previewViewController
@property (retain, nonatomic, setter=_setPreviewingIndexPath:) NSIndexPath *_previewingIndexPath; // ivar: __previewingIndexPath
@property (nonatomic, setter=_setPreviousCollectionsCount:) NSUInteger _previousCollectionsCount; // ivar: __previousCollectionsCount
@property (nonatomic, setter=_setPreviousPrefetchContentOffset:) CGPoint _previousPrefetchContentOffset; // ivar: __previousPrefetchContentOffset
@property (nonatomic, setter=_setPreviousPrefetchRect:) CGRect _previousPrefetchRect; // ivar: __previousPrefetchRect
@property (nonatomic, setter=_setPreviousPreheatContentOffset:) CGPoint _previousPreheatContentOffset; // ivar: __previousPreheatContentOffset
@property (nonatomic, setter=_setPreviousPreheatRect:) CGRect _previousPreheatRect; // ivar: __previousPreheatRect
@property (retain, nonatomic, setter=_setPushedPhotoBrowserController:) UIViewController *_pushedPhotoBrowserController; // ivar: __pushedPhotoBrowserController
@property (weak, nonatomic, setter=_setRemoveActionSheet:) UIViewController *_removeActionSheet; // ivar: __removeActionSheet
@property (weak, nonatomic, setter=_setShareAssetsPopoverController:) UIPopoverPresentationController *_shareAssetsPopoverController; // ivar: __shareAssetsPopoverController
@property (weak, nonatomic, setter=_setShareAssetsSender:) UIView *_shareAssetsSender; // ivar: __shareAssetsSender
@property (retain, nonatomic, setter=_setSlideshowViewController:) PUSlideshowViewController *_slideshowViewController; // ivar: __slideshowViewController
@property (retain, nonatomic, setter=_setSwipeSelectionManager:) PUSwipeSelectionManager *_swipeSelectionManager; // ivar: __swipeSelectionManager
@property (retain, nonatomic) PUActivitySharingController *activitySharingController; // ivar: _activitySharingController
@property (retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext; // ivar: _albumListTransitionContext
@property (nonatomic) NSUInteger allowedActions; // ivar: _allowedActions
@property (nonatomic) BOOL alwaysHideTabBar; // ivar: _alwaysHideTabBar
@property (readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult;
@property (nonatomic) UIEdgeInsets collectionViewLayoutReferenceSafeAreaInsets; // ivar: _collectionViewLayoutReferenceSafeAreaInsets
@property (nonatomic) CGFloat collectionViewLayoutReferenceWidth; // ivar: _collectionViewLayoutReferenceWidth
@property (retain, nonatomic) UIBarButtonItem *customDoneButtonItem; // ivar: _customDoneButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PUPhotosGridViewControllerSpec *gridSpec; // ivar: _gridSpec
@property (nonatomic) BOOL hasKnownNonEmptyContent_toWorkAround31995766; // ivar: _hasKnownNonEmptyContent_toWorkAround31995766
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initiallyScrolledToBottom; // ivar: _initiallyScrolledToBottom
@property (retain, nonatomic) UICollectionViewLayout<PUGridLayoutProtocol> *mainGridLayout; // ivar: _mainGridLayout
@property (nonatomic, setter=_setMaximumThumbnailRequestSize:) CGSize maximumThumbnailRequestSize; // ivar: _maximumThumbnailRequestSize
@property (copy, nonatomic) id *onViewDidAppearCompletion; // ivar: _onViewDidAppearCompletion
@property (retain, nonatomic, setter=_setOneUpPresentationHelper:) PUOneUpPresentationHelper *oneUpPresentationHelper; // ivar: _oneUpPresentationHelper
@property (copy, nonatomic) id *pendingProcessDataSourceUpdateBlock; // ivar: _pendingProcessDataSourceUpdateBlock
@property (retain, nonatomic, setter=_setPhotoOrStackPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *photoOrStackPinchGestureRecognizer; // ivar: _photoOrStackPinchGestureRecognizer
@property (retain, nonatomic, setter=_setPhotoSelectionManager:) PUPhotoSelectionManager *photoSelectionManager; // ivar: _photoSelectionManager
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource
@property (copy, nonatomic, setter=ppt_setDataSourceChangeHandler:) id *ppt_dataSourceChangeHandler; // ivar: _ppt_dataSourceChangeHandler
@property (copy, nonatomic, setter=ppt_setNextDeleteFinishedBlock:) id *ppt_nextDeleteFinishedBlock; // ivar: _ppt_nextDeleteFinishedBlock
@property (retain, nonatomic) UIActivityViewController *primingActivityViewController; // ivar: _primingActivityViewController
@property (retain, nonatomic) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (nonatomic) BOOL showsCustomDoneButtonItemOnLeft; // ivar: _showsCustomDoneButtonItemOnLeft
@property (nonatomic) BOOL showsSelectionSessionCancelButtonItemOnLeft; // ivar: _showsSelectionSessionCancelButtonItemOnLeft
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<PUPhotosGridViewSupplementalToolbarProvider> *supplementalToolbarProvider; // ivar: _supplementalToolbarProvider


+(id)_localizedSelectionTitleWithPhotoSelectionManager:(id)arg0 ;
+(void)transferPhotoBrowserFromGridViewController:(id)arg0 toGridViewController:(id)arg1 ;
-(BOOL)_allowsActions:(NSUInteger)arg0 ;
-(BOOL)_areAllAssetsSelected;
-(BOOL)_canAddContent;
-(BOOL)_canAllContainersPerformEditOperation:(NSInteger)arg0 ;
-(BOOL)_canPasteboardCopyAssetAtIndexPath:(id)arg0 ;
-(BOOL)_canRemoveContent;
-(BOOL)_canShareAsset:(id)arg0 ;
-(BOOL)_canShareContent;
-(BOOL)_collectionView:(id)arg0 canHandleDropSesson:(id)arg1 ;
-(BOOL)_collectionView:(id)arg0 shouldApplyTransitionContentOffset:(struct CGPoint )arg1 contentSize:(struct CGSize )arg2 ;
-(BOOL)_confidentialityWarningRequiredForAsset:(id)arg0 ;
-(BOOL)_hasAccessibilityLargeText;
-(BOOL)_hasAtLeastOneContainer;
-(BOOL)_navigateToBottomIfNeededAnimated:(BOOL)arg0 ;
-(BOOL)_shouldBeginMultiSelectAtLocation:(struct CGPoint )arg0 ;
-(BOOL)_shouldUpdateCollectionView;
-(BOOL)_transitionWidthHasChanged;
-(BOOL)_updateTransitionWidthOnAppearance;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)allowSelectAllButton;
-(BOOL)allowSlideshowButton;
-(BOOL)canAddToOtherAlbumContent;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBeginStackCollapseTransition;
-(BOOL)canDeleteContent;
-(BOOL)canDisplayEditButton;
-(BOOL)canDragIn;
-(BOOL)canDragOut;
-(BOOL)canHandleDropSession:(id)arg0 ;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasScrollableContent;
-(BOOL)interaction:(id)arg0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint )arg1 ;
-(BOOL)interaction:(id)arg0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint )arg1 withVelocity:(struct CGPoint )arg2 ;
-(BOOL)isAddPlaceholderAtIndexPath:(id)arg0 ;
-(BOOL)isAnyAssetSelected;
-(BOOL)isCameraRoll;
-(BOOL)isContentViewInSyncWithModel;
-(BOOL)isCurrentCollectionViewDataSource;
-(BOOL)isEmpty;
-(BOOL)isInMultiSelectMode;
-(BOOL)isPerformingCoalescedSelectionUpdates;
-(BOOL)isPreheatingEnabled;
-(BOOL)isTrashBinViewController;
-(BOOL)oneUpPresentationHelperPreventRevealInMomentAction:(id)arg0 ;
-(BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg0 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg0 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(BOOL)previewActionControllerPreventRevealInMomentAction:(id)arg0 ;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg0 ;
-(BOOL)pu_wantsTabBarVisible;
-(BOOL)pu_wantsToolbarVisible;
-(BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg0 ;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(struct CGPoint )arg0 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 withVelocity:(struct CGPoint )arg2 ;
-(BOOL)shouldPerformAutomaticContentOffsetAdjustment;
-(BOOL)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg0 ;
-(BOOL)shouldPreventRevealInMomentAction;
-(BOOL)shouldShowMenu;
-(BOOL)shouldShowTabBar;
-(BOOL)shouldShowToolbar;
-(BOOL)supportsMultiSelectInteraction:(id)arg0 ;
-(BOOL)updateSpec;
-(BOOL)wantsAddContentInToolbar;
-(BOOL)wantsAddPlaceholderAtEndOfSection:(NSInteger)arg0 ;
-(BOOL)wantsGlobalFooter;
-(BOOL)wantsPlaceholderView;
-(BOOL)zoomTransition:(id)arg0 getFrame:(struct CGRect *)arg1 inCoordinateSpace:(*id)arg2 contentMode:(*NSInteger)arg3 cropInsets:(struct UIEdgeInsets *)arg4 forPhotoToken:(id)arg5 operation:(NSInteger)arg6 ;
-(BOOL)zoomTransition:(id)arg0 transitionImageForPhotoToken:(id)arg1 callback:(id)arg2 ;
-(CGFloat)_adjustedTransitionWidth;
-(CGFloat)cellAspectRatioHint;
-(CGFloat)globalHeaderHeight;
-(CGFloat)lastUserScrollTime;
-(CGFloat)sectionedGridLayout:(id)arg0 aspectRatioForItemAtIndexPath:(id)arg1 ;
-(CGFloat)topMarginForPhotosGlobalFooterView:(id)arg0 ;
-(NSInteger)_deleteActionForBarButtonItem:(id)arg0 ;
-(NSInteger)_preferredWhitePointAdaptivityStyle;
-(NSInteger)cellFillMode;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)dateRangeFormatterPreset;
-(NSInteger)imageDeliveryMode;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)swipeSelectionManager:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)_indexForPhotoCollection:(id)arg0 ;
-(NSUInteger)_sharableAssetsTypeInFetchResult:(id)arg0 ;
-(NSUInteger)additionalOneUpViewControllerOptions;
-(NSUInteger)oneUpPresentationHelperAdditionalOptions:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(NSUInteger)userEventSourceType;
-(id)_activitySharingControllerWithSelectionManager:(id)arg0 ;
-(id)_allAssetsInCollections;
-(id)_assetsAllowingEditOperation:(NSInteger)arg0 fromAssets:(id)arg1 ;
-(id)_assetsAllowingRemove:(BOOL)arg0 orDelete:(BOOL)arg1 fromAssets:(id)arg2 ;
-(id)_barButtonSpacerWithWidth:(CGFloat)arg0 ;
-(id)_bestReferenceItemIndexPathWithTopBias:(BOOL)arg0 ;
-(id)_cancelButtonItem;
-(id)_collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)_collectionView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)_collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_collectionView:(id)arg0 liftingPreviewParametersForItemAtIndexPath:(id)arg1 ;
-(id)_deselectAllBarButtonItem;
-(id)_dragItemsForIndexPath:(id)arg0 ;
-(id)_indexPathForAsset:(id)arg0 inAssetCollection:(id)arg1 refetchIfNeeded:(BOOL)arg2 ;
-(id)_indexesWithoutPlaceholdersFromIndexes:(id)arg0 inSection:(NSInteger)arg1 ;
-(id)_localizedBannerTextForAsset:(id)arg0 isDestructive:(*BOOL)arg1 ;
-(id)_newEditActionItemsWithWideSpacing:(BOOL)arg0 ;
-(id)_performDuplicateActivityWithAssets:(id)arg0 ;
-(id)_performHideActivityWithSelectionManager:(id)arg0 ;
-(id)_pickerBannerView;
-(id)_previewParametersForItemAtIndexPath:(id)arg0 ;
-(id)_referenceBarButtonItemForDeleteAction:(NSInteger)arg0 ;
-(id)_selectAllBarButtonItem;
-(id)_selectSessionCancelBarButtonItem;
-(id)_selectSessionDoneBarButtonItem;
-(id)_selectionButton;
-(id)_selectionManagerWithSelectedSharableAssets;
-(id)_selectionManagerWithSharableAssetsInFetchResult:(id)arg0 forAssetCollection:(id)arg1 ;
-(id)_shareableAssetsFromAssets:(id)arg0 ;
-(id)_slideshowNavigationControllerForFetchResult:(id)arg0 assetCollection:(id)arg1 ;
-(id)_updateSelectionFromSelectionManager:(id)arg0 ;
-(id)alternateContentView;
-(id)assetAtIndexPath:(id)arg0 ;
-(id)assetAtIndexPathIfSafe:(id)arg0 ;
-(id)assetCollectionForSectionHeaderAtIndex:(NSUInteger)arg0 ;
-(id)assetIndexPathForPhotoToken:(id)arg0 ;
-(id)assetsInAssetCollection:(id)arg0 ;
-(id)beginShowingProgressForAsset:(id)arg0 inCollection:(id)arg1 ;
-(id)bestReferenceItemIndexPath;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 dragPreviewParametersForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 transitionLayoutForOldLayout:(id)arg1 newLayout:(id)arg2 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)contentScrollView;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)displayTitleInfoForDetailsOfAssetCollection:(id)arg0 withTitleCategory:(NSInteger)arg1 preferredAttributesPromise:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)gridLayout;
-(id)imageForAsset:(id)arg0 outIsPlaceholder:(*BOOL)arg1 ;
-(id)imageRequestOptionsForAsset:(id)arg0 pixelSize:(struct CGSize *)arg1 ;
-(id)indexPathForAsset:(id)arg0 hintCollection:(id)arg1 hintIndexPath:(id)arg2 ;
-(id)indexPathsForPreheatingInRect:(struct CGRect )arg0 ;
-(id)indexPathsForSelectedItemsInCollectionView:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSpec:(id)arg0 ;
-(id)itemIndexPathAtPoint:(struct CGPoint )arg0 outClosestMatch:(*id)arg1 ;
-(id)itemIndexPathAtPoint:(struct CGPoint )arg0 outClosestMatch:(*id)arg1 outLeftClosestMatch:(*id)arg2 outAboveClosestMatch:(*id)arg3 ;
-(id)localizedSelectionTitle;
-(id)localizedTitleForAssetCollection:(id)arg0 ;
-(id)localizedTitleForAssetCollection:(id)arg0 titleCategory:(*NSInteger)arg1 ;
-(id)localizedTitleForAssets:(id)arg0 ;
-(id)longPressGestureRecognizer;
-(id)newEmptyPlaceholderView;
-(id)newGridLayout;
-(id)newToolbarItems;
-(id)oneUpPresentationHelperScrollView:(id)arg0 ;
-(id)oneUpPresentationHelperViewController:(id)arg0 ;
-(id)photoCollectionAtIndex:(NSUInteger)arg0 ;
-(id)photosGridBarsHelper:(id)arg0 titleForPhotoSelectionManager:(id)arg1 ;
-(id)photosGridBarsHelperPhotoSelectionManager:(id)arg0 ;
-(id)previewViewControllerForItemAtIndexPath:(id)arg0 ;
-(id)pu_debugRows;
-(id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg0 ;
-(id)selectedAssets;
-(id)selectedIndexPaths;
-(id)sessionInfoForTransferredAssets:(id)arg0 ;
-(id)swipeSelectionManager:(id)arg0 photoCollectionAtIndex:(NSUInteger)arg1 ;
-(id)zoomTransition:(id)arg0 photoTokenForPhoto:(id)arg1 inCollection:(id)arg2 ;
-(struct CGPoint )contentOffsetForPreheating;
-(struct CGPoint )stableUpdatesContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGSize )contentSizeForPreheating;
-(struct CGSize )imageRequestItemPixelSize;
-(struct CGSize )imageRequestItemSize;
-(void)_activitySharingController:(id)arg0 didCompleteWithActivityType:(id)arg1 success:(BOOL)arg2 ;
-(void)_activitySharingControllerDidCancel:(id)arg0 ;
-(void)_addButtonPressed:(id)arg0 ;
-(void)_beginInteractiveNavigationForItemAtIndexPath:(id)arg0 ;
-(void)_beginInteractiveStackCollapse:(id)arg0 ;
-(void)_cancelImageRequestForCell:(id)arg0 ;
-(void)_clearAutomaticContentOffsetSnapshot;
-(void)_collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)_configureAddPlaceholderCell:(id)arg0 animated:(BOOL)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_ensureOneUpPresentationHelper;
-(void)_getFirstAsset:(*id)arg0 collection:(*id)arg1 ;
-(void)_handleCancelButton:(id)arg0 ;
-(void)_handleDuplicateActionCompletionWithSuccess:(BOOL)arg0 ;
-(void)_handleSelectSessionCancelButton:(id)arg0 ;
-(void)_handleSelectSessionDoneButton:(id)arg0 ;
-(void)_handleSelectionButton:(id)arg0 ;
-(void)_hideMenuIfNeeded;
-(void)_invalidateAllAssetIndexes;
-(void)_invalidateAllProgressInfoIndexPaths;
-(void)_invalidateCachedViewSizeTransitionContext;
-(void)_menuControllerDidHideMenu:(id)arg0 ;
-(void)_navigateToPhotoAtIndexPath:(id)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)_performAutomaticContentOffsetAdjustment;
-(void)_presentActivitySharingController:(id)arg0 completion:(id)arg1 ;
-(void)_presentConfidentialityWarning;
-(void)_presentShareSheetWithCompletion:(id)arg0 ;
-(void)_removeButtonPressed:(id)arg0 ;
-(void)_removeSelectedAssetsWithCompletion:(id)arg0 ;
-(void)_saveAnchorForAutomaticContentOffsetAdjustment;
-(void)_shareButtonPressed:(id)arg0 ;
-(void)_slideshowButtonPressed:(id)arg0 ;
-(void)_updateAllProgressInfoIndexPaths;
-(void)_updateBackButtonTitle;
-(void)_updateCollectionViewMultipleSelection;
-(void)_updateContentOffsetForPendingViewSizeTransition;
-(void)_updateGlobalHeaderVisibility;
-(void)_updateIndexPathForProgressInfo:(id)arg0 ;
-(void)_updateLayoutReferenceValues;
-(void)_updateNavigationBannerAnimated:(BOOL)arg0 ;
-(void)_updatePhotoDecorationForCell:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updatePhotoSelectionManager;
-(void)_updateProgressForCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_updateProgressForCellAtIndexPath:(id)arg0 ;
-(void)_updateSelectionForCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_updateSubviewsOrderingAndVisibility;
-(void)_updateToolbarContentsAnimated:(BOOL)arg0 ;
-(void)_userDidStartScrolling;
-(void)activitySharingController:(id)arg0 didCompleteWithActivityType:(id)arg1 success:(BOOL)arg2 ;
-(void)activitySharingControllerDidCancel:(id)arg0 ;
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg0 ;
-(void)beginBatchPreheating;
-(void)beginCoalescedSelectionUpdates;
-(void)beginSuppressingColorSettingsUpdate;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureDecorationsForCell:(id)arg0 withAsset:(id)arg1 assetCollection:(id)arg2 thumbnailIsPlaceholder:(BOOL)arg3 assetMayHaveChanged:(BOOL)arg4 ;
-(void)configureGlobalFooterView:(id)arg0 ;
-(void)configureGlobalHeaderView:(id)arg0 ;
-(void)configureGridCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)configureGridCell:(id)arg0 forItemAtIndexPath:(id)arg1 assetMayHaveChanged:(BOOL)arg2 ;
-(void)configureSupplementaryView:(id)arg0 ofKind:(id)arg1 forIndexPath:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteractionDidEnd:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)deletePhotosActionController:(id)arg0 presentConfirmationViewController:(id)arg1 ;
-(void)deselectAllItemsAnimated:(BOOL)arg0 ;
-(void)didEndDisplayingEmptyPlaceholderView;
-(void)didEndMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)didSelectAddPlaceholderInSection:(NSInteger)arg0 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)endBatchPreheating;
-(void)endCoalescedSelectionUpdates;
-(void)endShowingProgressWithIdentifier:(id)arg0 succeeded:(BOOL)arg1 canceled:(BOOL)arg2 error:(id)arg3 ;
-(void)endSuppressingColorSettingsUpdate;
-(void)forceDataSourceIfNeeded;
-(void)getEmptyPlaceholderViewTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 buttonAction:(*id)arg3 ;
-(void)getTitle:(*id)arg0 prompt:(*id)arg1 shouldHideBackButton:(*BOOL)arg2 leftBarButtonItems:(*id)arg3 rightBarButtonItems:(*id)arg4 ;
-(void)gridSettings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)handleAddFromAction;
-(void)handleAddToAction;
-(void)handleDrop:(id)arg0 ;
-(void)handleLongPressGesture:(id)arg0 ;
-(void)handleNavigateToAsset:(id)arg0 inContainer:(id)arg1 ;
-(void)handlePhotoOrStackPinchGestureRecognizer:(id)arg0 ;
-(void)handleToggleSelectionOfItemAtIndexPath:(id)arg0 ;
-(void)handleTransitionFade:(BOOL)arg0 animate:(BOOL)arg1 ;
-(void)installGestureRecognizers;
-(void)invalidateEmptyPlaceholderView;
-(void)invalidateGridLayoutIfNecessary;
-(void)loadView;
-(void)multiSelectInteraction:(id)arg0 appendSelectionAtPoint:(struct CGPoint )arg1 ;
-(void)multiSelectInteraction:(id)arg0 toggleSelectionStateUpToPoint:(struct CGPoint )arg1 ;
-(void)navigateToBottomAnimated:(BOOL)arg0 ;
-(void)navigateToPhoto:(id)arg0 inAssetContainer:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigateToPhoto:(id)arg0 inAssetContainer:(id)arg1 refetchIfNeeded:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)navigateToPhotosDetailsForAssetCollection:(id)arg0 ;
-(void)navigateToPhotosDetailsForAssetCollection:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigateToRevealPhoto:(id)arg0 inAssetContainer:(id)arg1 animated:(BOOL)arg2 ;
-(void)oneUpPresentationHelper:(id)arg0 didDismissOneUpViewController:(id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg0 willPresentOneUpViewController:(id)arg1 ;
-(void)paste:(id)arg0 ;
-(void)photosDataSource:(id)arg0 didChange:(id)arg1 ;
-(void)photosDataSourceWillChange:(id)arg0 ;
-(void)photosGlobalFooterView:(id)arg0 presentViewController:(id)arg1 ;
-(void)photosGlobalFooterViewDidChangeHeight:(id)arg0 ;
-(void)photosGridBarsHelper:(id)arg0 didChange:(NSUInteger)arg1 ;
-(void)photosGridBarsHelper:(id)arg0 getTitle:(*id)arg1 prompt:(*id)arg2 shouldHideBackButton:(*BOOL)arg3 leftBarButtonItems:(*id)arg4 rightBarButtonItems:(*id)arg5 forPhotoSelectionManager:(id)arg6 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)preheatAssets;
-(void)preheatAssetsWithPrefetchingDisabled:(BOOL)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)presentAlertController:(id)arg0 ;
-(void)previewActionController:(id)arg0 didDismissWithActionIdentifier:(id)arg1 ;
-(void)processDataSourceChange:(id)arg0 ;
-(void)resetPreheating;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewSpeedometer:(id)arg0 regimeDidChange:(NSInteger)arg1 from:(NSInteger)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillScrollToTop:(id)arg0 ;
-(void)sectionedGridLayout:(id)arg0 didPrepareTransitionIsAppearing:(BOOL)arg1 ;
-(void)selectAssets:(id)arg0 fromAssetCollection:(id)arg1 ;
-(void)sender:(id)arg0 shareAssetsInFetchResult:(id)arg1 forAssetCollection:(id)arg2 withCompletion:(id)arg3 ;
-(void)sender:(id)arg0 shareSelectedAssetsWithCompletion:(id)arg1 ;
-(void)sessionInfoPhotoSelectionDidChange:(id)arg0 ;
-(void)setAlternateContentView:(id)arg0 ;
-(void)setContentViewInSyncWithModel:(BOOL)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setLongPressGestureRecognizer:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 itemsAtIndexes:(id)arg1 inSection:(NSInteger)arg2 animated:(BOOL)arg3 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)slideshowViewControllerDidFinish:(id)arg0 withVisibleAssets:(id)arg1 ;
-(void)swipeSelectionManager:(id)arg0 updatePhotoSelectionWithIndexes:(id)arg1 inSection:(NSInteger)arg2 selectionMode:(NSInteger)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)uninstallGestureRecognizers;
-(void)updateEmptyPlaceholderViewAnimated:(BOOL)arg0 ;
-(void)updateGlobalFooter;
-(void)updateGlobalFooterUsingFooterView:(id)arg0 ;
-(void)updateInterfaceForIncrementalDataSourceChanges:(id)arg0 ;
-(void)updateInterfaceForModelReloadAnimated:(BOOL)arg0 ;
-(void)updateLayoutMetrics;
-(void)updateNavigationBarAnimated:(BOOL)arg0 ;
-(void)updatePeripheralInterfaceAnimated:(BOOL)arg0 ;
-(void)updateProgressWithIdentifier:(id)arg0 withValue:(CGFloat)arg1 ;
-(void)updateTitle;
-(void)updateVisibleSectionHeadersAtIndexes:(id)arg0 ;
-(void)updateVisibleSupplementaryViewsOfKind:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willBeginMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)willDisplayEmptyPlaceholderView;
-(void)zoomTransition:(id)arg0 didFinishForOperation:(NSInteger)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)zoomTransition:(id)arg0 shouldHidePhotoTokens:(id)arg1 ;
-(void)zoomTransition:(id)arg0 willBeginForOperation:(NSInteger)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;


@end


#endif