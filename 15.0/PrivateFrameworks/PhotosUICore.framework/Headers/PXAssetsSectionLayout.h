// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETSSECTIONLAYOUT_H
#define PXASSETSSECTIONLAYOUT_H

@class NSString, NSSet;
@protocol PXChangeObserver, PXGShadowSource, PXGViewSource, PXGDisplayAssetSource, PXGGeneratedLayoutDelegate, PXGItemsLayoutDelegate, PXCuratedLibraryRowBasedLayout, PXDisplayAssetFetchResult, PXDisplayAssetCollection, PXGItemsGeometry, PXAssetSectionLayoutDelegate;


#import "PXGSplitLayout.h"
#import "PXCuratedLibrarySectionHeaderLayout.h"
#import "PXAssetCollectionReference.h"
#import "PXGBurstStackEffect.h"
#import "PXCuratedLibraryActionManager.h"
#import "PXPhotosGridAssetDecorationSource.h"
#import "PXGLayout.h"
#import "PXAssetsSectionConfigurator.h"
#import "PXAssetsDataSource.h"
#import "PXAssetReference.h"
#import "PXGLayoutGuide.h"
#import "PXLoadingStatusManager.h"
#import "PXCuratedLibraryActionPerformer.h"
#import "PXCuratedLibraryOverlayButtonConfiguration.h"
#import "PXSelectionSnapshot.h"
#import "PXCuratedLibraryShowAllActionPerformer.h"
#import "PXIndexPathSet.h"
#import "PXAssetsSectionLayoutSpec.h"

@interface PXAssetsSectionLayout : PXGSplitLayout <PXChangeObserver, PXGShadowSource, PXGViewSource, PXGDisplayAssetSource, PXGGeneratedLayoutDelegate, PXGItemsLayoutDelegate, PXCuratedLibraryRowBasedLayout>

 {
    ? _updateFlags;
    ? _postUpdateFlags;
    unsigned int _sectionBoundariesSpriteIndex;
    unsigned int _sectionShadowSpriteIndex;
    unsigned int _showAllButtonSpriteIndex;
    unsigned short _showAllButtonVersion;
    CGSize _cachedShowAllButtonConfigurationSize;
    unsigned int _selectAllButtonSpriteIndex;
    unsigned short _selectAllButtonVersion;
    CGSize _cachedSelectAllButtonConfigurationSize;
    PXCuratedLibrarySectionHeaderLayout *_sectionHeaderLayout;
    BOOL _isLastSection;
    BOOL _isUpdatingLocalSprites;
    BOOL _showAllButtonConfigurationIsValid;
    BOOL _selectAllButtonConfigurationIsValid;
    PXAssetCollectionReference *_assetCollectionReference;
    _NSRange _cachedClampedItemRange;
    id<PXDisplayAssetFetchResult> *_cachedClampedFetchResult;
    PXGBurstStackEffect *_burstStackEffect;
}


@property (readonly, nonatomic) PXCuratedLibraryActionManager *actionManager; // ivar: _actionManager
@property (copy, nonatomic) id *addContentActionHandler; // ivar: _addContentActionHandler
@property (nonatomic) BOOL allowsPositionDependentHeaderContentOpacity; // ivar: _allowsPositionDependentHeaderContentOpacity
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (readonly, nonatomic) PXPhotosGridAssetDecorationSource *assetDecorationSource; // ivar: _assetDecorationSource
@property (retain, nonatomic) NSString *axLocalizedBaseLabel; // ivar: _axLocalizedBaseLabel
@property (retain, nonatomic) PXGLayout *bodyContainerLayout; // ivar: _bodyContainerLayout
@property (readonly, nonatomic) PXGLayout *bodyContentLayout; // ivar: _bodyContentLayout
@property (readonly, nonatomic) NSObject<PXGItemsGeometry> *bodyItemsGeometry;
@property (readonly, nonatomic) CGFloat buildingRowContentHeight;
@property (readonly, nonatomic) CGFloat buildingRowSpacing;
@property (readonly, nonatomic) PXGBurstStackEffect *burstStackEffect;
@property (nonatomic) BOOL canStartSelecting; // ivar: _canStartSelecting
@property (retain, nonatomic) PXAssetsSectionConfigurator *configurator; // ivar: _configurator
@property (nonatomic) NSInteger currentSkimmingIndex; // ivar: _currentSkimmingIndex
@property (readonly, nonatomic) PXAssetsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXAssetSectionLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat distanceBetweenHeaderTopAndNextBodyTop; // ivar: _distanceBetweenHeaderTopAndNextBodyTop
@property (nonatomic) CGFloat distanceBetweenTitleTopAndBodyBottom; // ivar: _distanceBetweenTitleTopAndBodyBottom
@property (copy, nonatomic) NSSet *draggedAssetReferences;
@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference; // ivar: _dropTargetAssetReference
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXGLayout *headerLayout; // ivar: _headerLayout
@property (retain, nonatomic) PXGLayoutGuide *headerLayoutGuide; // ivar: _headerLayoutGuide
@property (nonatomic) CGFloat intersectionSpacing; // ivar: _intersectionSpacing
@property (readonly, nonatomic) BOOL isCurated;
@property (nonatomic) BOOL isSelecting; // ivar: _isSelecting
@property (nonatomic) BOOL isSkimming; // ivar: _isSkimming
@property (nonatomic) BOOL itemCaptionsVisible; // ivar: _itemCaptionsVisible
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *keyAssetsFetchResult;
@property (readonly, nonatomic) NSInteger keyItemIndex;
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager; // ivar: _loadingStatusManager
@property (nonatomic) NSInteger maxSkimmingIndex; // ivar: _maxSkimmingIndex
@property (readonly, nonatomic) NSInteger numberOfAssets;
@property (nonatomic) NSInteger numberOfPrecedingAssets; // ivar: _numberOfPrecedingAssets
@property (readonly, nonatomic) PXSimpleIndexPath presentedSectionIndexPath; // ivar: _presentedSectionIndexPath
@property (readonly, nonatomic) BOOL presentedSkimming; // ivar: _presentedSkimming
@property (nonatomic) BOOL removesContentLayoutWhenEmpty; // ivar: _removesContentLayoutWhenEmpty
@property (nonatomic) BOOL removesHeaderLayoutWhenEmpty; // ivar: _removesHeaderLayoutWhenEmpty
@property (readonly, nonatomic) NSInteger section; // ivar: _section
@property (readonly, nonatomic) PXSimpleIndexPath sectionIndexPath;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *selectAllActionPerformer; // ivar: _selectAllActionPerformer
@property (readonly, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *selectAllButtonConfiguration; // ivar: _selectAllButtonConfiguration
@property (retain, nonatomic) NSString *selectAllButtonTitle; // ivar: _selectAllButtonTitle
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (retain, nonatomic) PXCuratedLibraryShowAllActionPerformer *showAllActionPerformer; // ivar: _showAllActionPerformer
@property (readonly, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *showAllButtonConfiguration; // ivar: _showAllButtonConfiguration
@property (nonatomic) CGRect showAllButtonFrame; // ivar: _showAllButtonFrame
@property (nonatomic) BOOL showsSkimmingInteraction; // ivar: _showsSkimmingInteraction
@property (nonatomic) BOOL showsSkimmingSlideshow; // ivar: _showsSkimmingSlideshow
@property (retain, nonatomic) PXIndexPathSet *skimmingIndexPaths; // ivar: _skimmingIndexPaths
@property (retain, nonatomic) PXAssetsSectionLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (nonatomic) NSInteger targetZoomLevel; // ivar: _targetZoomLevel
@property (nonatomic) BOOL wantsDimmedSelectionStyle; // ivar: _wantsDimmedSelectionStyle
@property (nonatomic) BOOL wantsNumberedSelectionStyle; // ivar: _wantsNumberedSelectionStyle
@property (nonatomic) BOOL wantsShadow; // ivar: _wantsShadow
@property (nonatomic) NSInteger zoomLevel; // ivar: _zoomLevel


+(struct CGSize )estimatedSizeWithReferenceSize:(struct CGSize )arg0 assetCollection:(id)arg1 numberOfAssets:(NSInteger)arg2 isCurated:(BOOL)arg3 zoomLevel:(NSInteger)arg4 spec:(id)arg5 ;
-(BOOL)_shouldAnchorOnAssetCollection;
-(BOOL)allowsDanglingUpdatesAssertions;
-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(CGFloat)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(CGFloat)itemsLayout:(id)arg0 aspectRatioForItem:(NSInteger)arg1 ;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)itemsLayout:(id)arg0 itemForObjectReference:(id)arg1 options:(NSUInteger)arg2 ;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(NSUInteger)desiredPlaceholderStyleInLayout:(id)arg0 ;
-(NSUInteger)supportedDisplayAssetPresentationStylesInLayout:(id)arg0 ;
-(id)_assetReferenceClosestVisuallyToAssetReference:(id)arg0 ;
-(id)_displayAssetForBodyItem:(NSInteger)arg0 ;
-(id)_rowBasedBodyContentLayout;
-(id)axLocalizedLabel;
-(id)axSpriteIndexes;
-(id)dateIntervalFutureForContentInRect:(SEL)arg0 type:(struct CGRect )arg1 ;
-(id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(id)generatedLayout:(id)arg0 inputItemAtIndex:(unsigned int)arg1 ;
-(id)generatedLayout:(id)arg0 objectReferenceAtIndex:(unsigned int)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)init;
-(id)initWithSection:(NSInteger)arg0 dataSource:(id)arg1 actionManager:(id)arg2 loadingStatusManager:(id)arg3 zoomLevel:(NSInteger)arg4 spec:(id)arg5 ;
-(id)initWithSection:(NSInteger)arg0 dataSource:(id)arg1 spec:(id)arg2 ;
-(id)itemsLayout:(id)arg0 objectReferenceForItem:(NSInteger)arg1 ;
-(id)layoutForItemChanges;
-(id)objectReferenceForSpriteIndex:(unsigned int)arg0 ;
-(id)shadowForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct ? )itemsLayout:(id)arg0 cornerRadiusForItem:(NSInteger)arg1 ;
-(struct CGRect )generatedLayout:(id)arg0 bestCropRectForInputItemAtIndex:(unsigned int)arg1 withAspectRatio:(CGFloat)arg2 ;
-(struct CGRect )itemsLayout:(id)arg0 bestCropRectForItem:(NSInteger)arg1 withAspectRatio:(CGFloat)arg2 ;
-(struct CGSize )itemsLayout:(id)arg0 insetForItem:(NSInteger)arg1 ;
-(struct CGSize )minSpriteSizeForPresentationStyle:(NSUInteger)arg0 ;
-(struct PXSimpleIndexPath )_dataSourceIndexPathForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(unsigned int)itemsLayout:(id)arg0 effectIdForItem:(NSInteger)arg1 ;
-(unsigned int)spriteIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(void)_callAddContentActionHandler;
-(void)_invalidateAssetsWithCoveredBottomTrailingCorner;
-(void)_invalidateConfigurator;
-(void)_invalidateContent;
-(void)_invalidateSelectAllButton;
-(void)_invalidateSelectAllButtonPosition;
-(void)_invalidateShowAllButton;
-(void)_invalidateShowAllButtonPosition;
-(void)_updateAssetsWithCoveredBottomTrailingCorner;
-(void)_updateConfigurator;
-(void)_updateContent;
-(void)_updateDecorationSource;
-(void)_updateDistanceProperties;
-(void)_updateLocalSprites;
-(void)_updateSectionHeaderProperties;
-(void)_updateSelectAllButtonPosition;
-(void)_updateShowAllButtonPosition;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)contentSizeDidChange;
-(void)enumerateRowsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(id)arg0 ;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id)arg0 ;
-(void)itemsLayout:(id)arg0 updateTagsInSpriteInfos:(struct ? *)arg1 forItemsInRange:(struct _NSRange )arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)screenScaleDidChange;
-(void)update;
-(void)visibleRectDidChange;


@end


#endif