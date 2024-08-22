// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHROOTSIDEBARCONTROLLER_H
#define SBHROOTSIDEBARCONTROLLER_H

@class UIViewController, NSString, NSLayoutConstraint, _UILegibilitySettings, WGWidgetGroupViewController, NSMutableArray;
@protocol UIGestureRecognizerDelegate, SBHSidebarProvider, SBHSidebarProviderDelegate;


#import "SBHSidebarVisualConfiguration.h"

@interface SBHRootSidebarController : UIViewController <UIGestureRecognizerDelegate, SBHSidebarProvider>



@property (retain, nonatomic) UIViewController *avocadoViewController; // ivar: _avocadoViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHSidebarProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSLayoutConstraint *dockHeightConstraint; // ivar: _dockHeightConstraint
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger layoutInsetsIgnoredEdges; // ivar: _layoutInsetsIgnoredEdges
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration; // ivar: _sidebarVisualConfiguration
@property (readonly) Class superclass;
@property (retain, nonatomic) WGWidgetGroupViewController *widgetViewController; // ivar: _widgetViewController
@property (retain, nonatomic) NSMutableArray *widgetViewControllerConstraints; // ivar: _widgetViewControllerConstraints


-(BOOL)_canShowWhileLocked;
-(void)_addEditButtonForWidgetGroupViewController:(id)arg0 ;
-(void)_configureAvocadoViewController;
-(void)_configureLayoutMargins;
-(void)_configureWidgetViewController;
-(void)_setupConstraintsForViewController:(id)arg0 ;
-(void)_updateDockHeightConstraint;
-(void)setEditingIcons:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif