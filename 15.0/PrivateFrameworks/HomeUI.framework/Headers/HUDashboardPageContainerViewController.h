// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDASHBOARDPAGECONTAINERVIEWCONTROLLER_H
#define HUDASHBOARDPAGECONTAINERVIEWCONTROLLER_H

@class UIViewController, NSIndexPath, NSString, NAFuture, CAGradientLayer, UIPageViewController, UINavigationController;
@protocol HFItemManagerDelegate, HUPresentationDelegate, HUDashboardViewControllerDelegate, HUDashboardListViewControllerDelegate, HURoomListViewControllerDelegate, HURoomSettingsDelegate, HUEditRoomViewControllerPresentationDelegate, HUQuickControlPresentationHost, UIPageViewControllerDelegate, UIPageViewControllerDataSource, UIViewControllerTransitioningDelegate, HUDashboardNavigationViewDelegate, HUPreloadableViewController, HUDashboardNavigator, HULockAuthorizationDelegate, HUQuickControlPresentationDelegate, HOSideBarSelectionChangeDelegate;


#import "HUDashboardListViewController.h"
#import "HUDashboardNavigationView.h"
#import "HUDashboardPageItemManager.h"
#import "HUGridLayoutOptions.h"
#import "HUDashboardContext.h"

@interface HUDashboardPageContainerViewController : UIViewController <HFItemManagerDelegate, HUPresentationDelegate, HUDashboardViewControllerDelegate, HUDashboardListViewControllerDelegate, HURoomListViewControllerDelegate, HURoomSettingsDelegate, HUEditRoomViewControllerPresentationDelegate, HUQuickControlPresentationHost, UIPageViewControllerDelegate, UIPageViewControllerDataSource, UIViewControllerTransitioningDelegate, HUDashboardNavigationViewDelegate, HUPreloadableViewController>



@property (retain, nonatomic) NSIndexPath *currentDashboardIndexPath; // ivar: _currentDashboardIndexPath
@property (nonatomic, getter=isDashboardListPresented) BOOL dashboardListPresented; // ivar: _dashboardListPresented
@property (retain, nonatomic) HUDashboardListViewController *dashboardListViewController; // ivar: _dashboardListViewController
@property (retain, nonatomic) HUDashboardNavigationView *dashboardNavigationView; // ivar: _dashboardNavigationView
@property (weak, nonatomic) NSObject<HUDashboardNavigator> *dashboardNavigator; // ivar: dashboardNavigator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NAFuture *firstLayoutFuture; // ivar: _firstLayoutFuture
@property (retain, nonatomic) CAGradientLayer *gradientLayer; // ivar: _gradientLayer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUDashboardPageItemManager *itemManager; // ivar: _itemManager
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (weak, nonatomic) NSObject<HULockAuthorizationDelegate> *lockAuthorizationDelegate; // ivar: _lockAuthorizationDelegate
@property (retain, nonatomic) HUDashboardContext *newlyCreatedDashboardContext; // ivar: _newlyCreatedDashboardContext
@property (retain, nonatomic) UIPageViewController *pageViewController; // ivar: _pageViewController
@property (retain, nonatomic) NAFuture *pageViewControllerReadyFuture; // ivar: _pageViewControllerReadyFuture
@property (retain, nonatomic) NAFuture *preloadInitialDashboardViewControllerFuture; // ivar: _preloadInitialDashboardViewControllerFuture
@property (weak, nonatomic) NSObject<HUQuickControlPresentationDelegate> *quickControlPresentationDelegate; // ivar: _quickControlPresentationDelegate
@property (weak, nonatomic) NSObject<HOSideBarSelectionChangeDelegate> *sideBarSelectionChangeDelegate; // ivar: _sideBarSelectionChangeDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSIndexPath *targetDashboardIndexPath; // ivar: _targetDashboardIndexPath
@property (nonatomic) BOOL visibilityUpdatesEnabled; // ivar: _visibilityUpdatesEnabled
@property (weak, nonatomic) UINavigationController *weakInitialDashboardNavigationController; // ivar: _weakInitialDashboardNavigationController


+(NSUInteger)updateMode;
-(BOOL)_canShowWhileLocked;
-(NSInteger)preferredStatusBarStyle;
-(id)_dashboardContextForItemAtIndexPath:(id)arg0 ;
-(id)_dashboardNavigationControllerForDashboardOffsetFromViewController:(id)arg0 offset:(NSInteger)arg1 outIndexPath:(*id)arg2 ;
-(id)_dashboardNavigationControllerForItemAtIndexPath:(id)arg0 ;
-(id)_indexPathForDashboard:(id)arg0 ;
-(id)_navigateToSelectedDashboard:(id)arg0 animated:(BOOL)arg1 ;
-(id)_newCurrentDashboardIndexPath;
-(id)_presentRoomEditorForRoom:(id)arg0 ;
-(id)_showDashboard:(id)arg0 animated:(BOOL)arg1 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)authorizeIfLockedForViewController:(id)arg0 ;
-(id)childViewControllerForStatusBarStyle;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(id)init;
-(id)initWithLockAuthorizationDelegate:(id)arg0 quickControlPresentationDelegate:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(id)presentRoomSettingsForRoom:(id)arg0 ;
-(id)showDashboardEditorForLastSelectedRoom;
-(id)showFavorites;
-(id)showRoom:(id)arg0 ;
-(id)visibleDashboardViewController;
-(struct CATransform3D )scaleInTransform;
-(struct CATransform3D )scaleOutTransform;
-(void)_animateDashboardListView;
-(void)_animateVisibleCellsInCollectionView:(id)arg0 presenting:(BOOL)arg1 ;
-(void)_animateVisibleCellsInTableView:(id)arg0 presenting:(BOOL)arg1 ;
-(void)_cleanUpDashboardListViewControllerIfNeeded;
-(void)_fadeAndScaleView:(id)arg0 presenting:(BOOL)arg1 delay:(CGFloat)arg2 ;
-(void)_fadeView:(id)arg0 presenting:(BOOL)arg1 delay:(CGFloat)arg2 ;
-(void)_launchHomeApp:(id)arg0 ;
-(void)_navigateToDashboardNavigationController:(id)arg0 indexPath:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_presentDashboardListFromContext:(id)arg0 fromView:(id)arg1 ;
-(void)_setupInitialDashboardViewController;
-(void)_updateDashboardNavigationView;
-(void)childViewController:(id)arg0 didEndQuickControlsPresentation:(id)arg1 ;
-(void)childViewController:(id)arg0 willBeginQuickControlsPresentation:(id)arg1 ;
-(void)dashboardListViewController:(id)arg0 wantsToShowDashboardContext:(id)arg1 ;
-(void)dashboardListViewControllerDidFinish:(id)arg0 ;
-(void)dashboardNavigationView:(id)arg0 didTapHomeAppButton:(id)arg1 ;
-(void)dashboardNavigationView:(id)arg0 didTapLargeTitleButton:(id)arg1 ;
-(void)editRoomViewControllerDidFinish:(id)arg0 withNewRoom:(id)arg1 ;
-(void)getTransitionSubviewFramesWithCompletion:(id)arg0 ;
-(void)itemManager:(id)arg0 didChangeSourceItem:(id)arg1 ;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)itemManager:(id)arg0 performUpdateRequest:(id)arg1 ;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 willTransitionToViewControllers:(id)arg1 ;
-(void)presentDashboard:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentDashboardEditorForDashboardViewController:(id)arg0 ;
-(void)presentDashboardListPickerForDashboardViewController:(id)arg0 fromView:(id)arg1 ;
-(void)recursivelyDisableItemUpdates:(BOOL)arg0 withReason:(id)arg1 ;
-(void)roomListViewController:(id)arg0 wantsToShowRoom:(id)arg1 ;
-(void)roomListViewControllerDidFinish:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willBeginTransition:(BOOL)arg0 forCompactModule:(BOOL)arg1 ;
-(void)willFinishTransition:(BOOL)arg0 forCompactModule:(BOOL)arg1 ;


@end


#endif