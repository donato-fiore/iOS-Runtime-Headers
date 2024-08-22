// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUZOOMABLEGRIDVIEWCONTROLLER_H
#define PUZOOMABLEGRIDVIEWCONTROLLER_H

@class PXCPLUIStatusProvider, PXCloudQuotaControllerHelper, NSTimer, NSIndexPath, NSArray, UITapGestureRecognizer, NSString;
@protocol PXChangeObserver, PXCloudQuotaControllerHelperDelegate, PUMagnfiedViewControllerDelegate, PXPhotosLibraryFooterViewModelPresentationDelegate;


#import "PUPhotosGridViewController.h"
#import "PUGridPinchGestureRecognizer.h"
#import "PUGridZoomLevelInfo.h"
#import "PUZoomableGridTransition.h"
#import "PUGridMagnifiedImageViewController.h"
#import "PUMomentsZoomLevelManager.h"
#import "PUZoomableGridViewControllerSpec.h"

@interface PUZoomableGridViewController : PUPhotosGridViewController <PXChangeObserver, PXCloudQuotaControllerHelperDelegate, PUMagnfiedViewControllerDelegate, PXPhotosLibraryFooterViewModelPresentationDelegate>

 {
    BOOL _isDisplayingGlobalFooterView;
    BOOL _isDisplayingEmptyPlaceholderView;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCloudQuotaControllerHelper *_cloudQuotaHelper;
    BOOL _iCPLEnabled;
    BOOL _globalFooterDidAutoScroll;
    NSTimer *_globalFooterAutoScrollMinimumIdleTimer;
    BOOL _simulateGlobalFooterImportantInformationUpdates;
    NSTimer *_globalFooterImportantInformationUpdatesTimer;
}


@property (retain, nonatomic, setter=_setDynamicLayoutTransitionAnchorIndexPath:) NSIndexPath *_dynamicLayoutTransitionAnchorIndexPath; // ivar: __dynamicLayoutTransitionAnchorIndexPath
@property (nonatomic, setter=_setFrozeMagnifierAtPosition:) CGPoint _frozeMagnifierAtPosition; // ivar: __frozeMagnifierAtPosition
@property (retain, nonatomic, setter=_setGridPinchGestureRecognizer:) PUGridPinchGestureRecognizer *_gridPinchGestureRecognizer; // ivar: __gridPinchGestureRecognizer
@property (nonatomic, setter=_setHasAppearedOnce:) BOOL _hasAppearedOnce; // ivar: __hasAppearedOnce
@property (nonatomic, setter=_setLastUpdateWidth:) CGFloat _lastUpdateWidth; // ivar: __lastUpdateWidth
@property (retain, nonatomic, setter=_setLastZoomInTransitionAnchorIndexPath:) NSIndexPath *_lastZoomInTransitionAnchorIndexPath; // ivar: __lastZoomInTransitionAnchorIndexPath
@property (nonatomic, setter=_setMagnifierState:) NSUInteger _magnifierState; // ivar: __magnifierState
@property (readonly, nonatomic) NSArray *_syncProgressAlbums; // ivar: __syncProgressAlbums
@property (retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // ivar: __tapGestureRecognizer
@property (retain, nonatomic, setter=_setTransitionExplicitAnchorIndexPath:) NSIndexPath *_transitionExplicitAnchorIndexPath; // ivar: __transitionExplicitAnchorIndexPath
@property (readonly, nonatomic) PUGridZoomLevelInfo *_zoomLevelInfo; // ivar: __zoomLevelInfo
@property (readonly, nonatomic) PUZoomableGridTransition *currentGridZoomTransitionInfo;
@property (retain, nonatomic, setter=_setCurrentGridZoomTransitionInfo:) PUZoomableGridTransition *currentGridZoomTransitionInfo; // ivar: _currentGridZoomTransitionInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setMagnifiedImageViewController:) PUGridMagnifiedImageViewController *magnifiedImageViewController; // ivar: _magnifiedImageViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger zoomLevel; // ivar: _zoomLevel
@property (readonly, nonatomic) PUMomentsZoomLevelManager *zoomLevelManager; // ivar: _zoomLevelManager
@property (retain, nonatomic) PUZoomableGridViewControllerSpec *zoomableGridSpec; // ivar: _zoomableGridSpec


+(id)_createCPLUIStatusProvider;
-(BOOL)_collectionView:(id)arg0 shouldApplyTransitionContentOffset:(struct CGPoint )arg1 contentSize:(struct CGSize )arg2 ;
-(BOOL)_disallowNavigationToHigherZoomLevel;
-(BOOL)_globalFooterHasImportantInformation;
-(BOOL)_shouldRevealPhotosGlobalFooterView;
-(BOOL)_shouldShowCPLInformationInGlobalFooter;
-(BOOL)allowSlideshowButton;
-(BOOL)canBeginStackCollapseTransition;
-(BOOL)canDisplayEditButton;
-(BOOL)canDragIn;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg0 ;
-(BOOL)collectionViewPointInSectionHeader:(struct CGPoint )arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isCurrentCollectionViewDataSource;
-(BOOL)isTransitionAutoAdjustContentOffsetEnabled;
-(BOOL)pu_shouldActAsTabRootViewController;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)shouldPerformAutomaticContentOffsetAdjustment;
-(BOOL)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg0 ;
-(BOOL)shouldPreventRevealInMomentAction;
-(BOOL)updateSpec;
-(BOOL)wantsGlobalFooter;
-(BOOL)wantsPlaceholderView;
-(BOOL)zoomTransition:(id)arg0 getFrame:(struct CGRect *)arg1 inCoordinateSpace:(*id)arg2 contentMode:(*NSInteger)arg3 cropInsets:(struct UIEdgeInsets *)arg4 forPhotoToken:(id)arg5 operation:(NSInteger)arg6 ;
-(CGFloat)cellAspectRatioHint;
-(NSInteger)cellFillMode;
-(NSInteger)dateRangeFormatterPreset;
-(NSInteger)imageDeliveryMode;
-(NSInteger)oneUpPresentationOrigin;
-(NSUInteger)_eventSourceFromZoomLevel:(NSUInteger)arg0 ;
-(id)_beginInteractiveTransitionWithReferenceItemPath:(id)arg0 zoomingOut:(BOOL)arg1 ;
-(id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg0 ;
-(id)_itemPathForLocationInGesture:(id)arg0 ;
-(id)bestTransitionReferenceItemIndexPathOutIsFromLastTransition:(*BOOL)arg0 outIsExplicit:(*BOOL)arg1 ;
-(id)collectionView:(id)arg0 transitionLayoutForOldLayout:(id)arg1 newLayout:(id)arg2 ;
-(id)imageWithSize:(struct CGSize )arg0 forIndexPath:(id)arg1 ;
-(id)initWithSpec:(id)arg0 zoomLevelManager:(id)arg1 zoomLevel:(NSUInteger)arg2 ;
-(id)magnifiedImageViewControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)newGridLayout;
-(id)presentingViewControllerForCloudQuotaControllerHelper:(id)arg0 ;
-(id)presentingViewControllerForViewModel:(id)arg0 ;
-(struct CGPoint )contentOffsetForPreheating;
-(struct CGRect )_frameForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )contentSizeForPreheating;
-(struct CGSize )imageRequestItemSize;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_conditionallyRevealPhotosGlobalFooterView;
-(void)_conditionallyRevealPhotosGlobalFooterViewWithLastUserScrollTime:(CGFloat)arg0 ;
-(void)_configureGlobalFooterImportantInformationUpdatesTimer;
-(void)_configureMagnifiedImageViewController:(id)arg0 forIndexPath:(id)arg1 gestureLocationInWindow:(struct CGPoint )arg2 ;
-(void)_didEndDisplayingGlobalFooterView;
-(void)_globalFooterDidChange;
-(void)_globalFooterHasImportantInformationDidChange;
-(void)_handleGridPinchGestureRecognizer:(id)arg0 ;
-(void)_handlePreviewGesture:(id)arg0 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_invalidateSyncProgressAlbums;
-(void)_needsCPLInformationDidChange;
-(void)_reclaimCollectionView;
-(void)_setCplUIStatusProvider:(id)arg0 ;
-(void)_updateMagnifierWithGesture:(id)arg0 ;
-(void)_updateTransitionsIfNecessary;
-(void)cloudQuotaControllerHelper:(id)arg0 informationViewDidChange:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingSupplementaryView:(id)arg1 forElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)configureGlobalFooterView:(id)arg0 ;
-(void)configureGridCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)configureSupplementaryView:(id)arg0 ofKind:(id)arg1 forIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)didEndDisplayingEmptyPlaceholderView;
-(void)didReceiveMemoryWarning;
-(void)getEmptyPlaceholderViewTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 buttonAction:(*id)arg3 ;
-(void)getTitle:(*id)arg0 prompt:(*id)arg1 shouldHideBackButton:(*BOOL)arg2 leftBarButtonItems:(*id)arg3 rightBarButtonItems:(*id)arg4 ;
-(void)gridSettings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)gridZoomTransitionDidFinish:(BOOL)arg0 ;
-(void)handleLongPressGesture:(id)arg0 ;
-(void)installGestureRecognizers;
-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg0 ;
-(void)navigateToLowerZoomLevelWithReferenceItemPath:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)ppt_navigateToPhotosDetailsAnimated:(BOOL)arg0 ;
-(void)preheatAssets;
-(void)prepareForTransitionToZoomableViewController:(id)arg0 anchorItemIndexPath:(id)arg1 anchorShiftsColumns:(BOOL)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)processDataSourceChange:(id)arg0 ;
-(void)reclaimCollectionView;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 itemsAtIndexes:(id)arg1 inSection:(NSInteger)arg2 animated:(BOOL)arg3 ;
-(void)tearDownMagnifiedImageViewController;
-(void)uninstallGestureRecognizers;
-(void)updateInterfaceForIncrementalDataSourceChanges:(id)arg0 ;
-(void)updateLayoutMetrics;
-(void)updateVisibleSectionHeadersAtIndexes:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willDisplayEmptyPlaceholderView;


@end


#endif