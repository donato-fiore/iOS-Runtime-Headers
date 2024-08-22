// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUIRELATEDWIDGET_H
#define PXUIRELATEDWIDGET_H

@class NSMutableSet, NSString;
@protocol PXReusableObjectPoolDelegate, UIGestureRecognizerDelegate, PXScrollViewControllerObserver, PXTilingControllerZoomAnimationCoordinatorDelegate, PXTilingControllerPreheatHandler, PXUIWidget, PXDiagnosticsEnvironment, PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;


#import "PXRelatedWidget.h"
#import "PXUITapGestureRecognizer.h"
#import "PXTouchingUIGestureRecognizer.h"
#import "PXPhotoKitUIMediaProvider.h"
#import "_PXUIRelatedPreviewOrbContext.h"
#import "PXReusableObjectPool.h"
#import "PXAssetActionManager.h"
#import "PXTilingController.h"
#import "PXPhotosDetailsContext.h"
#import "PXOneUpPresentation.h"
#import "PXSectionedSelectionManager.h"
#import "PXWidgetSpec.h"

@interface PXUIRelatedWidget : PXRelatedWidget <PXReusableObjectPoolDelegate, UIGestureRecognizerDelegate, PXScrollViewControllerObserver, PXTilingControllerZoomAnimationCoordinatorDelegate, PXTilingControllerPreheatHandler, PXUIWidget, PXDiagnosticsEnvironment>

 {
    PXUITapGestureRecognizer *_tapGestureRecognizer;
    PXUITapGestureRecognizer *_pressGestureRecognizer;
    PXTouchingUIGestureRecognizer *_touchGestureRecognizer;
}


@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *_mediaProvider; // ivar: __mediaProvider
@property (retain, nonatomic, setter=_setPreviewOrbContext:) _PXUIRelatedPreviewOrbContext *_previewOrbContext; // ivar: __previewOrbContext
@property (readonly, nonatomic) PXReusableObjectPool *_tileReusePool; // ivar: __tileReusePool
@property (readonly, nonatomic) NSMutableSet *_tilesInUse; // ivar: __tilesInUse
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) NSInteger contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) NSInteger contentViewAnchoringType;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (readonly, nonatomic) BOOL cursorInteractionEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) CGSize maxVisibleSizeInEditMode;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) NSObject<PXWidgetDelegate> *widgetDelegate;
@property (weak, nonatomic) NSObject<PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (weak, nonatomic) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (weak, nonatomic) NSObject<PXWidgetUnlockDelegate> *widgetUnlockDelegate;


-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 forCoordinateSpace:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_assetsBySizeWithTileIdentifiers:(struct PXTileIdentifier *)arg0 withGeometries:(struct PXTileGeometry *)arg1 count:(NSUInteger)arg2 ;
-(id)_photosDetailsViewControllerForRelatedEntry:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_relatedEntryAtLocationOfGestureRecognizer:(id)arg0 ;
-(id)_relatedEntryAtPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)_scrollViewController;
-(id)createTileAnimator;
-(id)extendedTraitCollection;
-(id)imageViewBasicTileForPreviewingAtPoint:(struct CGPoint )arg0 ;
-(id)init;
-(id)previewViewControllerAtLocation:(struct CGPoint )arg0 fromSourceView:(id)arg1 ;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)regionOfInterestForContext:(id)arg0 ;
-(id)zoomAnimationCoordinatorForContext:(id)arg0 ;
-(struct PXSimpleIndexPath )_assetIndexPathAtLocation:(struct CGPoint )arg0 padding:(struct UIEdgeInsets )arg1 ;
-(void)_getImageRequester:(*id)arg0 title:(*id)arg1 subtitle:(*id)arg2 forRelatedEntry:(id)arg3 mediaProvider:(id)arg4 ;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_handleTouchGestureRecognizer:(id)arg0 ;
-(void)_registerTileClass:(Class)arg0 forReuseIdentifier:(NSInteger)arg1 ;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)environmentDidUpdateFocusInContext:(id)arg0 ;
-(void)installGestureRecognizers;
-(void)loadContentData;
-(void)prepareForInteractiveTransition:(id)arg0 ;
-(void)reusableObjectPool:(id)arg0 didCreateReusableObject:(id)arg1 ;
-(void)reusableObjectPool:(id)arg0 didEvictReusableObject:(id)arg1 ;
-(void)reusableObjectPool:(id)arg0 objectBecameReusable:(id)arg1 ;
-(void)reusableObjectPool:(id)arg0 objectPreparedForReuse:(id)arg1 ;
-(void)scrollViewControllerDidBeginScrolling:(id)arg0 ;
-(void)startPreheatingTilesForIdentifiers:(struct PXTileIdentifier *)arg0 withGeometries:(struct PXTileGeometry *)arg1 count:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)stopPreheatingTilesForIdentifiers:(struct PXTileIdentifier *)arg0 withGeometries:(struct PXTileGeometry *)arg1 count:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)tilingControllerZoomAnimationCoordinator:(id)arg0 enumerateTilesToAnimateInLayerWithType:(NSInteger)arg1 layout:(id)arg2 zoomAnimationContext:(id)arg3 usingBlock:(id)arg4 ;


@end


#endif