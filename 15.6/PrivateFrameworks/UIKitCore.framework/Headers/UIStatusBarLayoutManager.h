// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISTATUSBARLAYOUTMANAGER_H
#define UISTATUSBARLAYOUTMANAGER_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "UIStatusBarForegroundView.h"

@interface UIStatusBarLayoutManager : NSObject {
    int _region;
    UIStatusBarItemView" _itemViews;
}


@property (retain, nonatomic) NSNumber *assignedStartPosition; // ivar: _assignedStartPosition
@property (weak, nonatomic) UIStatusBarForegroundView *foregroundView; // ivar: _foregroundView
@property (nonatomic) BOOL persistentAnimationsEnabled; // ivar: _persistentAnimationsEnabled
@property (readonly, nonatomic) BOOL usesVerticalLayout; // ivar: _usesVerticalLayout


-(BOOL)_processDelta:(CGFloat)arg0 forView:(id)arg1 ;
-(BOOL)_updateItemView:(id)arg0 withData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(BOOL)itemIsVisible:(id)arg0 ;
-(BOOL)prepareDoubleHeightItemWithEnabledItems:(*BOOL)arg0 ;
-(BOOL)prepareEnabledItems:(*BOOL)arg0 withData:(id)arg1 actions:(int)arg2 ;
-(BOOL)updateDoubleHeightItem;
-(BOOL)updateItemsWithData:(id)arg0 actions:(int)arg1 animated:(BOOL)arg2 ;
-(CGFloat)_dimensionForSize:(struct CGSize )arg0 ;
-(CGFloat)_positionAfterPlacingItemView:(id)arg0 startPosition:(CGFloat)arg1 firstView:(BOOL)arg2 ;
-(CGFloat)_sizeNeededForItemView:(id)arg0 ;
-(CGFloat)_startPosition;
-(CGFloat)distributeOverlap:(CGFloat)arg0 amongItems:(id)arg1 ;
-(CGFloat)removeOverlap:(CGFloat)arg0 fromItems:(id)arg1 ;
-(CGFloat)sizeNeededForItem:(id)arg0 ;
-(CGFloat)sizeNeededForItems:(id)arg0 ;
-(id)_createViewForItem:(id)arg0 withData:(id)arg1 actions:(int)arg2 ;
-(id)_itemViews;
-(id)_itemViewsSortedForLayout;
-(id)_viewForItem:(id)arg0 ;
-(id)allItemViews;
-(id)initWithRegion:(int)arg0 foregroundView:(id)arg1 usesVerticalLayout:(BOOL)arg2 ;
-(id)itemViewOfType:(int)arg0 ;
-(id)visibleItemViewAtPoint:(struct CGPoint )arg0 inForegroundView:(id)arg1 ;
-(struct CGRect )_frameForItemView:(id)arg0 startPosition:(CGFloat)arg1 firstView:(BOOL)arg2 ;
-(struct CGRect )_repositionedNewFrame:(struct CGRect )arg0 sizeDelta:(CGFloat)arg1 ;
-(struct CGRect )rectForItems:(id)arg0 ;
-(void)_addOriginDelta:(CGFloat)arg0 toPoint:(struct CGPoint *)arg1 ;
-(void)_positionNewItemViewsWithEnabledItems:(*BOOL)arg0 ;
-(void)_prepareEnabledItemType:(int)arg0 withEnabledItems:(*BOOL)arg1 withData:(id)arg2 actions:(int)arg3 itemAppearing:(*BOOL)arg4 itemDisappearing:(*BOOL)arg5 ;
-(void)_setOrigin:(CGFloat)arg0 forPoint:(struct CGPoint *)arg1 ;
-(void)clearOverlapFromItems:(id)arg0 ;
-(void)dealloc;
-(void)itemView:(id)arg0 sizeChangedBy:(CGFloat)arg1 ;
-(void)makeVisibleItemsPerformPendedActions;
-(void)positionInvisibleItems;
-(void)reflowWithVisibleItems:(id)arg0 duration:(CGFloat)arg1 ;
-(void)removeDisabledItems:(*BOOL)arg0 ;
-(void)setVisibilityOfAllItems:(BOOL)arg0 ;
-(void)setVisibilityOfItem:(id)arg0 visible:(BOOL)arg1 ;
-(void)setVisibilityOfItemType:(int)arg0 visible:(BOOL)arg1 ;


@end


#endif