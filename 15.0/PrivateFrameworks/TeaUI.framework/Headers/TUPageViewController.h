// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUPAGEVIEWCONTROLLER_H
#define TUPAGEVIEWCONTROLLER_H

@class UIViewController, NSString, NSMutableArray;
@protocol UIScrollViewDelegate, TUPageViewControllerScrollViewAccessibilityDelegate, TUPageViewControllerDataSource, TUPageViewControllerDelegate, OS_dispatch_group;


#import "TUPageViewControllerScrollView.h"

@interface TUPageViewController : UIViewController <UIScrollViewDelegate, TUPageViewControllerScrollViewAccessibilityDelegate>



@property (retain, nonatomic) UIViewController *appearingViewController; // ivar: _appearingViewController
@property (nonatomic) BOOL cancelScrollViewDidScroll; // ivar: _cancelScrollViewDidScroll
@property (weak, nonatomic) NSObject<TUPageViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUPageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIViewController *disappearingViewController; // ivar: _disappearingViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *idleDispatchGroup; // ivar: _idleDispatchGroup
@property (readonly, nonatomic) BOOL isTransitioning; // ivar: _isTransitioning
@property (retain, nonatomic) UIViewController *managedForViewController; // ivar: _managedForViewController
@property (retain, nonatomic) UIViewController *nextViewController; // ivar: _nextViewController
@property (retain, nonatomic) UIViewController *originalVisibleViewController; // ivar: _originalVisibleViewController
@property (nonatomic) CGFloat pageGutter; // ivar: _pageGutter
@property (readonly, nonatomic) CGSize pageSize;
@property (nonatomic) BOOL pagingEnabled;
@property (retain, nonatomic) UIViewController *previousViewController; // ivar: _previousViewController
@property (retain, nonatomic) NSMutableArray *replayViewTransitions; // ivar: _replayViewTransitions
@property (readonly, nonatomic) TUPageViewControllerScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) BOOL scrollViewStartedScrolling; // ivar: _scrollViewStartedScrolling
@property (readonly, nonatomic) UIViewController *secondaryVisibleViewController; // ivar: _secondaryVisibleViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize transitioningSize; // ivar: _transitioningSize
@property (retain, nonatomic) UIViewController *visibleViewController; // ivar: _visibleViewController


-(BOOL)_assistiveTechnologyIsRunning;
-(BOOL)_shouldIgnoreDidScrollWithScrollView:(id)arg0 ;
-(BOOL)canSwitchToNextViewController;
-(BOOL)canSwitchToPreviousViewController;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)childViewControllerForStatusBarHidden;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGPoint )centerForIndex:(NSUInteger)arg0 ;
-(struct CGRect )calculateScrollViewFrameFromViewBounds:(struct CGRect )arg0 ;
-(void)_keyboardSwitchGoingRight:(BOOL)arg0 ;
-(void)accessibilityHandleRequestToGoBackForPageViewControllerScrollView:(id)arg0 ;
-(void)accessibilityHandleRequestToGoForewardForPageViewControllerScrollView:(id)arg0 ;
-(void)addViewController:(id)arg0 fromScroll:(BOOL)arg1 ;
-(void)callLastViewAppearanceMethods;
-(void)commonInit;
-(void)didReceiveBlueprintDidBeginItemDraggingEvent;
-(void)didReceiveBlueprintDidEndItemDraggingEvent;
-(void)handleScrollEnd;
-(void)handleScrollStart;
-(void)keyboardOrActionSwitchToNextViewController;
-(void)keyboardOrActionSwitchToPreviousViewController;
-(void)managePreviousAndNextViewController;
-(void)performWhenIdle:(id)arg0 ;
-(void)reindexNextViewControllers;
-(void)reindexPreviousViewControllers;
-(void)reindexViewControllers;
-(void)removeViewController:(id)arg0 ;
-(void)repositionPages;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)switchToNextViewController;
-(void)switchToPreviousViewController;
-(void)transitionToSize:(struct CGSize )arg0 ;
-(void)updateContentOffset;
-(void)updateContentSize;
-(void)updatePositionForViewController:(id)arg0 ;
-(void)updateScrollView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif