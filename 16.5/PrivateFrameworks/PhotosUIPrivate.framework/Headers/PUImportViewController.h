// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMPORTVIEWCONTROLLER_H
#define PUIMPORTVIEWCONTROLLER_H

@class PXImportSessionInfo, UIBarButtonItem, UITapGestureRecognizer, PXProgrammaticNavigationDestination, NSNumber, PXNavigationTitleView, NSLayoutConstraint, PXSelectionSnapshot, NSString, PXImportController, PXImportAssetsDataSource, PXImportAssetsDataSourceManager, NSProgress, PHImportSource, NSMutableSet, UILabel, PXActionableSectionHeaderView, PLRoundProgressView, PXSwipeSelectionManager;
@protocol PUSectionedGridLayoutDelegate, PUImportActionCoordinatorDelegate, PXImportAlbumPickerDelegate, PXImportAssetsDataSourceManagerObserver, PXImportControllerTopLevelCompletionDelegate, PXActionableSectionHeaderViewDelegate, PUImportOneUpTransitioning, PUImportSectionedGridLayoutDelegate, PXSettingsKeyObserver, PUCameraImportItemCellDelegate, PXChangeObserver, PXSwipeSelectionManagerDelegate, PUImportAddToAlbumsToolbarViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate;


#import "PUPhotosGridViewController.h"
#import "PUImportAddToAlbumsToolbarView.h"
#import "PUPhotosGridViewControllerSpec.h"
#import "PUImportActionCoordinator.h"
#import "PUImportChangeDetailsCollectionViewHelper.h"
#import "PUImportCustomViewBarButton.h"
#import "PUImportFloatingToolbarView.h"
#import "PUImportAddToLibraryAndAlbumsPickerViewController.h"
#import "PUImportFakePhotosDataSource.h"

@interface PUImportViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate, PUImportActionCoordinatorDelegate, PXImportAlbumPickerDelegate, PXImportAssetsDataSourceManagerObserver, PXImportControllerTopLevelCompletionDelegate, PXActionableSectionHeaderViewDelegate, PUImportOneUpTransitioning, PUImportSectionedGridLayoutDelegate, PXSettingsKeyObserver, PUCameraImportItemCellDelegate, PXChangeObserver, PXSwipeSelectionManagerDelegate, PUImportAddToAlbumsToolbarViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate>

 {
    BOOL _completedAnImport;
    PXImportSessionInfo *_completedImportSessionInfo;
    *__CFUserNotification _importCompleteNotification;
    UIBarButtonItem *_importButtonItem;
    UIBarButtonItem *_deleteButtonItemIcon;
    UIBarButtonItem *_deleteButtonItem;
    UIBarButtonItem *_stopBarItem;
    UIBarButtonItem *_progressButtonItem;
    UIBarButtonItem *_progressLabel;
    UIBarButtonItem *_albumPickerBarItem;
    PUImportAddToAlbumsToolbarView *_addToAlbumsToolbarView;
    UIBarButtonItem *_contentInfoBarButton;
    UIBarButtonItem *_albumPickerCompactWidthBarButton;
    UIBarButtonItem *_compactContentInfoButton;
    UIBarButtonItem *_compactSpacer1;
    UIBarButtonItem *_compactImportDestinationButton;
    UIBarButtonItem *_compactSpacer2;
    UIBarButtonItem *_compactEmptyTrailingButton;
    NSUInteger _busyCount;
    BOOL _allowsSelection;
    id *_mstreamd_pause_context;
    BOOL _acceptsLongPress;
    BOOL _compactLayoutMode;
    UITapGestureRecognizer *_tapGestureRecognizer;
    PXProgrammaticNavigationDestination *_px_navigationDestination;
}


@property (retain, nonatomic, setter=_setCachedViewSizeTransitionContext:) id *_cachedViewSizeTransitionContext; // ivar: __cachedViewSizeTransitionContext
@property (nonatomic, setter=_setCachedViewSizeTransitionContextSize:) CGSize _cachedViewSizeTransitionContextSize; // ivar: __cachedViewSizeTransitionContextSize
@property (nonatomic, setter=_setCollectionViewLayoutReferenceWidth:) CGFloat _collectionViewLayoutReferenceWidth; // ivar: __collectionViewLayoutReferenceWidth
@property (retain, nonatomic, setter=_setPendingViewSizeTransitionContext:) id *_pendingViewSizeTransitionContext; // ivar: __pendingViewSizeTransitionContext
@property (retain, nonatomic, setter=_setSpec:) PUPhotosGridViewControllerSpec *_spec; // ivar: __spec
@property (retain, nonatomic) PUImportActionCoordinator *actionCoordinator; // ivar: _actionCoordinator
@property (nonatomic) BOOL animateHeaderActionButtonChanges; // ivar: _animateHeaderActionButtonChanges
@property (retain, nonatomic) NSNumber *cachedHeaderHeight; // ivar: _cachedHeaderHeight
@property (retain, nonatomic) PUImportChangeDetailsCollectionViewHelper *changeDetailsHelper; // ivar: _changeDetailsHelper
@property (nonatomic, setter=_setCollectionViewSafeAreaInsets:) UIEdgeInsets collectionViewSafeAreaInsets; // ivar: _collectionViewSafeAreaInsets
@property (retain, nonatomic) PXNavigationTitleView *compactWidthAlbumPickerBarButtonView; // ivar: _compactWidthAlbumPickerBarButtonView
@property (retain, nonatomic) PUImportCustomViewBarButton *compactWidthAlbumPickerButton; // ivar: _compactWidthAlbumPickerButton
@property (retain, nonatomic) PUImportFloatingToolbarView *compactWidthToolbar; // ivar: _compactWidthToolbar
@property (retain, nonatomic) NSLayoutConstraint *compactWidthToolbarTopConstraint; // ivar: _compactWidthToolbarTopConstraint
@property (retain, nonatomic) PXNavigationTitleView *contentInfoBarButtonView; // ivar: _contentInfoBarButtonView
@property (retain, nonatomic) PXSelectionSnapshot *currentSelectionSnapshot; // ivar: _currentSelectionSnapshot
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PUImportAddToLibraryAndAlbumsPickerViewController *destinationPickerViewController; // ivar: _destinationPickerViewController
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // ivar: _doubleTapGestureRecognizer
@property (retain, nonatomic) PUImportFakePhotosDataSource *fakePhotosDataSource; // ivar: _fakePhotosDataSource
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImportController *importController; // ivar: _importController
@property (retain, nonatomic) PXImportAssetsDataSource *importDataSource; // ivar: _importDataSource
@property (retain, nonatomic) PXImportAssetsDataSourceManager *importDataSourceManager; // ivar: _importDataSourceManager
@property (retain, nonatomic) NSProgress *importProgress; // ivar: _importProgress
@property (retain, nonatomic) PHImportSource *importSource;
@property (nonatomic) BOOL isPeeking; // ivar: _isPeeking
@property (retain, nonatomic) NSMutableSet *itemsBeingTransitioned; // ivar: _itemsBeingTransitioned
@property (readonly, nonatomic) UILabel *navigationLargeTitleAccessoryLabel; // ivar: _navigationLargeTitleAccessoryLabel
@property (readonly, nonatomic) PXNavigationTitleView *navigationTitleView; // ivar: _navigationTitleView
@property (nonatomic) BOOL needsDataReloadAfterAnimatingDataSourceChange; // ivar: _needsDataReloadAfterAnimatingDataSourceChange
@property (nonatomic) NSInteger numItemsCompleted; // ivar: _numItemsCompleted
@property (nonatomic) NSInteger numTotalItemsToComplete; // ivar: _numTotalItemsToComplete
@property (retain, nonatomic) PXImportAssetsDataSource *pendingDataSource; // ivar: _pendingDataSource
@property (nonatomic) BOOL performingAlbumPickerPresentation; // ivar: _performingAlbumPickerPresentation
@property (nonatomic) BOOL performingDataSourceChange; // ivar: _performingDataSourceChange
@property (retain, nonatomic) PXActionableSectionHeaderView *referenceHeaderView; // ivar: _referenceHeaderView
@property (nonatomic) CGFloat referenceWidth; // ivar: _referenceWidth
@property (retain, nonatomic) PLRoundProgressView *roundProgressView; // ivar: _roundProgressView
@property (nonatomic) BOOL shouldCollapseAlreadyImportedSection; // ivar: _shouldCollapseAlreadyImportedSection
@property (nonatomic) BOOL shouldStayScrolledToBottom; // ivar: _shouldStayScrolledToBottom
@property (readonly) Class superclass;
@property (retain, nonatomic) PXSwipeSelectionManager *swipeSelectionManager; // ivar: _swipeSelectionManager
@property (nonatomic, getter=isTransitioningToNewSize) BOOL transitioningToNewSize; // ivar: _transitioningToNewSize
@property (retain, nonatomic) PXImportAssetsDataSourceManager *unfilteredImportDataSourceManager; // ivar: _unfilteredImportDataSourceManager
@property (nonatomic) BOOL userHasScrolled; // ivar: _userHasScrolled
@property (nonatomic) BOOL userWantsAlreadyImportedSectionCollapsedIfPossible; // ivar: _userWantsAlreadyImportedSectionCollapsedIfPossible
@property (nonatomic, getter=isViewAppearing) BOOL viewAppearing; // ivar: _viewAppearing


+(id)totalSizeStringForItems:(id)arg0 ;
+(unsigned short)defaultThumbnailImageFormat;
-(BOOL)_isItemVisibleAtIndex:(id)arg0 ;
-(BOOL)anyAlreadyImportedItemsAreSelected;
-(BOOL)areAllItemsSelectedInAssetCollection:(id)arg0 ;
-(BOOL)canBeginDoubleTapGesture:(id)arg0 ;
-(BOOL)canBeginSwipeSelectionAtScrollViewLocation:(struct CGPoint )arg0 ;
-(BOOL)canDragOut;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)compactLayoutMode;
-(BOOL)compactWidthToolbarCoversLocation:(struct CGPoint )arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)importSectionedGridLayout:(id)arg0 shouldEmphasizeSection:(NSUInteger)arg1 ;
-(BOOL)isBusy;
-(BOOL)isContentViewInSyncWithModel;
-(BOOL)isEmpty;
-(BOOL)isImporting;
-(BOOL)isPreheatingEnabled;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)sectionHeadersCoverLocation:(struct CGPoint )arg0 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldLongPressForOneUp;
-(BOOL)swipeSelectionManager:(id)arg0 shouldBeginSelectionAtLocation:(struct CGPoint )arg1 ;
-(BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg0 ;
-(BOOL)updateSpec;
-(BOOL)wantsPlaceholderView;
-(CGFloat)sectionedGridLayout:(id)arg0 accessibilitySectionHeaderHeightForVisualSection:(NSInteger)arg1 ;
-(CGFloat)sectionedGridLayout:(id)arg0 aspectRatioForItemAtIndexPath:(id)arg1 ;
-(CGFloat)sectionedGridLayout:(id)arg0 sectionHeaderHeightForVisualSection:(NSInteger)arg1 ;
-(NSInteger)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)contentFillModeForImportCell:(id)arg0 ;
-(NSInteger)importCell:(id)arg0 requestImageForImportItem:(id)arg1 ofSize:(NSUInteger)arg2 completion:(id)arg3 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_bestReferenceItemIndexPath;
-(id)_gridLayout;
-(id)_navigationViewControllerForViewController:(id)arg0 ;
-(id)_newGridLayoutFromSpec:(id)arg0 ;
-(id)accessibilityLabelForAlbumPickerControlWithDestination:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)createOneUpTransitionController;
-(id)deleteButtonItem;
-(id)destinationDescriptionForCollection:(id)arg0 ;
-(id)importDestinationForActionCoordinator:(id)arg0 ;
-(id)init;
-(id)initWithSpec:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)newGridLayout;
-(id)oneUpViewControllerForItemAtIndexPath:(id)arg0 ;
-(id)presentationController:(id)arg0 viewControllerForAdaptivePresentationStyle:(NSInteger)arg1 ;
-(id)px_navigationDestination;
-(id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg0 ;
-(id)transitionItemsForContext:(id)arg0 ;
-(struct CGRect )imageRectFromPhotoView:(id)arg0 ;
-(struct CGRect )targetFrameForTransitionItem:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )gridItemSize;
-(struct PXSimpleIndexPath )selectionIndexPathForItem:(id)arg0 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathAtLocation:(struct CGPoint )arg1 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathClosestAboveLocation:(struct CGPoint )arg1 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathClosestLeadingLocation:(struct CGPoint )arg1 ;
-(void)_beginImport;
-(void)_beginUninterruptibleOperation;
-(void)_cancelAlerts;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_deleteItems:(id)arg0 ;
-(void)_deselectCell:(id)arg0 ;
-(void)_dismissPopupsAnimated:(BOOL)arg0 ;
-(void)_endImport;
-(void)_endUninterruptibleOperation;
-(void)_getDataForVisualSection:(NSInteger)arg0 hasActionButton:(*BOOL)arg1 title:(*id)arg2 startDate:(*id)arg3 endDate:(*id)arg4 ;
-(void)_invalidateCachedViewSizeTransitionContext;
-(void)_navigateToPhotoAtIndexPath:(id)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)_pausePhotoStreams;
-(void)_resumePhotoStreams;
-(void)_selectCell:(id)arg0 ;
-(void)_updateBackdropGroupNameForHeaderView:(id)arg0 ;
-(void)_updateCell:(id)arg0 atIndex:(id)arg1 ;
-(void)_updateCompactToolbar;
-(void)_updateContentOffsetForPendingViewSizeTransition;
-(void)_updateItemViewAtIndex:(id)arg0 ;
-(void)_updateLayoutMetrics;
-(void)_updateToolbarAnimated:(BOOL)arg0 ;
-(void)actionCoordinator:(id)arg0 didCompleteWithImportSession:(id)arg1 results:(id)arg2 ;
-(void)actionCoordinatorDidBeginDelete:(id)arg0 ;
-(void)actionCoordinatorDidBeginImport:(id)arg0 ;
-(void)actionCoordinatorDidCancelImport:(id)arg0 ;
-(void)actionCoordinatorDidEndDelete:(id)arg0 ;
-(void)actionCoordinatorWillBeginDelete:(id)arg0 ;
-(void)actionCoordinatorWillBeginImport:(id)arg0 ;
-(void)cancelAlbumPickerPopover:(id)arg0 ;
-(void)collectionSelected:(id)arg0 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureCollectionViewGridLayout:(id)arg0 ;
-(void)configureSupplementaryView:(id)arg0 ofKind:(id)arg1 forIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)delete:(id)arg0 ;
-(void)didTapAddToAlbumsView:(id)arg0 ;
-(void)didTransitionFromViewController:(id)arg0 toViewController:(id)arg1 withTransitionItems:(id)arg2 ;
-(void)disableSwipeSelection;
-(void)enableSwipeSelection;
-(void)getEmptyPlaceholderViewTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 buttonAction:(*id)arg3 ;
-(void)handleDoubleTapGesture:(id)arg0 ;
-(void)handleImportCompleteAlertResponse:(struct __CFUserNotification *)arg0 flags:(NSUInteger)arg1 ;
-(void)handleLongPressGesture:(id)arg0 ;
-(void)handleNewDataSource:(id)arg0 ;
-(void)handlePhotoOrStackPinchGestureRecognizer:(id)arg0 ;
-(void)handleTapGesture:(id)arg0 ;
-(void)handleTouchEvent:(NSInteger)arg0 forCell:(id)arg1 ;
-(void)headerViewDidPressActionButton:(id)arg0 inHeaderView:(id)arg1 ;
-(void)importCell:(id)arg0 didRequestCancellationOfThumbnailRequestWithID:(NSInteger)arg1 ;
-(void)importController:(id)arg0 didCompleteImportWithImportSession:(id)arg1 results:(id)arg2 completion:(id)arg3 ;
-(void)importController:(id)arg0 didLoadAssets:(id)arg1 exceptions:(id)arg2 ;
-(void)importControllerProgressDidChange:(id)arg0 ;
-(void)installGestureRecognizers;
-(void)navigateToBottomAnimated:(BOOL)arg0 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)notifyUserOfImportCompletionIfNeededWithImportSession:(id)arg0 results:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)paste:(id)arg0 ;
-(void)prepareTransitionItemViewForDestination:(id)arg0 ;
-(void)presentAlbumPickerFromView:(id)arg0 orBarItem:(id)arg1 ;
-(void)presentOneUpViewController:(id)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)reloadData;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)selectAllSelectableItems;
-(void)setAllItemsSelected:(BOOL)arg0 inAssetCollection:(id)arg1 ;
-(void)setUpCompactWidthToolbar;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)showAlbumPicker:(id)arg0 ;
-(void)stayScrolledToBottomIfAtBottomAfterDrag:(id)arg0 ;
-(void)stopImport:(id)arg0 ;
-(void)targetLibrarySelected:(NSUInteger)arg0 ;
-(void)toggleAlreadyImportedExpansion;
-(void)transitionFromDataSource:(id)arg0 toDataSource:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)uninstallGestureRecognizers;
-(void)updateAlreadyImportedCollapseStatus;
-(void)updateAlreadyImportedHeaderIfVisible;
-(void)updateCompactWidthToolbarBackgroundGroupName;
-(void)updateCompactWidthToolbarTopConstraint;
-(void)updateCompactWidthToolbarVisibility;
-(void)updateContentInfoBarButtonTitlesWithItems:(id)arg0 sizeString:(id)arg1 itemsAreSelected:(BOOL)arg2 ;
-(void)updateContentInfoLabels;
-(void)updateContentInsetForCompactWidthToolbar;
-(void)updateDataSourceManagerFilters;
-(void)updateHeaderView:(id)arg0 forAlreadyImportedAssetCollection:(id)arg1 ;
-(void)updateHeaderView:(id)arg0 forAssetCollection:(id)arg1 ;
-(void)updateInterfaceForModelReloadAnimated:(BOOL)arg0 ;
-(void)updateNavigationBarAnimated:(BOOL)arg0 ;
-(void)updateNavigationTitleViewVisibilityAnimated:(BOOL)arg0 ;
-(void)updateNavigationTitleWithItems:(id)arg0 sizeString:(id)arg1 itemsAreSelected:(BOOL)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionFromViewController:(id)arg0 toViewController:(id)arg1 withTransitionItems:(id)arg2 ;


@end


#endif