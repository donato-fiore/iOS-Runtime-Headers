// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGDECORATINGLAYOUT_H
#define PXGDECORATINGLAYOUT_H

@class NSMutableIndexSet;
@protocol PXGShadowSource, PXGShadowDecorationSource, PXGAssetBackgroundDecorationSource, PXGAssetBadgeDecorationSource, PXGCaptionDecorationSource, PXGDebugDecorationSource, PXGLayoutContentSource, PXGDragDecorationSource, PXGHighlightDecorationSource, PXGItemsGeometry, PXGSelectionDecorationSource, PXGSolidColorOverlayDecorationSource, PXGTapbackDecorationSource, PXGViewDecorationSource;


#import "PXGLayout.h"

@interface PXGDecoratingLayout : PXGLayout {
    ? _updateFlags;
    BOOL _isUpdatingDecoratedLayout;
    NSMutableIndexSet *_invalidatedDecoratedSpriteIndexes;
    *unsigned int _activeDecorationSpriteIndexes;
    unsigned int _activeDecorationsCount;
    NSMutableIndexSet *_pendingActiveDecorationSpriteIndexes;
    BOOL _wantsCaptionDecorations;
    NSInteger _selectionDecorationStyle;
    NSUInteger _selectionDecorationOptions;
    id<PXGShadowSource> *_shadowSource;
    id<PXGShadowDecorationSource> *_shadowDecorationSource;
    BOOL _wantsSolidColorOverlays;
    BOOL _isChangingDecoratedLayout;
}


@property (nonatomic) BOOL allowsViewDecorationHitTesting; // ivar: _allowsViewDecorationHitTesting
@property (nonatomic) BOOL appliesAlphaToSublayouts; // ivar: _appliesAlphaToSublayouts
@property (readonly, weak, nonatomic) NSObject<PXGAssetBackgroundDecorationSource> *assetBackgroundDecorationSource; // ivar: _assetBackgroundDecorationSource
@property (readonly, weak, nonatomic) NSObject<PXGAssetBadgeDecorationSource> *assetBadgeDecorationSource; // ivar: _assetBadgeDecorationSource
@property (readonly, weak, nonatomic) NSObject<PXGAssetBadgeDecorationSource> *assetProgressDecorationSource; // ivar: _assetProgressDecorationSource
@property (readonly, weak, nonatomic) NSObject<PXGCaptionDecorationSource> *captionDecorationSource; // ivar: _captionDecorationSource
@property (readonly, nonatomic) unsigned int debugDecorationIndex;
@property (readonly, weak, nonatomic) NSObject<PXGDebugDecorationSource> *debugDecorationSource; // ivar: _debugDecorationSource
@property (retain, nonatomic) PXGLayout *decoratedLayout; // ivar: _decoratedLayout
@property (nonatomic) NSInteger decorationSizeClass; // ivar: _decorationSizeClass
@property (weak, nonatomic) NSObject<PXGLayoutContentSource> *decorationSource; // ivar: _decorationSource
@property (readonly, weak, nonatomic) NSObject<PXGDragDecorationSource> *dragDecorationSource; // ivar: _dragDecorationSource
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSInteger focusRingType; // ivar: _focusRingType
@property (readonly, weak, nonatomic) NSObject<PXGHighlightDecorationSource> *highlightDecorationSource; // ivar: _highlightDecorationSource
@property (readonly, nonatomic) NSObject<PXGItemsGeometry> *itemsGeometry;
@property (readonly, nonatomic) unsigned int numberOfDecoratingSpritesPerDecoratedSprite;
@property (readonly, weak, nonatomic) NSObject<PXGSelectionDecorationSource> *selectionDecorationSource; // ivar: _selectionDecorationSource
@property (readonly, weak, nonatomic) NSObject<PXGSolidColorOverlayDecorationSource> *solidColorOverlayDecorationSource; // ivar: _solidColorOverlayDecorationSource
@property (readonly, weak, nonatomic) NSObject<PXGTapbackDecorationSource> *tapbackDecorationSource; // ivar: _tapbackDecorationSource
@property (readonly, weak, nonatomic) NSObject<PXGViewDecorationSource> *viewDecorationSource; // ivar: _viewDecorationSource


-(BOOL)canHandleVisibleRectRejection;
-(BOOL)definesContextForPointReferences;
-(BOOL)isSpriteIndex:(unsigned int)arg0 decoratingSpriteWithIndex:(*unsigned int)arg1 ;
-(BOOL)spritesAreInSyncWithDecoratedLayout;
-(CGFloat)lastBaseline;
-(NSInteger)decoratingTypeForSpriteIndex:(unsigned int)arg0 ;
-(NSInteger)scrollableAxis;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(id)axContentInfoAtSpriteIndex:(unsigned int)arg0 ;
-(id)axSpriteIndexes;
-(id)currentDataSourceChange;
-(id)description;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)init;
-(id)initWithDecoratedLayout:(id)arg0 ;
-(id)itemsLayout;
-(id)layoutForItemChanges;
-(id)preferredFocusLayouts;
-(struct CGRect )sublayout:(id)arg0 visibleRectForRequestedVisibleRect:(struct CGRect )arg1 ;
-(struct PXGDecorationSpriteInfo )decorationSpriteInfoForDecoratedSpriteIndex:(unsigned int)arg0 decorationIndex:(unsigned int)arg1 assetBadgeInfo:(struct PXAssetBadgeInfo )arg2 overallSelectionOrder:(NSInteger)arg3 isItemSelected:(BOOL)arg4 isItemHighlighted:(BOOL)arg5 isItemDragged:(BOOL)arg6 ;
-(unsigned int)decoratedIndexForDecoratingIndex:(unsigned int)arg0 ;
-(unsigned int)decorationIndexForSpriteIndex:(unsigned int)arg0 ;
-(unsigned int)spriteIndexForDecorationIndex:(unsigned int)arg0 decoratingSpriteIndex:(unsigned int)arg1 ;
-(unsigned int)spriteIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(void)_applyDecoratedLayoutChangeDetails:(id)arg0 ;
-(void)_invalidateDecorationForSpriteRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 invalidateSprites:(BOOL)arg2 ;
-(void)_updateDecoratedLayout;
-(void)_updateDecorationSources;
-(void)_updateDecorationSprites;
-(void)_updateReloadSprites;
-(void)alphaDidChange;
-(void)dealloc;
-(void)didUpdate;
-(void)insertSublayout:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)referenceSizeDidChange;
-(void)safeAreaInsetsDidChange;
-(void)screenScaleDidChange;
-(void)setActiveDecorations:(id)arg0 ;
-(void)setContentSource:(id)arg0 ;
-(void)setLastBaseline:(CGFloat)arg0 ;
-(void)sublayout:(id)arg0 didApplySpriteChangeDetails:(id)arg1 fromDescendentSublayout:(id)arg2 ;
-(void)sublayoutDidChangeContentSize:(id)arg0 ;
-(void)sublayoutDidChangeLastBaseline:(id)arg0 ;
-(void)sublayoutNeedsUpdate:(id)arg0 ;
-(void)update;
-(void)userInterfaceDirectionDidChange;
-(void)viewEnvironmentDidChange;
-(void)visibleRectDidChange;
-(void)willUpdate;


@end


#endif