// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBTODAYVIEWCONTROLLER_H
#define DBTODAYVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, NSLayoutConstraint, _UILegibilitySettings, NSMutableSet;
@protocol DBEnvironmentConfigurationObserving, DBLayoutHelperViewDelegate, DBNavigationStateObserving, BSInvalidatable, DBProcessMonitorObserving, SBHLegibility, DBEnvironment;


#import "DBTodayViewSynchronizedAnimationManager.h"
#import "DBLayoutHelperView.h"
#import "DBMapsNavigationWidgetViewController.h"
#import "DBWidgetContainerViewController.h"

@interface DBTodayViewController : UIViewController <DBEnvironmentConfigurationObserving, DBLayoutHelperViewDelegate, DBNavigationStateObserving, BSInvalidatable, DBProcessMonitorObserving, SBHLegibility>



@property (retain, nonatomic) DBTodayViewSynchronizedAnimationManager *animationManager; // ivar: _animationManager
@property (retain, nonatomic) NSArray *currentConstraints; // ivar: _currentConstraints
@property (nonatomic) NSUInteger currentLayoutType; // ivar: _currentLayoutType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *landscapeConstraints; // ivar: _landscapeConstraints
@property (retain, nonatomic) NSLayoutConstraint *landscapeContainerWidthConstraint; // ivar: _landscapeContainerWidthConstraint
@property (retain, nonatomic) DBLayoutHelperView *layoutHelperView; // ivar: _layoutHelperView
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: legibilitySettings
@property (retain, nonatomic) DBMapsNavigationWidgetViewController *mapsNavigationWidgetController; // ivar: _mapsNavigationWidgetController
@property (retain, nonatomic) NSString *navigationWidgetBundleIdentifier; // ivar: _navigationWidgetBundleIdentifier
@property (retain, nonatomic) NSArray *portraitConstraints; // ivar: _portraitConstraints
@property (nonatomic) NSUInteger preferredFocusHeading; // ivar: _preferredFocusHeading
@property (retain, nonatomic) NSMutableSet *sceneWidgetsDisabledRequesters; // ivar: _sceneWidgetsDisabledRequesters
@property (retain, nonatomic) NSArray *squareConstraints; // ivar: _squareConstraints
@property (retain, nonatomic) NSLayoutConstraint *squareContainerHeightConstraint; // ivar: _squareContainerHeightConstraint
@property (readonly) Class superclass;
@property (retain, nonatomic) DBWidgetContainerViewController *widgetContainerViewController; // ivar: _widgetContainerViewController


+(BOOL)isEnabledAndSupportedForIconProvider:(id)arg0 ;
-(NSUInteger)_layout;
-(id)initWithEnvironment:(id)arg0 ;
-(id)linearFocusItems;
-(id)preferredFocusEnvironments;
-(void)_updateNavigationWidgetsForIdentifier:(id)arg0 ;
-(void)didChangeLayout:(id)arg0 ;
-(void)invalidate;
-(void)navigationStateProvider:(id)arg0 frontmostIdentifierDidChange:(id)arg1 ;
-(void)navigationStateProvider:(id)arg0 navigatingIdentifiersDidChange:(id)arg1 ;
-(void)processMonitor:(id)arg0 didHandleDeathOfBundleIdentifier:(id)arg1 ;
-(void)processMonitor:(id)arg0 shouldHandleDeathOfBundleIdentifier:(id)arg1 isCrash:(BOOL)arg2 ;
-(void)reloadConstraints;
-(void)setActive:(BOOL)arg0 ;
-(void)setForeground:(BOOL)arg0 ;
-(void)setSceneWidgetsDisabled:(BOOL)arg0 forRequester:(id)arg1 ;
-(void)setSmartWidgetCanChangeVisibilityDisabled:(BOOL)arg0 forRequester:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif