// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDETAILSACTIONSUIWIDGET_H
#define PXPHOTOSDETAILSACTIONSUIWIDGET_H

@class NSArray, PHFetchResult, NSMutableSet, NSString;
@protocol PXPhotosDataSourceChangeObserver, PXTileSource, PXTilingControllerTransitionDelegate, PXReusableObjectPoolDelegate, PXActionRowTileDelegate, PXActionPerformerDelegate, PXChangeObserver, PXPhotoLibraryUIChangeObserver, UIPopoverPresentationControllerDelegate, PXUIWidget, PXTileAnimator, PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

#import <Foundation/Foundation.h>

#import "PXActionPerformer.h"
#import "PXPhotoKitAssetCollectionActionManager.h"
#import "PXActionRowTile.h"
#import "PXPhotosDataSource.h"
#import "PXUIScrollViewController.h"
#import "PXPhotosDetailsActionsSpecManager.h"
#import "PXReusableObjectPool.h"
#import "PXTilingController.h"
#import "PXPhotosDetailsViewModel.h"
#import "PXAssetActionManager.h"
#import "PXPhotosDetailsContext.h"
#import "PXOneUpPresentation.h"
#import "PXSectionedSelectionManager.h"
#import "PXWidgetSpec.h"

@interface PXPhotosDetailsActionsUIWidget : NSObject <PXPhotosDataSourceChangeObserver, PXTileSource, PXTilingControllerTransitionDelegate, PXReusableObjectPoolDelegate, PXActionRowTileDelegate, PXActionPerformerDelegate, PXChangeObserver, PXPhotoLibraryUIChangeObserver, UIPopoverPresentationControllerDelegate, PXUIWidget>

 {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    BOOL _ensureTransition;
    ? _needsUpdateFlags;
}


@property (retain, nonatomic, setter=_setActivePerformer:) PXActionPerformer *_activePerformer; // ivar: __activePerformer
@property (retain, nonatomic, setter=_setAllowedActionTypes:) NSArray *_allowedActionTypes; // ivar: __allowedActionTypes
@property (retain, nonatomic, setter=_setAssetCollectionActionManager:) PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager; // ivar: __assetCollectionActionManager
@property (readonly, nonatomic) PXActionRowTile *_measuringActionRowTile; // ivar: __measuringActionRowTile
@property (retain, nonatomic, setter=_setPeopleFetchResult:) PHFetchResult *_peopleFetchResult; // ivar: __peopleFetchResult
@property (retain, nonatomic, setter=_setPerformableActionTypes:) NSArray *_performableActionTypes; // ivar: __performableActionTypes
@property (retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource; // ivar: __photosDataSource
@property (nonatomic, setter=_setRowHeight:) CGFloat _rowHeight; // ivar: __rowHeight
@property (readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // ivar: __scrollViewController
@property (readonly, nonatomic) PXPhotosDetailsActionsSpecManager *_specManager; // ivar: __specManager
@property (readonly, nonatomic) NSObject<PXTileAnimator> *_tileAnimator; // ivar: __tileAnimator
@property (readonly, nonatomic) PXReusableObjectPool *_tileReusePool; // ivar: __tileReusePool
@property (readonly, nonatomic) NSMutableSet *_tilesInUse; // ivar: __tilesInUse
@property (readonly, nonatomic) PXTilingController *_tilingController; // ivar: __tilingController
@property (retain, nonatomic, setter=_setViewModel:) PXPhotosDetailsViewModel *_viewModel; // ivar: __viewModel
@property (weak, nonatomic) NSObject<PXActionPerformerDelegate> *actionPerformerDelegate; // ivar: _actionPerformerDelegate
@property (nonatomic) BOOL allowCreateMemoryAction; // ivar: _allowCreateMemoryAction
@property (nonatomic) BOOL allowInternalFileRadarAction; // ivar: _allowInternalFileRadarAction
@property (nonatomic) BOOL allowRevealInMomentAction; // ivar: _allowRevealInMomentAction
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) NSInteger contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) NSInteger contentViewAnchoringType;
@property (retain, nonatomic) PXPhotosDetailsContext *context; // ivar: _context
@property (readonly, nonatomic) BOOL cursorInteractionEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (nonatomic) CGPoint lastNormalizedTapPosition; // ivar: _lastNormalizedTapPosition
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) CGSize maxVisibleSizeInEditMode;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (retain, nonatomic) PXWidgetSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) NSObject<PXWidgetDelegate> *widgetDelegate; // ivar: _widgetDelegate
@property (weak, nonatomic) NSObject<PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (weak, nonatomic) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (weak, nonatomic) NSObject<PXWidgetUnlockDelegate> *widgetUnlockDelegate; // ivar: _widgetUnlockDelegate


-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(BOOL)_needsUpdate;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(id)_createNewLayout;
-(id)_extendedTraitCollection;
-(id)init;
-(id)tilingController:(id)arg0 tileIdentifierConverterForChange:(id)arg1 ;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(void)_handleContentSizeCategoryDidChange:(id)arg0 ;
-(void)_invalidateActionManager;
-(void)_invalidateAllowedActionTypes;
-(void)_invalidateLayout;
-(void)_invalidateLayoutEnsureTransition;
-(void)_invalidatePeopleFetchResult;
-(void)_invalidatePerformableActionTypes;
-(void)_invalidateRowHeight;
-(void)_loadTilingController;
-(void)_performChanges:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateActionManagerIfNeeded;
-(void)_updateAllowedActionTypesIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateLayoutIfNeeded;
-(void)_updatePeopleFetchResultIfNeeded;
-(void)_updatePerformableActionTypesIfNeeded;
-(void)_updateRowHeightIfNeeded;
-(void)actionPerformer:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)actionRowTileSelected:(id)arg0 tapPositionInTile:(struct CGPoint )arg1 ;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)configureActionButtonTile:(id)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photosDataSource:(id)arg0 didChange:(id)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)reusableObjectPool:(id)arg0 didCreateReusableObject:(id)arg1 ;
-(void)reusableObjectPool:(id)arg0 didEvictReusableObject:(id)arg1 ;


@end


#endif