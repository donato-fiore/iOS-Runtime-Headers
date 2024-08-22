// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSCRUBBERTILINGLAYOUT_H
#define PUSCRUBBERTILINGLAYOUT_H

@class NSIndexPath, NSMutableDictionary;
@protocol PUScrubberTilingLayoutDelegate;


#import "PUSectionedTilingLayout.h"

@interface PUScrubberTilingLayout : PUSectionedTilingLayout {
    CGSize _slitSize;
    NSIndexPath *_currentItemIndexPath;
    CGFloat _loupeWidth;
    NSIndexPath *_loupeNeighborIndexPath;
    NSMutableDictionary *_layoutInfosByIndexPathByTileKind;
    ? _delegateFlags;
}


@property (nonatomic) UIEdgeInsets contentPadding; // ivar: _contentPadding
@property (readonly, nonatomic) CGFloat currentItemFocusProgress; // ivar: _currentItemFocusProgress
@property (readonly, nonatomic) NSIndexPath *currentItemIndexPath;
@property (readonly, nonatomic) CGFloat currentItemTransitionProgress; // ivar: _currentItemTransitionProgress
@property (weak, nonatomic) NSObject<PUScrubberTilingLayoutDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSIndexPath *expandedItemIndexPath; // ivar: _expandedItemIndexPath
@property (nonatomic) CGFloat expandedItemPlayheadProgress; // ivar: _expandedItemPlayheadProgress
@property (nonatomic) CGFloat expandedItemWidth; // ivar: _expandedItemWidth
@property (readonly, nonatomic) CGPoint focusPoint;
@property (nonatomic) CGSize interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) CGFloat loupeAmount; // ivar: _loupeAmount
@property (readonly, nonatomic) NSIndexPath *loupeIndexPath; // ivar: _loupeIndexPath
@property (readonly, nonatomic) CGFloat loupeTransitionProgress; // ivar: _loupeTransitionProgress
@property (nonatomic) CGFloat maxAspectRatio; // ivar: _maxAspectRatio
@property (nonatomic) BOOL onlyShowExpandedItem; // ivar: _onlyShowExpandedItem
@property (retain, nonatomic) NSIndexPath *overrideLoupeIndexPath; // ivar: _overrideLoupeIndexPath
@property (nonatomic) CGFloat playheadVerticalOverhang; // ivar: _playheadVerticalOverhang
@property (nonatomic) BOOL shouldHighlightSelectedItems; // ivar: _shouldHighlightSelectedItems
@property (nonatomic) BOOL showPlayheadForExpandedItem; // ivar: _showPlayheadForExpandedItem
@property (nonatomic) CGFloat slitAspectRatio; // ivar: _slitAspectRatio
@property (nonatomic) BOOL snapToExpandedItem; // ivar: _snapToExpandedItem


-(BOOL)_shouldShowTimeIndicatorForExpandedItemAtIndexPath:(id)arg0 ;
-(CGFloat)_focusAbscissa;
-(CGFloat)_loupeAmountFor:(id)arg0 ;
-(CGFloat)_normalizedTransitionProgressFrom:(id)arg0 withAbscissa:(CGFloat)arg1 outNeighborIndexPath:(*id)arg2 ;
-(CGFloat)_transformedHorizontalOffsetForIndexPath:(id)arg0 ;
-(NSInteger)_indexOfItemClosestToAbscissa:(CGFloat)arg0 inSection:(NSInteger)arg1 ;
-(float)_aspectRatioForIndexPath:(id)arg0 ;
-(id)_createLayoutInfoForTileWithIndexPath:(id)arg0 kind:(id)arg1 ;
-(id)_indexPathOfItemClosestToAbscissa:(CGFloat)arg0 ;
-(id)indexPathOfItemClosestToPoint:(struct CGPoint )arg0 ;
-(id)init;
-(id)layoutInfoForTileWithIndexPath:(id)arg0 kind:(id)arg1 ;
-(id)preferredScrollInfo;
-(struct CGRect )_rectForItemAtIndexPath:(id)arg0 withLoupeTransform:(BOOL)arg1 withExpanded:(BOOL)arg2 ;
-(struct CGRect )contentBounds;
-(struct CGRect )visibleRectForScrollingToItemAtIndexPath:(id)arg0 scrollPosition:(NSInteger)arg1 ;
-(struct CGRect )visibleRectForScrollingToItemAtIndexPath:(id)arg0 transitionProgress:(CGFloat)arg1 ;
-(struct CGSize )_slitSize;
-(struct CGSize )_transformedSizeForIndexPath:(id)arg0 ;
-(struct CGSize )estimatedSectionSize;
-(struct CGSize )sizeForSection:(NSInteger)arg0 numberOfItems:(NSInteger)arg1 ;
-(void)addLayoutInfosForTilesInRect:(struct CGRect )arg0 section:(NSInteger)arg1 toSet:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)invalidateSelectedItems;
-(void)prepareLayout;
-(void)setVisibleRect:(struct CGRect )arg0 ;


@end


#endif