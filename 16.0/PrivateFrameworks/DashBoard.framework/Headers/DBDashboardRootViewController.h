// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBDASHBOARDROOTVIEWCONTROLLER_H
#define DBDASHBOARDROOTVIEWCONTROLLER_H

@class UIViewController, UIView, CPUIPassthroughView, UIViewController<DBDashboardWorkspaceEntityPresenting>, NSString, NSArray, CARObserverHashTable;
@protocol BSInvalidatable, DBEventHandling, DBEnvironment, CRSIconLayoutVehicleDataProviding;


#import "DBAppDockViewController.h"
#import "_TtC9DashBoard22DBDashboardDimmingView.h"
#import "DBDashboardHomeViewController.h"
#import "DBDashboardLayoutEngine.h"

@interface DBDashboardRootViewController : UIViewController <BSInvalidatable, DBEventHandling>



@property (weak, nonatomic) DBAppDockViewController *appDockViewController; // ivar: _appDockViewController
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *baseContainerView; // ivar: _baseContainerView
@property (nonatomic) CGFloat contentCornerRadius; // ivar: _contentCornerRadius
@property (retain, nonatomic) CPUIPassthroughView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIViewController<DBDashboardWorkspaceEntityPresenting> *currentBaseViewController; // ivar: _currentBaseViewController
@property (retain, nonatomic) UIViewController<DBDashboardWorkspaceEntityPresenting> *currentStackedViewController; // ivar: _currentStackedViewController
@property (nonatomic) NSUInteger currentViewState; // ivar: _currentViewState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _TtC9DashBoard22DBDashboardDimmingView *dimmingView; // ivar: _dimmingView
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<BSInvalidatable> *homeScreenElementAssertion; // ivar: _homeScreenElementAssertion
@property (retain, nonatomic) NSArray *homeViewConstraints; // ivar: _homeViewConstraints
@property (readonly, nonatomic) DBDashboardHomeViewController *homeViewController; // ivar: _homeViewController
@property (readonly, nonatomic) NSObject<CRSIconLayoutVehicleDataProviding> *iconLayoutDataProvider;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) DBDashboardLayoutEngine *layoutEngine; // ivar: _layoutEngine
@property (retain, nonatomic) UIView *stackedContainerView; // ivar: _stackedContainerView
@property (readonly) Class superclass;
@property (retain, nonatomic) CARObserverHashTable *viewStateObservers; // ivar: _viewStateObservers


-(id)initWithEnvironment:(id)arg0 layoutEngine:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)_dismissBaseViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_dismissStackedViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_dismissViewController:(id)arg0 andPresentBaseViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_presentBaseViewController:(id)arg0 animated:(BOOL)arg1 launchSource:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_presentStackedViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updateHomeConstraints;
-(void)_updateHomeScreenLayoutElementIfNeeded;
-(void)addViewStateObserver:(id)arg0 ;
-(void)dismissBaseViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissStackedViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)handleEvent:(id)arg0 ;
-(void)invalidate;
-(void)loadView;
-(void)presentBaseViewController:(id)arg0 animated:(BOOL)arg1 launchSource:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)presentStackedViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeViewStateObserver:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAppearanceForWallpaper;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif