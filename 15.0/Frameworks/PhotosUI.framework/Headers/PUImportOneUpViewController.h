// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIMPORTONEUPVIEWCONTROLLER_H
#define PUIMPORTONEUPVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, UICollectionView, PLDateRangeFormatter, NSString, PXImportController, PXImportAssetsDataSource, PXImportAssetsDataSourceManager, NSIndexPath, NSMutableArray, NSMutableSet, PXMediaProvider, PXNavigationTitleView, PFCoalescer, PLRoundProgressView, PXAssetReference, UITapGestureRecognizer, UICollectionViewLayout;
@protocol PUImportActionCoordinatorDelegate, PXImportAssetsDataSourceManagerObserver, PUImportOneUpCellDisplayDelegate, PUImportOneUpScrubberCellDisplayDelegate, PUSelectableAssetCollectionViewLayoutDelegate, PUReviewScrubberDataSource, PUReviewScrubberDelegate, PXChangeObserver, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PUImportOneUpTransitioning;


#import "PUImportActionCoordinator.h"
#import "PUImportChangeDetailsCollectionViewHelper.h"
#import "PUSelectableAssetCollectionViewLayout.h"
#import "PUReviewScrubber.h"
#import "PUImportOneUpViewControllerSpecManager.h"

@interface PUImportOneUpViewController : UIViewController <PUImportActionCoordinatorDelegate, PXImportAssetsDataSourceManagerObserver, PUImportOneUpCellDisplayDelegate, PUImportOneUpScrubberCellDisplayDelegate, PUSelectableAssetCollectionViewLayoutDelegate, PUReviewScrubberDataSource, PUReviewScrubberDelegate, PXChangeObserver, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PUImportOneUpTransitioning>



@property (retain, nonatomic) PUImportActionCoordinator *actionCoordinator; // ivar: _actionCoordinator
@property (nonatomic) BOOL allowsSelection; // ivar: _allowsSelection
@property (nonatomic, getter=isAnimatingTransition) BOOL animatingTransition; // ivar: _animatingTransition
@property (readonly, nonatomic) UIBarButtonItem *bottomSpacerBarButtonItem; // ivar: _bottomSpacerBarButtonItem
@property (readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem; // ivar: _cancelBarButtonItem
@property (retain, nonatomic) PUImportChangeDetailsCollectionViewHelper *changeDetailsHelper; // ivar: _changeDetailsHelper
@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) PUSelectableAssetCollectionViewLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (readonly, nonatomic) PLDateRangeFormatter *dayFormatter; // ivar: _dayFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIBarButtonItem *deleteBarButtonItem; // ivar: _deleteBarButtonItem
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasPerformedNavigationToStartingAsset; // ivar: _hasPerformedNavigationToStartingAsset
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIBarButtonItem *importBarButtonItem; // ivar: _importBarButtonItem
@property (retain, nonatomic) PXImportController *importController; // ivar: _importController
@property (retain, nonatomic) PXImportAssetsDataSource *importDataSource; // ivar: _importDataSource
@property (retain, nonatomic) PXImportAssetsDataSourceManager *importDataSourceManager; // ivar: _importDataSourceManager
@property (readonly, nonatomic) NSIndexPath *inFlightReferenceIndexPath; // ivar: _inFlightReferenceIndexPath
@property (nonatomic) BOOL isCommitingPreview; // ivar: _isCommitingPreview
@property (retain, nonatomic) NSMutableArray *itemsNeedingRelayout; // ivar: _itemsNeedingRelayout
@property (retain, nonatomic) NSMutableSet *itemsWithInvalidImageSizes; // ivar: _itemsWithInvalidImageSizes
@property (nonatomic) BOOL loadLargeThumbnailsInCustomOrder; // ivar: _loadLargeThumbnailsInCustomOrder
@property (retain, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PXNavigationTitleView *navigationTitleView; // ivar: _navigationTitleView
@property (retain, nonatomic) PXImportAssetsDataSource *pendingDataSource; // ivar: _pendingDataSource
@property (nonatomic) BOOL performingDataSourceChange; // ivar: _performingDataSourceChange
@property (nonatomic) NSUInteger presentationFilter; // ivar: _presentationFilter
@property (readonly, nonatomic) UIBarButtonItem *progressButtonItem; // ivar: _progressButtonItem
@property (retain, nonatomic) PFCoalescer *relayoutCoalescer; // ivar: _relayoutCoalescer
@property (readonly, nonatomic) PUReviewScrubber *reviewScrubber; // ivar: _reviewScrubber
@property (retain, nonatomic) PLRoundProgressView *roundProgressView; // ivar: _roundProgressView
@property (retain, nonatomic) PUImportOneUpViewControllerSpecManager *specManager; // ivar: _specManager
@property (readonly, nonatomic) PXAssetReference *startingAssetReference; // ivar: _startingAssetReference
@property (readonly, nonatomic) UIBarButtonItem *stopImportBarButtonItem; // ivar: _stopImportBarButtonItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) NSMutableSet *thumbnailLoadableItemWhitelist; // ivar: _thumbnailLoadableItemWhitelist
@property (readonly, nonatomic) PLDateRangeFormatter *timeFormatter; // ivar: _timeFormatter
@property (retain, nonatomic) UICollectionViewLayout *transitionLayout; // ivar: _transitionLayout
@property (readonly, nonatomic) BOOL updatingContentOffsetFromScrubbing; // ivar: _updatingContentOffsetFromScrubbing


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)pu_wantsNavigationBarVisible;
-(BOOL)pu_wantsTabBarVisible;
-(BOOL)pu_wantsToolbarVisible;
-(BOOL)reviewScrubber:(id)arg0 shouldProvideFeedbackForCellAtIndexPath:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)_horizontalOffsetInCollectionView:(id)arg0 forCenteringOnItemAtIndexPath:(id)arg1 ;
-(CGFloat)absoluteProgressFromCurrentContentOffset;
-(NSInteger)_interfaceOrientationFromDeviceOrientation:(NSInteger)arg0 ;
-(NSInteger)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)importOneUpCell:(id)arg0 requestedThumbnailForImportItem:(id)arg1 completion:(id)arg2 ;
-(NSInteger)importOneUpScrubberCell:(id)arg0 requestedThumbnailForImportItem:(id)arg1 completion:(id)arg2 ;
-(NSInteger)nextSectionWithItems:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)previousSectionWithItems:(NSInteger)arg0 ;
-(NSUInteger)numberOfSectionsInReviewScrubber:(id)arg0 ;
-(NSUInteger)reviewScrubber:(id)arg0 numberOfItemsInSection:(NSUInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_currentAsset;
-(id)_indexPathInCollectionView:(id)arg0 closestToPoint:(struct CGPoint )arg1 excludingIndexPath:(id)arg2 ;
-(id)assetAtIndexPath:(id)arg0 ;
-(id)badgeViewAtIndexPath:(id)arg0 forCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)importAssetAtIndexPath:(id)arg0 ;
-(id)importDestinationForActionCoordinator:(id)arg0 ;
-(id)indexPathOfCenterVisibleItemInCollectionView:(id)arg0 ;
-(id)initWithImportController:(id)arg0 mediaProvider:(id)arg1 startingAssetReference:(id)arg2 presentationFilter:(NSUInteger)arg3 ;
-(id)nextIndexPath:(id)arg0 ;
-(id)previousIndexPath:(id)arg0 ;
-(id)transitionItemsForContext:(id)arg0 ;
-(struct CGRect )imageRectFromPhotoView:(id)arg0 ;
-(struct CGRect )layout:(id)arg0 collectionView:(id)arg1 selectionBadgeFrameForItemFrame:(struct CGRect )arg2 atIndexPath:(id)arg3 ;
-(struct CGRect )selectionBadgeFrameForItemFrame:(struct CGRect )arg0 atIndexPath:(id)arg1 ;
-(struct CGRect )targetFrameForTransitionItem:(id)arg0 ;
-(struct CGSize )layout:(id)arg0 collectionView:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )sizeForItemAtIndexPath:(id)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(void)_cancelAction:(id)arg0 ;
-(void)_cancelAlerts;
-(void)_cancelOneUpView;
-(void)_deleteAction:(id)arg0 ;
-(void)_dismissReviewControllerWithAsset:(id)arg0 ;
-(void)_handleTapAtIndexPath:(id)arg0 ;
-(void)_handleTapInMainCollectionView:(id)arg0 ;
-(void)_reallyToggleCurrentPickStatusAtIndexPath:(id)arg0 ;
-(void)_stopImportAction:(id)arg0 ;
-(void)_toggleCurrentPickStatusAtIndexPath:(id)arg0 ;
-(void)_updateBarItemsAnimated:(BOOL)arg0 ;
-(void)_updateReviewScrubberFromContentOffset;
-(void)actionCoordinator:(id)arg0 didCompleteWithImportSession:(id)arg1 results:(id)arg2 ;
-(void)actionCoordinatorDidBeginDelete:(id)arg0 ;
-(void)actionCoordinatorDidBeginImport:(id)arg0 ;
-(void)actionCoordinatorDidCancelImport:(id)arg0 ;
-(void)actionCoordinatorDidEndDelete:(id)arg0 ;
-(void)actionCoordinatorWillBeginDelete:(id)arg0 ;
-(void)actionCoordinatorWillBeginImport:(id)arg0 ;
-(void)beginCenterPrioritizedThumbnailLoading;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)deleteItems:(id)arg0 ;
-(void)didTransitionFromViewController:(id)arg0 toViewController:(id)arg1 withTransitionItems:(id)arg2 ;
-(void)getFirstValidIndexPath:(*id)arg0 lastValidIndexPath:(*id)arg1 ;
-(void)getMainCollectionViewFrame:(struct CGRect *)arg0 collectionViewLayoutInsets:(struct UIEdgeInsets *)arg1 orientation:(NSInteger)arg2 ;
-(void)handleNewDataSource:(id)arg0 ;
-(void)importControllerProgressDidChange:(id)arg0 ;
-(void)importOneUpCell:(id)arg0 didRequestCancellationOfThumbnailRequestWithID:(NSInteger)arg1 ;
-(void)importOneUpCell:(id)arg0 requestedBadgeUpdateForImportItem:(id)arg1 ;
-(void)importOneUpScrubberCell:(id)arg0 didRequestCancellationOfThumbnailRequestWithID:(NSInteger)arg1 ;
-(void)invalidateLayoutIfNeededForImportItem:(id)arg0 ;
-(void)loadCenterPrioritizedVisibleThumbnails;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)pageToIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)pageToItemOrNearestIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)prepareTransitionItemViewForDestination:(id)arg0 ;
-(void)relayoutCollectionView;
-(void)reviewScrubber:(id)arg0 willDisplayCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)reviewScrubberDidScrub:(id)arg0 ;
-(void)reviewScrubberDidSelectItemAtIndexPath:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionFromDataSource:(id)arg0 toDataSource:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)updateCollectionViewLayoutInsets;
-(void)updateMainViewAnimated:(BOOL)arg0 ;
-(void)updateNavigationItemTitle;
-(void)updateToolbarItems;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionFromViewController:(id)arg0 toViewController:(id)arg1 withTransitionItems:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif