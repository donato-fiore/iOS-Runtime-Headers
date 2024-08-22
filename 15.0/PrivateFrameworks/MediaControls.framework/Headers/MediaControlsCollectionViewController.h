// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSCOLLECTIONVIEWCONTROLLER_H
#define MEDIACONTROLSCOLLECTIONVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, UIViewController<MediaControlsCollectionItemViewController>, NSMutableSet, NSMutableArray, NSString, UIScrollView, NSArray, NSIndexSet;
@protocol UIScrollViewDelegate, UIGestureRecognizerDelegate, MediaControlsCollectionViewDataSource, MediaControlsCollectionViewDelegate;


#import "MediaControlsCollectionViewCountData.h"
#import "_MediaControlsTapHoldGestureRecognizer.h"

@interface MediaControlsCollectionViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>

 {
    NSMutableDictionary *_activeViewControllers;
    UIViewController<MediaControlsCollectionItemViewController> *_inactiveSelectedViewController;
    NSMutableSet *_inactiveViewControllers;
    NSMutableArray *_pendingUpdates;
    UIEdgeInsets _controlCenterEdgeInsets;
    CGSize _lastKnownEnvironmentSize;
    NSInteger _animatedSelectionCount;
    NSInteger _appearanceTransitionCount;
    BOOL _shouldDisableAutoReaping;
    BOOL _shouldIgnoreScrollNotifications;
    BOOL _isAnimatingSelection;
    BOOL _isPerformingBatchUpdates;
    BOOL _needsReloadData;
    MediaControlsCollectionViewCountData *_countData;
    NSInteger _highlightedItemIndex;
    BOOL _appeared;
}


@property (weak, nonatomic) NSObject<MediaControlsCollectionViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MediaControlsCollectionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalBlock; // ivar: _dismissalBlock
@property (nonatomic) NSInteger displayMode; // ivar: _displayMode
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat preferredItemHeight; // ivar: _preferredItemHeight
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) UIEdgeInsets scrollViewInsets; // ivar: _scrollViewInsets
@property (nonatomic) NSInteger selectedItemIndex; // ivar: _selectedItemIndex
@property (readonly) Class superclass;
@property (retain, nonatomic) _MediaControlsTapHoldGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (readonly, nonatomic) NSArray *visibleBottomViewControllers;
@property (readonly, nonatomic) NSIndexSet *visibleIndexes;
@property (readonly, nonatomic) NSArray *visibleTopViewControllers;
@property (readonly, nonatomic) NSArray *visibleViewControllers;


+(id)alphaAnimatorWithAnimations:(id)arg0 ;
+(id)frameAnimator;
-(BOOL)_canPerformBatchUpdates;
-(BOOL)_isScrollViewAnimatingScroll;
-(BOOL)_wantsTapGestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(CGFloat)_backgroundCornerRadius;
-(CGFloat)_preferredSelectedItemHeight;
-(CGFloat)_regularItemHeight;
-(CGFloat)_selectedItemHeightInSize:(struct CGSize )arg0 ;
-(CGFloat)_selectedItemHeightInSize:(struct CGSize )arg0 shouldIgnoreInsets:(BOOL)arg1 ;
-(CGFloat)_totalHeight;
-(CGFloat)_verticalSpacing;
-(CGFloat)preferredItemHeightGivenWidth:(CGFloat)arg0 ;
-(NSInteger)_closestItemAtPoint:(struct CGPoint )arg0 ;
-(NSInteger)itemAtPoint:(struct CGPoint )arg0 ;
-(id)_indexesOfItemsInRect:(struct CGRect )arg0 ;
-(id)_insertViewControllerForIndex:(NSInteger)arg0 ;
-(id)dequeueReusableViewControllerForItemAtIndex:(NSInteger)arg0 ;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)viewControllerForItemAtIndex:(NSInteger)arg0 ;
-(id)viewControllerForItemAtPoint:(struct CGPoint )arg0 ;
-(id)viewControllerForSelectedItem;
-(struct CGRect )_frameForViewAtIndex:(NSInteger)arg0 ;
-(struct CGRect )_frameForViewAtIndex:(NSInteger)arg0 displayMode:(NSInteger)arg1 size:(struct CGSize )arg2 ;
-(struct CGRect )_frameForViewAtIndex:(NSInteger)arg0 size:(struct CGSize )arg1 ;
-(struct _NSRange )_rangeOfItemsInRect:(struct CGRect )arg0 ;
-(void)_adjustForEnvironmentChangeIfNeededWithSize:(struct CGSize )arg0 transitionCoordinator:(id)arg1 ;
-(void)_adjustForEnvironmentChangeWithSize:(struct CGSize )arg0 transitionCoordinator:(id)arg1 ;
-(void)_beginAppearanceTransitionForChildViewControllers:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_beginAppearanceTransitionIfNeeded:(BOOL)arg0 forChildViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_commonInit;
-(void)_dequeueAndPerformBatchUpdatesIfNeeded;
-(void)_endAppearanceTransitionForChildViewControllerIfNeeded:(id)arg0 ;
-(void)_endAppearanceTransitionForChildViewControllers;
-(void)_enumerateActiveViewControllers:(id)arg0 ;
-(void)_handleScrollViewTap:(id)arg0 ;
-(void)_populateViewsInFrame:(struct CGRect )arg0 ;
-(void)_reapActiveViews;
-(void)_reapViewAtIndex:(NSInteger)arg0 ;
-(void)_reloadDataIfNeeded;
-(void)_removeInactiveViewControllersFromHierarchy;
-(void)_removeViewController:(id)arg0 ;
-(void)_scrollToSelectedItemAnimated:(BOOL)arg0 ;
-(void)_setFrame:(struct CGRect )arg0 forVisibleViewAtIndex:(NSInteger)arg1 ;
-(void)_setHighlighted:(BOOL)arg0 forViewController:(id)arg1 ;
-(void)_setHighlighted:(BOOL)arg0 forViewControllerAtIndex:(NSInteger)arg1 ;
-(void)_tileViews;
-(void)_transitionToDisplayMode:(NSInteger)arg0 usingTransitionCoordinator:(id)arg1 assumingSize:(struct CGSize )arg2 ;
-(void)_transitionToVisible:(BOOL)arg0 ;
-(void)_transitionTopAndBottomViewControllersToVisible:(BOOL)arg0 completion:(id)arg1 ;
-(void)_updateContentSize;
-(void)_updateFrameForViewController:(id)arg0 atIndex:(NSInteger)arg1 withCoordinator:(id)arg2 assumingSize:(struct CGSize )arg3 ;
-(void)_updateFramesForActiveViewControllersWithCoordinator:(id)arg0 assumingSize:(struct CGSize )arg1 ;
-(void)deleteItemAtIndex:(NSInteger)arg0 ;
-(void)deleteItemsAtIndexes:(id)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)insertItemAtIndex:(NSInteger)arg0 ;
-(void)insertItemsAtIndexes:(id)arg0 ;
-(void)moveItemAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)performBatchUpdates:(id)arg0 ;
-(void)reloadData;
-(void)reloadItemAtIndex:(NSInteger)arg0 ;
-(void)reloadItemsAtIndexes:(id)arg0 ;
-(void)scrollToSelectedItemAnimated:(BOOL)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)updateContentInsets;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif