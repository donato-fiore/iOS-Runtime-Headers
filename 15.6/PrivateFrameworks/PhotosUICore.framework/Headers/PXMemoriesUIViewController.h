// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMEMORIESUIVIEWCONTROLLER_H
#define PXMEMORIESUIVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UIContextMenuInteractionDelegate, PXChangeObserver, PXAssetCollectionActionPerformerDelegate, PXSectionedDataSourceManagerObserver, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXScrollViewControllerObserver, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController, PXViewControllerEventTracker;


#import "PXSectionedObjectReference.h"
#import "PXMemoriesFeedViewControllerHelper.h"
#import "PXSectionedLayoutEngine.h"
#import "PXPhotosDetailsContext.h"
#import "PXMemoriesSpec.h"
#import "PXMemoriesSpecManager.h"
#import "PXUITapGestureRecognizer.h"
#import "PXBasicUIViewTileAnimator.h"
#import "PXMemoriesUITileSource.h"
#import "PXTouchingUIGestureRecognizer.h"
#import "PXMemoriesDataSourceManager.h"
#import "PXUIScrollViewController.h"
#import "PXTilingController.h"

@interface PXMemoriesUIViewController : UIViewController <UIContextMenuInteractionDelegate, PXChangeObserver, PXAssetCollectionActionPerformerDelegate, PXSectionedDataSourceManagerObserver, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXScrollViewControllerObserver, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController>

 {
    ? _updateFlags;
}


@property (retain, nonatomic, setter=_setActionPresentationMemoryReference:) PXSectionedObjectReference *_actionPresentationMemoryReference; // ivar: __actionPresentationMemoryReference
@property (retain, nonatomic, setter=_setActivatedMemoryReference:) PXSectionedObjectReference *_activatedMemoryReference; // ivar: __activatedMemoryReference
@property (readonly, nonatomic) PXMemoriesFeedViewControllerHelper *_helper; // ivar: __helper
@property (retain, nonatomic, setter=_setHighlightedMemoryReference:) PXSectionedObjectReference *_highlightedMemoryReference; // ivar: __highlightedMemoryReference
@property (readonly, nonatomic) PXSectionedLayoutEngine *_layoutEngine; // ivar: __layoutEngine
@property (readonly, nonatomic) NSUInteger _memoriesStyle; // ivar: __memoriesStyle
@property (nonatomic, setter=_setPerformNextTransitionWithoutAnimation:) BOOL _performNextTransitionWithoutAnimation; // ivar: __performNextTransitionWithoutAnimation
@property (retain, nonatomic, setter=_setSelectedItemDetailsContext:) PXPhotosDetailsContext *_selectedItemDetailsContext; // ivar: __selectedItemDetailsContext
@property (retain, nonatomic, setter=_setSpec:) PXMemoriesSpec *_spec; // ivar: __spec
@property (readonly, nonatomic) PXMemoriesSpecManager *_specManager; // ivar: __specManager
@property (readonly, nonatomic) PXUITapGestureRecognizer *_tapRecognizer; // ivar: __tapRecognizer
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // ivar: __tileAnimator
@property (readonly, nonatomic) PXMemoriesUITileSource *_tileSource; // ivar: __tileSource
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *_touchRecognizer; // ivar: __touchRecognizer
@property (nonatomic, setter=_setAnchorMemoryOrigin:) CGPoint anchorMemoryOrigin; // ivar: _anchorMemoryOrigin
@property (retain, nonatomic, setter=_setAnchorMemoryReference:) PXSectionedObjectReference *anchorMemoryReference; // ivar: _anchorMemoryReference
@property (readonly, nonatomic) PXMemoriesDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmbedded) BOOL embedded; // ivar: _embedded
@property (readonly, nonatomic) NSObject<PXViewControllerEventTracker> *eventTracker; // ivar: _eventTracker
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (readonly, nonatomic) PXUIScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXTilingController *tilingController; // ivar: _tilingController
@property (readonly, nonatomic) NSInteger userInterfaceFeature;


-(BOOL)_needsUpdate;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg0 ;
-(id)_createNewLayout;
-(id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg0 ;
-(id)_memoryTileViewForLocation:(struct CGPoint )arg0 ;
-(id)_photosDetailsContextForIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)_photosDetailsContextForMemoryReference:(id)arg0 ;
-(id)_previewActionMenusForIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)_sourceViewForMemoryActionsController;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)createNewLayoutGenerator;
-(id)initWithDataSourceManager:(id)arg0 ;
-(id)initWithDataSourceManager:(id)arg0 style:(NSUInteger)arg1 ;
-(id)memoriesTileSource:(id)arg0 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)preferredFocusEnvironments;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)px_endPointForTransition:(id)arg0 ;
-(id)regionOfInterestForTransition:(id)arg0 ;
-(id)tilingController:(id)arg0 tileIdentifierConverterForChange:(id)arg1 ;
-(id)tilingController:(id)arg0 transitionAnimationCoordinatorForChange:(id)arg1 ;
-(id)zoomAnimationCoordinatorForZoomTransition:(id)arg0 ;
-(struct CGPoint )tilingController:(id)arg0 initialVisibleOriginForLayout:(id)arg1 ;
-(struct CGPoint )tilingController:(id)arg0 targetVisibleOriginForLayout:(id)arg1 proposedVisibleOrigin:(struct CGPoint )arg2 ;
-(struct PXSimpleIndexPath )_indexPathForMemoryAtPoint:(struct CGPoint )arg0 ;
-(struct PXSimpleIndexPath )_indexPathForMemoryInScrollViewAtPoint:(struct CGPoint )arg0 ;
-(struct PXSimpleIndexPath )_memoryIndexPathForViewController:(id)arg0 ;
-(void)_configureLayout:(id)arg0 ;
-(void)_handleScrollViewTap:(id)arg0 ;
-(void)_handleTouch:(id)arg0 ;
-(void)_invalidateLayout;
-(void)_presentMemoryAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)_reconfigureTargetLayout;
-(void)_saveAnchor;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateLayoutEngineIfNeeded;
-(void)_updateLayoutIfNeeded;
-(void)_updateScrollViewControllerContentInset;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)datasourceManagerDidChange;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)invalidateLayoutEngine;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)prepareForInteractiveTransition:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)presentMemoryWithReference:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg0 ;
-(void)tilingController:(id)arg0 prepareForChange:(id)arg1 ;
-(void)tilingControllerZoomAnimationCoordinator:(id)arg0 enumerateTilesToAnimateInLayerWithType:(NSInteger)arg1 layout:(id)arg2 zoomAnimationContext:(id)arg3 usingBlock:(id)arg4 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif