// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXZOOMABLEPHOTOSLAYOUT_H
#define PXZOOMABLEPHOTOSLAYOUT_H

@class NSArray, PXGItemsLayout<PXZoomablePhotosContentLayout>, NSMutableSet, NSDateInterval, NSCache, NSString, NSMapTable;
@protocol PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGDisplayAssetSource, PXZoomableInlineHeadersLayoutGeometrySource, PXGItemsLayoutDelegate, PXCuratedLibraryBodyLayout, PXPhotosSectionedLayoutBody, PXDisplayAssetFetchResult;


#import "PXGSplitLayout.h"
#import "PXGZoomLayout.h"
#import "PXGEdgeStretchEffect.h"
#import "PXZoomableInlineHeadersLayout.h"
#import "PXAssetsDataSourceManager.h"
#import "PXAssetsDataSource.h"
#import "PXMediaProvider.h"
#import "PXNumberAnimator.h"
#import "PXGBurstStackEffect.h"
#import "PXGAnchor.h"
#import "PXAssetReference.h"
#import "PXPhotosGridAssetDecorationSource.h"
#import "PXGOneColumnLayout.h"
#import "PXZoomablePhotosLayoutSpec.h"
#import "PXZoomablePhotosViewModel.h"

@interface PXZoomablePhotosLayout : PXGSplitLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGDisplayAssetSource, PXZoomableInlineHeadersLayoutGeometrySource, PXGItemsLayoutDelegate, PXCuratedLibraryBodyLayout, PXPhotosSectionedLayoutBody>

 {
    ? _preUpdateFlags;
    ? _postUpdateFlags;
    PXGZoomLayout *_zoomLayout;
    PXGEdgeStretchEffect *_edgeStretchEffect;
    unsigned int _pinchEffectCaptureSpriteIndex;
    _PXGSpriteIndexRange _lightBackgroundSpriteIndexRange;
    unsigned int _backgroundMediaVersion;
    PXZoomableInlineHeadersLayout *_inlineHeadersLayout;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXAssetsDataSource *_currentDataSource;
    PXMediaProvider *_preheatMediaProvider;
    _NSRange _preheatedThumbsForItemsByColumnIndex;
    BOOL _isPreheatingByColumnIndex;
    BOOL _isPerformingUpdate;
    _NSRange _prefetchedForLoadedItems;
    _NSRange _cachedClampedItemRange;
    id<PXDisplayAssetFetchResult> *_cachedClampedFetchResult;
    NSArray *_layers;
    NSArray *_itemLayouts;
    PXGItemsLayout<PXZoomablePhotosContentLayout>" _itemLayoutByHeaderLevel;
    PXGItemsLayout<PXZoomablePhotosContentLayout> *_decadesItemLayout;
    NSMutableSet *_itemLayoutsAllowedToLoad;
    PXNumberAnimator *_decorationAlphaAnimator;
    NSDateInterval *_lastReturnedDateInterval;
    NSInteger _lastReturnedDateIntervalDataSourceIdentifier;
    NSArray *_lastReturnedLocationNames;
    NSInteger _lastReturnedLocationNamesDataSourceIdentifier;
    BOOL _scrolledWhileAnimatingZoom;
    BOOL _performedInitialVisualShift;
    NSInteger _visuallyStableAnchorItem;
    NSInteger _visuallyStableAnchorItemDesiredColumn;
    BOOL _visuallyStableAnchorAllowedCloseToTop;
    PXGBurstStackEffect *_burstStackEffect;
    _PXGSpriteIndexRange _debugVisualizationSpriteIndexRange;
    NSArray *_debugVisualizationSpriteTitles;
    UIEdgeInsets _surroundingScrollableContent;
    NSCache *_providedEffectByAsset;
}


@property (copy, nonatomic) id *addContentHandler; // ivar: _addContentHandler
@property (readonly, nonatomic) PXGAnchor *anchor; // ivar: _anchor
@property (retain, nonatomic) PXAssetReference *anchorAssetReference; // ivar: __anchorAssetReference
@property (readonly, nonatomic) PXPhotosGridAssetDecorationSource *assetDecorationSource; // ivar: _assetDecorationSource
@property (nonatomic) NSInteger bodyLayoutAXGroupRole; // ivar: _bodyLayoutAXGroupRole
@property (readonly, nonatomic) PXGBurstStackEffect *burstStackEffect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *effectProvider; // ivar: _effectProvider
@property (nonatomic) UIEdgeInsets effectiveOverlayInsets; // ivar: _effectiveOverlayInsets
@property (nonatomic) BOOL enableAddContentAccessoryItem; // ivar: _enableAddContentAccessoryItem
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets inlineHeaderOverlayInsets; // ivar: _inlineHeaderOverlayInsets
@property (readonly, nonatomic) CGPoint normalizedScaleCenterInAnchorSprite; // ivar: _normalizedScaleCenterInAnchorSprite
@property (readonly, nonatomic) PXGOneColumnLayout *oneColLayout; // ivar: _oneColLayout
@property (nonatomic) UIEdgeInsets overlayInsets; // ivar: _overlayInsets
@property (readonly, nonatomic) PXAssetsDataSource *presentedDataSource; // ivar: _presentedDataSource
@property (nonatomic) BOOL preventFillingTopAreaInsets; // ivar: _preventFillingTopAreaInsets
@property (readonly, nonatomic) PXGItemsLayout<PXZoomablePhotosContentLayout> *primaryItemsLayout;
@property (readonly, nonatomic) CGPoint scaleCenterTargetInViewport; // ivar: _scaleCenterTargetInViewport
@property (readonly, nonatomic) BOOL shouldAnimateTowardsAnchor; // ivar: _shouldAnimateTowardsAnchor
@property (readonly, nonatomic) PXZoomablePhotosLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXZoomablePhotosViewModel *viewModel; // ivar: _viewModel
@property (readonly, nonatomic) NSMapTable *visualAnchorAssetReferenceItemByLayout; // ivar: _visualAnchorAssetReferenceItemByLayout
@property (nonatomic) BOOL wantsOverBackgroundFloatingHeaderAppearance; // ivar: _wantsOverBackgroundFloatingHeaderAppearance
@property (readonly, nonatomic) BOOL wasTracking; // ivar: _wasTracking


+(id)visualizeBestAnchorColumnsForLayouts:(id)arg0 imageWidth:(CGFloat)arg1 ;
+(void)getBestAnchorColumns:(*NSInteger)arg0 forItemLayouts:(id)arg1 startingAtBaseLayout:(id)arg2 anchorItem:(NSInteger)arg3 normalizedScaleCenterInAnchor:(struct CGPoint )arg4 biasTowardsCenter:(BOOL)arg5 ;
-(BOOL)_isAllowedToShiftItem:(NSInteger)arg0 inLayout:(id)arg1 ;
-(BOOL)_layoutAllowsCaptionsInSquare:(id)arg0 ;
-(BOOL)_layoutHasIndividualItems:(id)arg0 ;
-(BOOL)_layoutIsAspectFit:(id)arg0 ;
-(BOOL)_layoutIsQuiteTransparent:(id)arg0 ;
-(BOOL)_layoutWantsSingleDateTitle;
-(BOOL)_performVisualShiftWithLayout:(id)arg0 movingItem:(NSInteger)arg1 toColumn:(NSInteger)arg2 ;
-(BOOL)_wantsDecorationForNumberOfColumns:(NSInteger)arg0 ;
-(BOOL)_wantsMiniDecorationForNumberOfColumns:(NSInteger)arg0 ;
-(BOOL)isAnimating;
-(CGFloat)_interItemSpacingForLayout:(id)arg0 ;
-(CGFloat)_itemCaptionSpacingForLayout:(id)arg0 ;
-(CGFloat)itemsLayout:(id)arg0 aspectRatioForItem:(NSInteger)arg1 ;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)_estimatedItemsPerScreenForLayout:(id)arg0 ;
-(NSInteger)itemsLayout:(id)arg0 itemForObjectReference:(id)arg1 options:(NSUInteger)arg2 ;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSUInteger)behaviorForCaptureSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSUInteger)contentChangeTrend;
-(NSUInteger)desiredPlaceholderStyleInLayout:(id)arg0 ;
-(NSUInteger)supportedDisplayAssetPresentationStylesInLayout:(id)arg0 ;
-(id)_createLayoutWithNumberOfColumns:(NSInteger)arg0 ;
-(id)_debugColors;
-(id)_displayAssetForItem:(NSInteger)arg0 ;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)dateIntervalFutureForContentInRect:(SEL)arg0 type:(struct CGRect )arg1 ;
-(id)debugQuickLookObject;
-(id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)itemsGeometry;
-(id)itemsLayout:(id)arg0 objectReferenceForItem:(NSInteger)arg1 ;
-(id)locationNamesFutureForContentInRect:(SEL)arg0 ;
-(id)objectReferenceForSpriteIndex:(unsigned int)arg0 ;
-(id)presentedItemsGeometryForDataSource:(id)arg0 ;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct ? )_spriteTransformForLayout:(id)arg0 ;
-(struct ? )itemsLayout:(id)arg0 cornerRadiusForItem:(NSInteger)arg1 ;
-(struct ? )spriteTransformForLevel:(NSUInteger)arg0 ;
-(struct CGRect )boundsForLevel:(NSUInteger)arg0 ;
-(struct CGRect )frameForItemAtIndexPath:(struct PXSimpleIndexPath )arg0 level:(NSUInteger)arg1 ;
-(struct CGRect )itemsLayout:(id)arg0 bestCropRectForItem:(NSInteger)arg1 withAspectRatio:(CGFloat)arg2 ;
-(struct CGSize )_scaleForLayout:(id)arg0 ;
-(struct CGSize )itemsLayout:(id)arg0 insetForItem:(NSInteger)arg1 ;
-(struct CGSize )minSpriteSizeForPresentationStyle:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )floatingHeadersMarginsForLevel:(NSUInteger)arg0 ;
-(struct _NSRange )_rangeOfItemsForContentInRect:(struct CGRect )arg0 ;
-(unsigned int)itemsLayout:(id)arg0 effectIdForItem:(NSInteger)arg1 ;
-(void)_callAddContentActionHandler;
-(void)_configureLayout:(id)arg0 ;
-(void)_ensureZoomingAnchor;
-(void)_performAnchorAlignmentVisualShiftWithBaseLayout:(id)arg0 ;
-(void)_updateBackgroundSprites;
-(void)_updateDataSource;
-(void)_updateDebugVisualizationSprites;
-(void)_updateDecorationSource;
-(void)_updateDecorationVisibility;
-(void)_updateEffectProvider;
-(void)_updateEffectiveOverlayInsets;
-(void)_updateFloatingHeaderStyle;
-(void)_updateLayers;
-(void)_updatePinchEffect;
-(void)_updatePrefetching;
-(void)_updateSurroundingScrollableContent;
-(void)_updateVisualShifting;
-(void)_updateZoom;
-(void)_updateZoomTransforms;
-(void)appearStateDidChange;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)containingScrollViewDidScroll:(struct CGPoint )arg0 ;
-(void)didUpdate;
-(void)entityManagerDidChange;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(id)arg0 ;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id)arg0 ;
-(void)invalidateItemsLayout;
-(void)itemsLayout:(id)arg0 updateTagsInSpriteInfos:(struct ? *)arg1 forItemsInRange:(struct _NSRange )arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)screenScaleDidChange;
-(void)scrollSpeedRegimeDidChange;
-(void)update;
-(void)visibleRectDidChange;
-(void)willUpdate;


@end


#endif