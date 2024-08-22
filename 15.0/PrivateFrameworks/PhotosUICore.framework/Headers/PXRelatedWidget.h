// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXRELATEDWIDGET_H
#define PXRELATEDWIDGET_H

@class NSDictionary, NSString;
@protocol PXRelatedDataSourceManagerObserver, PXTilingControllerTransitionDelegate, PXTilingControllerScrollDelegate, PXRelatedTilingLayoutDelegate, PXTileSource, PXChangeObserver, PXWidget, PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

#import <Foundation/Foundation.h>

#import "PXRelatedDataSource.h"
#import "PXRelatedDataSourceManager.h"
#import "PXRelatedTilingLayout.h"
#import "PXRelatedSpecManager.h"
#import "PXBasicTileAnimator.h"
#import "PXTilingController.h"
#import "PXAssetActionManager.h"
#import "PXPhotosDetailsContext.h"
#import "PXSectionedObjectReference.h"
#import "PXSectionedSelectionManager.h"
#import "PXWidgetSpec.h"

@interface PXRelatedWidget : NSObject <PXRelatedDataSourceManagerObserver, PXTilingControllerTransitionDelegate, PXTilingControllerScrollDelegate, PXRelatedTilingLayoutDelegate, PXTileSource, PXChangeObserver, PXWidget>

 {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
}


@property (retain, nonatomic, setter=_setAnchorDataSource:) PXRelatedDataSource *_anchorDataSource; // ivar: __anchorDataSource
@property (nonatomic, setter=_setAnchorIndexPath:) PXSimpleIndexPath _anchorIndexPath; // ivar: __anchorIndexPath
@property (nonatomic, setter=_setAnchorOffset:) CGPoint _anchorOffset; // ivar: __anchorOffset
@property (nonatomic, setter=_setAvailableNumberOfRows:) NSInteger _availableNumberOfRows; // ivar: __availableNumberOfRows
@property (nonatomic, setter=_setCanExpand:) BOOL _canExpand; // ivar: __canExpand
@property (readonly, nonatomic) PXRelatedDataSourceManager *_dataSourceManager; // ivar: __dataSourceManager
@property (nonatomic, getter=_isExpanded, setter=_setExpanded:) BOOL _expanded; // ivar: __expanded
@property (readonly, nonatomic) PXRelatedTilingLayout *_layout; // ivar: __layout
@property (nonatomic, setter=_setMaximumNumberOfRowsToDisplay:) NSInteger _maximumNumberOfRowsToDisplay; // ivar: __maximumNumberOfRowsToDisplay
@property (retain, nonatomic, setter=_setPrefetchedDataSourceByRelatedEntry:) NSDictionary *_prefetchedDataSourceByRelatedEntry; // ivar: __prefetchedDataSourceByRelatedEntry
@property (nonatomic, setter=_setShouldLoadContentData:) BOOL _shouldLoadContentData; // ivar: __shouldLoadContentData
@property (readonly, nonatomic) PXRelatedSpecManager *_specManager; // ivar: __specManager
@property (readonly, nonatomic) PXBasicTileAnimator *_tileAnimator; // ivar: __tileAnimator
@property (readonly, nonatomic) PXTilingController *_tilingController; // ivar: __tilingController
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) NSInteger contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) NSInteger contentViewAnchoringType;
@property (retain, nonatomic) PXPhotosDetailsContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (retain, nonatomic) PXSectionedObjectReference *focusedObjectReference; // ivar: _focusedObjectReference
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (nonatomic, setter=_setHasLoadedContentData:) BOOL hasLoadedContentData; // ivar: _hasLoadedContentData
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXSectionedObjectReference *highlightedObjectReference; // ivar: _highlightedObjectReference
@property (readonly, nonatomic) BOOL isInEditMode;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) CGSize maxVisibleSizeInEditMode;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (retain, nonatomic) PXWidgetSpec *spec;
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
-(BOOL)relatedTilingLayout:(id)arg0 isPlaceholderEntryAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)_createPhotosDataSourceForRelatedEntry:(id)arg0 ;
-(id)allRelatedEntries;
-(id)createTileAnimator;
-(id)entryObjectReferenceAtPoint:(struct CGPoint )arg0 inCoordinateSpaceWithIdentifier:(*void)arg1 ;
-(id)extendedTraitCollection;
-(id)init;
-(id)photosDataSourceForRelatedEntry:(id)arg0 ;
-(id)relatedEntryAtPoint:(struct CGPoint )arg0 inCoordinateSpaceWithIdentifier:(*void)arg1 ;
-(id)relatedEntryForPhotosDataSource:(id)arg0 ;
-(id)relatedEntryForTileIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(id)relatedTilingLayout:(id)arg0 titleFontNameForEntryAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg0 ;
-(id)tilingController:(id)arg0 tileIdentifierConverterForChange:(id)arg1 ;
-(id)tilingController:(id)arg0 transitionAnimationCoordinatorForChange:(id)arg1 ;
-(struct CGPoint )_anchorPointForLayoutContentBounds:(struct CGRect )arg0 ;
-(struct CGPoint )tilingController:(id)arg0 initialVisibleOriginForLayout:(id)arg1 ;
-(struct CGRect )rectOfInterestForRelatedEntry:(id)arg0 inCoordinateSpaceWithIdentifier:(*void)arg1 ;
-(struct CGRect )relatedTilingLayout:(id)arg0 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath )arg1 forAspectRatio:(CGFloat)arg2 ;
-(struct PXTileIdentifier )identifierForTileWithKind:(NSInteger)arg0 relatedEntry:(id)arg1 ;
-(struct PXTileIdentifier )identifierForTileWithKind:(NSInteger)arg0 relatedEntry:(id)arg1 layout:(id)arg2 ;
-(void)_invalidateAvailableNumberOfRows;
-(void)_invalidateCanExpand;
-(void)_invalidateDataSourceManager;
-(void)_invalidateHasLoadedContentData;
-(void)_invalidateLayout;
-(void)_invalidateMaximumNumberOfRowsToDisplay;
-(void)_invalidatePrefetchedDataSources;
-(void)_loadContentDataIfNeeded;
-(void)_loadTilingController;
-(void)_performChanges:(id)arg0 ;
-(void)_saveAnchoring;
-(void)_setNeedsUpdate;
-(void)_updateAvailableNumberOfRowsIfNeeded;
-(void)_updateCanExpandIfNeeded;
-(void)_updateDataSourceManagerIfNeeded;
-(void)_updateHasLoadedContentDataIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateLayoutIfNeeded;
-(void)_updateMaximumNumberOfRowsToDisplayIfNeeded;
-(void)_updatePrefetchedDataSources;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)enumerateTilesForRelatedRelatedEntry:(id)arg0 usingBlock:(id)arg1 ;
-(void)installGestureRecognizers;
-(void)loadContentData;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)tilingController:(id)arg0 prepareForChange:(id)arg1 ;
-(void)unloadContentData;
-(void)userDidSelectDisclosureControl;


@end


#endif