// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABBAR_H
#define TABBAR_H

@class UIView, NSMutableArray, UIScrollView, UITapGestureRecognizer, UIVisualEffectView, UIPanGestureRecognizer, UIDragInteraction, UIHoverGestureRecognizer, NSString, NSArray, SFTabHoverPreviewController;
@protocol UIGestureRecognizerDelegate, UIScrollViewDelegate, TabCollectionView, TabBarDelegate;


#import "ReorderingAutoscroller.h"

@interface TabBar : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, TabCollectionView>

 {
    NSMutableArray *_tabBarItemViewReuseStack;
    UIScrollView *_scrollView;
    UITapGestureRecognizer *_tapRecognizer;
    UIView *_leadingContainer;
    UIView *_trailingContainer;
    UIVisualEffectView *_leadingVibrancyEffectView;
    UIVisualEffectView *_trailingVibrancyEffectView;
    UIPanGestureRecognizer *_reorderRecognizer;
    UIDragInteraction *_dragInteraction;
    UIHoverGestureRecognizer *_hoverRecognizer;
    BOOL _newTabVisibleInTabBar;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TabBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDraggingItem) BOOL draggingItem; // ivar: _draggingItem
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidesInactiveTabs;
@property (nonatomic) BOOL hidesTitles; // ivar: _hidesTitles
@property (readonly, nonatomic) NSUInteger indexOfCenterItem;
@property (readonly, nonatomic) CGFloat itemWidth;
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) BOOL lastDecelerationWasInterrupted;
@property (readonly, nonatomic) NSUInteger layoutAxes;
@property (readonly, nonatomic) NSUInteger maxNumberOfVisibleTabs;
@property (readonly, nonatomic) CGFloat minimumTabWidth; // ivar: _minimumTabWidth
@property (readonly, nonatomic) ReorderingAutoscroller *reorderingAutoscroller;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDropTransitionToItemView;
@property (readonly, nonatomic) BOOL supportsSystemDrag;
@property (readonly, nonatomic) SFTabHoverPreviewController *tabHoverPreviewController; // ivar: _tabHoverPreviewController
@property (nonatomic) NSInteger tintStyle; // ivar: _tintStyle


+(CGFloat)defaultHeight;
-(BOOL)_isScrollable;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_horizontalPositionForItemAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_horizontalPositionForItemAtIndex:(NSUInteger)arg0 withSlowingFactor:(CGFloat)arg1 ;
-(CGFloat)_scrollableWidth;
-(NSUInteger)_effectiveIndexForIndex:(NSUInteger)arg0 ofItems:(id)arg1 ;
-(NSUInteger)_maximumTruncationIndexForTitle:(id)arg0 ;
-(id)_itemAtLocation:(struct CGPoint )arg0 ;
-(id)_itemForTouch:(id)arg0 ;
-(id)_requestReusableTabBarItemView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)itemAtPoint:(struct CGPoint )arg0 ;
-(id)targetItemForDropAtPoint:(struct CGPoint )arg0 ;
-(id)targetedDragPreviewForLiftingItem:(id)arg0 ;
-(id)viewForItem:(id)arg0 ;
-(struct CGRect )_frameForItemAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )_initialFrameForItemAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForItem:(id)arg0 ;
-(unsigned int)_edgeToAlignWithPreviewForItem:(id)arg0 ;
-(void)_activateItemIfNeeded:(id)arg0 ;
-(void)_didCompleteScrolling;
-(void)_didReceiveMemoryWarning:(id)arg0 ;
-(void)_hover:(id)arg0 ;
-(void)_itemDidPressCloseButton:(id)arg0 ;
-(void)_layoutContainers;
-(void)_layoutIndexes:(id)arg0 ofItems:(id)arg1 ;
-(void)_layoutItem:(id)arg0 atIndex:(NSUInteger)arg1 inRect:(struct CGRect )arg2 itemCount:(NSUInteger)arg3 beforeActiveItem:(BOOL)arg4 ;
-(void)_relinquishReusableTabBarItemView:(id)arg0 ;
-(void)_reorder:(id)arg0 ;
-(void)_scrollToItemIfNeeded:(id)arg0 ;
-(void)_scrollTowardItem:(id)arg0 byAmount:(CGFloat)arg1 ;
-(void)_tap:(id)arg0 ;
-(void)_toggleMediaStateMutedForItem:(id)arg0 ;
-(void)_updateBackground;
-(void)_updateReorderRecognizer;
-(void)activateItem:(id)arg0 ;
-(void)addInteraction:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)scrollToItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif