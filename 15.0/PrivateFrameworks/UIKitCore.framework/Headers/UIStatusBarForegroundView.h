// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTATUSBARFOREGROUNDVIEW_H
#define UISTATUSBARFOREGROUNDVIEW_H

@class NSMutableArray, NSString;
@protocol UIAccessibilityHUDGestureDelegate;


#import "UIView.h"
#import "UIStatusBarComposedData.h"
#import "UIAccessibilityHUDGestureManager.h"
#import "UIStatusBarForegroundStyleAttributes.h"
#import "UIStatusBar.h"

@interface UIStatusBarForegroundView : UIView <UIAccessibilityHUDGestureDelegate>

 {
    BOOL _usesVerticalLayout;
    BOOL _itemIsEnabled;
    UIStatusBarLayoutManager" _layoutManagers;
    int _ignoreDataLevel;
    NSMutableArray *_actionAnimationStack;
    UIStatusBarComposedData *_currentData;
    UIStatusBarComposedData *_pendedData;
    int _pendedActions;
    UIAccessibilityHUDGestureManager *_accessibilityHUDGestureManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // ivar: _foregroundStyle
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger idiom; // ivar: _idiom
@property (readonly, nonatomic) UIStatusBar *statusBar;
@property (readonly) Class superclass;


-(BOOL)_accessibilityHUDGestureManager:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)_tryToPlaceItem:(id)arg0 inItemArray:(id)arg1 layoutManager:(id)arg2 roomRemaining:(*CGFloat)arg3 allowSwap:(BOOL)arg4 swappedItem:(*id)arg5 ;
-(BOOL)ignoringData;
-(BOOL)isShowingBreadcrumb;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)rectIntersectsBatteryItem:(struct CGRect )arg0 ;
-(BOOL)rectIntersectsTimeItem:(struct CGRect )arg0 ;
-(BOOL)willChangeNavigationItemDisplayWithSystemNavigationAction:(id)arg0 ;
-(CGFloat)leftEdgePadding;
-(CGFloat)rightEdgePadding;
-(id)_accessibilityHUDGestureManager:(id)arg0 HUDItemForPoint:(struct CGPoint )arg1 ;
-(id)_computeVisibleItemsPreservingHistory:(BOOL)arg0 ;
-(id)_statusBarItemViewAtPoint:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 foregroundStyle:(id)arg1 usesVerticalLayout:(BOOL)arg2 ;
-(struct CGRect )frameForAllItemsInRegion:(int)arg0 ;
-(struct CGRect )frameForItemOfType:(int)arg0 ;
-(void)_accessibilityHUDGestureManager:(id)arg0 gestureLiftedAtPoint:(struct CGPoint )arg1 ;
-(void)_accessibilityHUDGestureManager:(id)arg0 showHUDItem:(id)arg1 ;
-(void)_animateUnlockCompletionBlock:(id)arg0 ;
-(void)_cleanUpAfterDataChange;
-(void)_cleanUpAfterSimpleReflow;
-(void)_dismissAccessibilityHUDForGestureManager:(id)arg0 ;
-(void)_reflowItemViewsCrossfadingCenterWithDuration:(CGFloat)arg0 timeWasEnabled:(BOOL)arg1 ;
-(void)_reflowItemViewsWithDuration:(CGFloat)arg0 preserveHistory:(BOOL)arg1 ;
-(void)animateUnlock;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)jiggleLockIcon;
-(void)reflowItemViews:(BOOL)arg0 ;
-(void)reflowItemViewsCrossfadingCenter:(id)arg0 duration:(CGFloat)arg1 ;
-(void)reflowItemViewsForgettingEitherSideItemHistory;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setPersistentAnimationsEnabled:(BOOL)arg0 ;
-(void)startIgnoringData;
-(void)stopIgnoringData:(BOOL)arg0 ;


@end


#endif