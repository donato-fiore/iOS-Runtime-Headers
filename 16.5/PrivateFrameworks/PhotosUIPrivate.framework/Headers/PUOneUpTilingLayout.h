// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUONEUPTILINGLAYOUT_H
#define PUONEUPTILINGLAYOUT_H

@class NSIndexPath, NSMutableDictionary, UITraitCollection;
@protocol PUOneUpTilingLayoutDelegate;


#import "PUSectionedTilingLayout.h"
#import "PUParallaxComputer.h"

@interface PUOneUpTilingLayout : PUSectionedTilingLayout {
    CGSize _itemSize;
    NSIndexPath *_inFocusIndexPath;
    NSIndexPath *_neighborIndexPath;
    ? _delegateFlags;
    NSMutableDictionary *_layoutInfosByIndexPathByTileKind;
}


@property (nonatomic) CGSize assetExplorerReviewScreenProgressIndicatorSize; // ivar: _assetExplorerReviewScreenProgressIndicatorSize
@property (nonatomic) CGSize bufferingIndicatorSize; // ivar: _bufferingIndicatorSize
@property (nonatomic) BOOL canDisplayLoadingIndicators; // ivar: _canDisplayLoadingIndicators
@property (nonatomic) UIEdgeInsets contentGuideInsets; // ivar: _contentGuideInsets
@property (nonatomic) UIEdgeInsets contentSafeInsets; // ivar: _contentSafeInsets
@property (weak, nonatomic) NSObject<PUOneUpTilingLayoutDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGSize displaySizeForInsetMatching; // ivar: _displaySizeForInsetMatching
@property (readonly, nonatomic) NSIndexPath *indexPathOfCurrentItem;
@property (nonatomic) CGSize interpageSpacing; // ivar: _interpageSpacing
@property (retain, nonatomic) PUParallaxComputer *parallaxComputer; // ivar: _parallaxComputer
@property (nonatomic) CGSize peopleRowSize; // ivar: _peopleRowSize
@property (nonatomic) CGSize playButtonSize; // ivar: _playButtonSize
@property (nonatomic) UIEdgeInsets progressIndicatorContentInsets; // ivar: _progressIndicatorContentInsets
@property (nonatomic) CGSize progressIndicatorSize; // ivar: _progressIndicatorSize
@property (nonatomic) CGSize renderIndicatorSize; // ivar: _renderIndicatorSize
@property (nonatomic) BOOL shouldHideMainContent; // ivar: _shouldHideMainContent
@property (nonatomic) BOOL shouldPinContentToTop; // ivar: _shouldPinContentToTop
@property (nonatomic) NSInteger tileInitialContentMode; // ivar: _tileInitialContentMode
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) CGFloat transitionProgress; // ivar: _transitionProgress
@property (nonatomic) BOOL useAssetExplorerReviewScreenBadgeTiles; // ivar: _useAssetExplorerReviewScreenBadgeTiles
@property (nonatomic) BOOL useBackgroundTile; // ivar: _useBackgroundTile
@property (nonatomic) BOOL useBadgeTiles; // ivar: _useBadgeTiles
@property (nonatomic) BOOL useImportStatusIndicatorTiles; // ivar: _useImportStatusIndicatorTiles
@property (nonatomic) BOOL useReviewScreenBars; // ivar: _useReviewScreenBars
@property (nonatomic) BOOL useSelectionIndicatorTiles; // ivar: _useSelectionIndicatorTiles
@property (nonatomic) BOOL useSyndicationAttributionTile; // ivar: _useSyndicationAttributionTile
@property (nonatomic) BOOL useUserTransformTiles; // ivar: _useUserTransformTiles
@property (nonatomic) BOOL useVerticalReviewScreenControlBarLayout; // ivar: _useVerticalReviewScreenControlBarLayout
@property (nonatomic) NSInteger windowInterfaceOrientation; // ivar: _windowInterfaceOrientation


+(id)centerTileKinds;
+(struct CGRect )rectForFittingToTargetPixelSize:(struct CGSize )arg0 imagePixelSize:(struct CGSize )arg1 bestSquareUnitRect:(struct CGRect )arg2 ;
+(struct CGRect )untransformedRectForItemWithAspectRatio:(CGFloat)arg0 pageRect:(struct CGRect )arg1 safeInsets:(struct UIEdgeInsets )arg2 ;
+(void)initialize;
-(BOOL)_accessoryViewVisibilityForItemAtIndexPath:(id)arg0 ;
-(BOOL)_isShowingInfoPanelForItemAtIndexPath:(id)arg0 ;
-(BOOL)_isVideoPlacholderVisibleForItemAtIndexPath:(id)arg0 ;
-(BOOL)_shouldShowRenderIndicatorForIndexPath:(id)arg0 size:(struct CGSize )arg1 ;
-(CGFloat)_minimumBottomContentInsetsForItemAtIndexPath:(id)arg0 ;
-(CGFloat)_normalizedTransitionProgressFrom:(id)arg0 withAbscissa:(CGFloat)arg1 outNeighbor:(*id)arg2 ;
-(id)_createLayoutInfoForTileWithIndexPath:(id)arg0 kind:(id)arg1 ;
-(id)_displayTileTransformForItemAtIndexPath:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_displayTileTransformForItemAtIndexPath:(id)arg0 pageSize:(struct CGSize )arg1 secondaryDisplayTransform:(id)arg2 options:(NSUInteger)arg3 ;
-(id)_indexPathOfItemClosestToAbscissa:(CGFloat)arg0 ;
-(id)init;
-(id)layoutInfoForTileWithIndexPath:(id)arg0 kind:(id)arg1 ;
-(id)preferredScrollInfo;
-(struct CGPoint )_contentOffsetForItemAtIndexPath:(id)arg0 ;
-(struct CGRect )_frameForTileWithSize:(struct CGSize )arg0 centeredOnItemAtIndexPath:(id)arg1 ;
-(struct CGRect )_pageRectForItemAtIndexPath:(id)arg0 ;
-(struct CGRect )_untransformedRectForItemAtIndexPath:(id)arg0 ;
-(struct CGRect )_untransformedRectForItemAtIndexPath:(id)arg0 pageRect:(struct CGRect )arg1 ;
-(struct CGRect )visibleRectForItemAtIndexPath:(id)arg0 transitionProgress:(CGFloat)arg1 ;
-(struct CGRect )visibleRectForScrollingToItemAtIndexPath:(id)arg0 scrollPosition:(NSInteger)arg1 ;
-(struct CGSize )_itemSize;
-(struct CGSize )estimatedSectionSize;
-(struct CGSize )sizeForSection:(NSInteger)arg0 numberOfItems:(NSInteger)arg1 ;
-(void)_getLayoutRect:(struct CGRect *)arg0 transform:(struct CGAffineTransform *)arg1 parallaxOffset:(struct CGPoint *)arg2 contentsRect:(struct CGRect *)arg3 alpha:(*CGFloat)arg4 forContentOfItemAtIndexPath:(id)arg5 options:(NSUInteger)arg6 ;
-(void)_getLayoutRect:(struct CGRect *)arg0 transform:(struct CGAffineTransform *)arg1 parallaxOffset:(struct CGPoint *)arg2 forContentOfItemAtIndexPath:(id)arg3 options:(NSUInteger)arg4 ;
-(void)_invalidateContentRelatedTilesWithIndexPath:(id)arg0 inContext:(id)arg1 ;
-(void)addLayoutInfosForTilesInRect:(struct CGRect )arg0 section:(NSInteger)arg1 toSet:(id)arg2 ;
-(void)invalidateAccessoryForItemAtIndexPath:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(void)invalidateBadgeSizeForItemAtIndexPath:(id)arg0 ;
-(void)invalidateContentOffsetForItemAtIndexPath:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)invalidateLoadingIndicatorForItemAtIndexPath:(id)arg0 ;
-(void)invalidateModelTileTransformForItemAtIndexPath:(id)arg0 ;
-(void)invalidateProgressIndicatorForItemAtIndexPath:(id)arg0 ;
-(void)invalidateVideoPlaceholderForItemAtIndexPath:(id)arg0 ;
-(void)prepareLayout;
-(void)setVisibleRect:(struct CGRect )arg0 ;


@end


#endif