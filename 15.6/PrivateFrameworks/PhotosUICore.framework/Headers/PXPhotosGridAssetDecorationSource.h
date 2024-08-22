// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSGRIDASSETDECORATIONSOURCE_H
#define PXPHOTOSGRIDASSETDECORATIONSOURCE_H

@class NSIndexSet, NSMutableSet, NSShadow, NSString, NSSet;
@protocol PXGShadowSource, PXLoadingStatusManagerObserver, PXGAssetBadgeDecorationSource, PXGAssetBackgroundDecorationSource, PXGCaptionDecorationSource, PXGSelectionDecorationSource, PXGDragDecorationSource, PXGTapbackDecorationSource, PXGViewDecorationSource, PXGDebugDecorationSource, PXGDisplayAssetSource, PXGDisplayAssetRequestObserver, PXGDisplayAssetAdjustment, PXAssetImportStatusManager, PXTapbackStatusManager;

#import <Foundation/Foundation.h>

#import "PXAssetBadgeManager.h"
#import "PXAssetsDataSource.h"
#import "PXGGridLayout.h"
#import "PXGItemsLayout.h"
#import "PXGLayout.h"
#import "PXLoadingStatusManager.h"
#import "PXSelectionSnapshot.h"

@interface PXPhotosGridAssetDecorationSource : NSObject <PXGShadowSource, PXLoadingStatusManagerObserver, PXGAssetBadgeDecorationSource, PXGAssetBackgroundDecorationSource, PXGCaptionDecorationSource, PXGSelectionDecorationSource, PXGDragDecorationSource, PXGTapbackDecorationSource, PXGViewDecorationSource, PXGDebugDecorationSource, PXGDisplayAssetSource, PXGDisplayAssetRequestObserver>

 {
    ? _updateFlags;
    NSIndexSet *_draggedItems;
    NSMutableSet *_assetUUIDsInCloud;
    PXAssetBadgeManager *_badgeManager;
    BOOL _forceBadgesOnAllAssets;
    BOOL _isGettingLoadStatus;
    id<PXGDisplayAssetAdjustment> *_backgroundSpriteAdjustment;
    NSShadow *_backgroundShadow;
}


@property (retain, nonatomic) NSObject<PXAssetImportStatusManager> *assetImportStatusManager; // ivar: _assetImportStatusManager
@property (readonly, nonatomic) PXAssetsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXGGridLayout *decoratedGridLayout; // ivar: _decoratedGridLayout
@property (readonly, nonatomic) PXGItemsLayout *decoratedItemsLayout;
@property (weak, nonatomic) PXGLayout *decoratedLayout; // ivar: _decoratedLayout
@property (retain, nonatomic) Class decorationViewClass; // ivar: _decorationViewClass
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *draggedAssetReferences; // ivar: _draggedAssetReferences
@property (nonatomic) BOOL durationAlwaysHidden; // ivar: _durationAlwaysHidden
@property (nonatomic) BOOL enableDebugBadgeColors; // ivar: _enableDebugBadgeColors
@property (nonatomic) BOOL enableDebugDecoration; // ivar: _enableDebugDecoration
@property (nonatomic) BOOL enableSyndicatedAssetVisualTreatment; // ivar: _enableSyndicatedAssetVisualTreatment
@property (nonatomic) NSUInteger forbiddenBadges; // ivar: _forbiddenBadges
@property (nonatomic) BOOL forceSyndicatedAssetVisualTreatment; // ivar: _forceSyndicatedAssetVisualTreatment
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesInteractiveFavoriteBadges; // ivar: _hidesInteractiveFavoriteBadges
@property (nonatomic) NSInteger interItemSpacingThresholdForExteriorFocusRingSelection; // ivar: _interItemSpacingThresholdForExteriorFocusRingSelection
@property (nonatomic) BOOL isInSelectMode; // ivar: _isInSelectMode
@property (copy, nonatomic) NSIndexSet *itemsWithCoveredBottomTrailingCorner; // ivar: _itemsWithCoveredBottomTrailingCorner
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager; // ivar: _loadingStatusManager
@property (readonly, nonatomic) NSInteger section; // ivar: _section
@property (nonatomic, getter=isSelectionLimitReached) BOOL selectionLimitReached; // ivar: _selectionLimitReached
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot
@property (readonly) Class superclass;
@property (nonatomic) ? syndicatedAssetBackgroundCornerRadius; // ivar: _syndicatedAssetBackgroundCornerRadius
@property (retain, nonatomic) NSObject<PXTapbackStatusManager> *tapbackStatusManager; // ivar: _tapbackStatusManager
@property (nonatomic) BOOL wantsDimmedSelectionStyle; // ivar: _wantsDimmedSelectionStyle
@property (nonatomic) BOOL wantsNumberedSelectionStyle; // ivar: _wantsNumberedSelectionStyle


-(BOOL)_isSyndicatedAndUnsavedAssetForItem:(NSInteger)arg0 ;
-(BOOL)_isSyndicationCustomTreatmentEnabled;
-(BOOL)hasTapbacksForSpriteIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(BOOL)wantsAssetBadgeDecorationsInLayout:(id)arg0 ;
-(BOOL)wantsBackgroundForZeroInset;
-(BOOL)wantsCaptionDecorationsInLayout:(id)arg0 ;
-(BOOL)wantsDebugDecorationInLayout:(id)arg0 ;
-(BOOL)wantsInteractiveFavoriteBadgesInLayout:(id)arg0 ;
-(BOOL)wantsTapbackDecorationInLayout:(id)arg0 ;
-(CGFloat)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)focusRingTypeInLayout:(id)arg0 ;
-(NSInteger)overallSelectionOrderAtSpriteIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)selectionDecorationStyleInLayout:(id)arg0 ;
-(NSUInteger)assetBackgroundStyleForSpriteIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSUInteger)desiredPlaceholderStyleInLayout:(id)arg0 ;
-(NSUInteger)selectionDecorationAdditionsInLayout:(id)arg0 ;
-(id)_displayAssetForItem:(NSInteger)arg0 ;
-(id)_spriteIndexesForItems:(id)arg0 inLayout:(id)arg1 ;
-(id)adjustmentForDisplayAsset:(id)arg0 spriteIndex:(unsigned int)arg1 inLayout:(id)arg2 ;
-(id)backgroundSpriteAdjustment;
-(id)debugDecorationAtSpriteIndex:(unsigned int)arg0 asset:(id)arg1 inLayout:(id)arg2 ;
-(id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(id)draggingSpriteIndexesInLayout:(id)arg0 ;
-(id)init;
-(id)loadStatusForAsset:(id)arg0 atSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2 ;
-(id)selectedSpriteIndexesInLayout:(id)arg0 ;
-(id)shadowForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct ? )assetBackgroundCornerRadiusForSpriteIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct ? )expectedCornerRadiusForItem:(NSInteger)arg0 ;
-(struct ? )tapbackConfigurationForProposedConfiguration:(struct ? )arg0 spriteIndex:(unsigned int)arg1 inLayout:(id)arg2 ;
-(struct CGSize )expectedInsetsForItem:(NSInteger)arg0 ;
-(struct PXAssetBadgeInfo )assetBadgeInfoForAsset:(id)arg0 atSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2 ;
-(void)_invalidateDragDecoration;
-(void)_invalidateProgressDecoration;
-(void)_invalidateTapbackDecoration;
-(void)_updateDragDecoration;
-(void)loadingStatusManager:(id)arg0 didUpdateLoadingStatus:(id)arg1 forItem:(id)arg2 ;
-(void)observeIsInCloud:(BOOL)arg0 forDisplayAsset:(id)arg1 ;
-(void)update;


@end


#endif