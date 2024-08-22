// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUNIFIEDTABBARLAYOUT_H
#define SFUNIFIEDTABBARLAYOUT_H

@class UIScrollView, NSMutableIndexSet, NSIndexSet, NSArray;

#import <Foundation/Foundation.h>

#import "SFUnifiedBarMetrics.h"
#import "SFUnifiedBarItem.h"
#import "SFUnifiedTabBarItemArrangement.h"

@interface SFUnifiedTabBarLayout : NSObject {
    UIScrollView *_scrollView;
    BOOL _flipped;
    CGRect _visibleRectOverride;
    CGSize _lastLayoutSize;
    CGPoint _lastLayoutMidpoint;
    CGPoint _lastLayoutContentOffset;
    CGFloat _activeItemWidth;
    CGFloat _itemWidth;
    CGFloat _squishedActiveItemWidth;
    CGFloat _leadingItemOffset;
    BOOL _standalone;
    CGFloat _itemSpacing;
    CGFloat _transitioningItemScale;
    CGFloat _scrollSlowingInset;
    NSMutableIndexSet *_visibleItemIndexes;
    NSMutableIndexSet *_occludedItemIndexes;
    BOOL _expandedItemIsCentered;
    CGFloat _offsetForCenteringExpandedItem;
    CGFloat _activeItemWidthWhenNotExpanded;
}


@property (readonly, nonatomic) CGRect _safeArea;
@property (readonly, nonatomic) BOOL activeItemIsSquished;
@property (retain, nonatomic) SFUnifiedBarMetrics *barMetrics; // ivar: _barMetrics
@property (readonly, nonatomic) BOOL centersActiveItemWhenExpanded;
@property (readonly, nonatomic) BOOL contentIsCentered; // ivar: _contentIsCentered
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, nonatomic) BOOL horizontalSpaceIsExtremelyConstrained;
@property (retain, nonatomic) SFUnifiedBarItem *hoveringItem; // ivar: _hoveringItem
@property (readonly, nonatomic) NSUInteger indexOfCenterItem;
@property (readonly, nonatomic) BOOL isCurrentlyScrollable;
@property (readonly, nonatomic) SFUnifiedTabBarItemArrangement *itemArrangement; // ivar: _itemArrangement
@property (readonly, nonatomic) CGFloat maximumActiveItemWidth;
@property (readonly, nonatomic) NSUInteger maximumNumberOfVisibleItems;
@property (nonatomic) CGPoint midpointForCenteredContent; // ivar: _midpointForCenteredContent
@property (nonatomic) NSUInteger sizeClass; // ivar: _sizeClass
@property (readonly, nonatomic) NSIndexSet *visibleItemIndexes;
@property (readonly, nonatomic) NSArray *visibleItems;


+(CGFloat)minimumInactiveItemWidthForSizeClass:(NSUInteger)arg0 ;
-(CGFloat)_distanceToEdgeForItemAtIndex:(NSUInteger)arg0 withFrame:(struct CGRect )arg1 activeItemFrame:(struct CGRect )arg2 occludedEdge:(*NSUInteger)arg3 ;
-(CGFloat)_effectiveMinimumActiveItemWidth;
-(CGFloat)_insetToRevealNextItem;
-(CGFloat)_maximumItemSpacing;
-(CGFloat)_minimumActiveItemWidth;
-(CGFloat)_minimumActiveItemWidthRatio;
-(CGFloat)_minimumHorizontalOffsetForOccludedItems;
-(CGFloat)_minimumInactiveItemWidth;
-(CGFloat)_minimumItemSpacing;
-(CGFloat)_offsetForItemAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_offsetForItemAtIndex:(NSUInteger)arg0 inItems:(id)arg1 ;
-(CGFloat)_pinnedActiveItemOffsetSquishingActiveItem:(BOOL)arg0 activeItemFrame:(struct CGRect *)arg1 ;
-(CGFloat)_widthForItem:(id)arg0 ;
-(CGFloat)_zPositionForItem:(id)arg0 ;
-(NSUInteger)_indexOfItemClosestToPoint:(struct CGPoint )arg0 ;
-(id)indexesOfItemsVisibleInRect:(struct CGRect )arg0 ;
-(id)initWithItemArrangement:(id)arg0 configuration:(id)arg1 ;
-(id)itemAtPoint:(struct CGPoint )arg0 ;
-(id)itemClosestToPoint:(struct CGPoint )arg0 ;
-(id)itemsVisibleInRect:(struct CGRect )arg0 ;
-(struct ? )_scrollSlowingLayoutInfoForItemAtIndex:(NSUInteger)arg0 withLayoutInfo:(struct ? )arg1 activeItemFrame:(struct CGRect )arg2 ;
-(struct CGPoint )_contentOffsetForScrollingToRegionWithMinX:(CGFloat)arg0 maxX:(CGFloat)arg1 insets:(struct UIEdgeInsets )arg2 ;
-(struct CGPoint )contentOffsetForScrollingToDroppingItems;
-(struct CGPoint )contentOffsetForScrollingToItemAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )_activeItemPinnableArea;
-(struct CGRect )_adjustedActiveItemFrame:(struct CGRect )arg0 pinActiveItem:(BOOL)arg1 squishActiveItem:(BOOL)arg2 centerExpandedItem:(BOOL)arg3 ;
-(struct CGRect )_contentArea;
-(struct CGRect )_frameForItem:(id)arg0 withOffset:(CGFloat)arg1 pinActiveItem:(BOOL)arg2 squishActiveItem:(BOOL)arg3 centerExpandedItem:(BOOL)arg4 ;
-(struct CGRect )_slideFrame:(struct CGRect )arg0 forItemAtIndex:(NSUInteger)arg1 pinnedActiveItemOffset:(CGFloat)arg2 ;
-(struct CGRect )_unpinnedFrameForItemAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForItem:(id)arg0 ;
-(struct UIEdgeInsets )_insetsForActiveItemPinnableArea;
-(struct UIEdgeInsets )_insetsForScrollingToItemAtIndex:(NSUInteger)arg0 ;
-(void)_determineOffsetForCenteringExpandedItem;
-(void)_enumerateFramesForItemsAtIndexes:(id)arg0 pinActiveItem:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)_updateContentSize;
-(void)_updateItemWidths;
-(void)_updateSquishedActiveItemWidth;
-(void)enumerateFinalLayoutForDisappearingItemsAtIndexes:(id)arg0 withDistanceScrolled:(CGFloat)arg1 usingBlock:(id)arg2 ;
-(void)enumerateInitialLayoutForAppearingItemsAtIndexes:(id)arg0 withDistanceToScroll:(CGFloat)arg1 usingBlock:(id)arg2 ;
-(void)enumerateLayoutForItemsAtIndexes:(id)arg0 usingBlock:(id)arg1 ;
-(void)setItemAtIndex:(NSUInteger)arg0 isOccluded:(BOOL)arg1 ;
-(void)setItemAtIndex:(NSUInteger)arg0 isVisible:(BOOL)arg1 ;
-(void)updateItemSizes;
-(void)updateItemSizesIfNeeded;


@end


#endif