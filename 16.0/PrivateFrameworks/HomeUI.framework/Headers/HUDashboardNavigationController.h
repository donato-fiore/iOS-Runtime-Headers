// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDASHBOARDNAVIGATIONCONTROLLER_H
#define HUDASHBOARDNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString, UINavigationBar;
@protocol HUDashboardNavigationBarDelegate, HUVendsDashboardNavigator, HUDashboardFilterBarDelegate, HUEditActionDelegate, HUDashboardNavigator;


#import "HUDashboardFilterBarController.h"

@interface HUDashboardNavigationController : UINavigationController <HUDashboardNavigationBarDelegate, HUVendsDashboardNavigator, HUDashboardFilterBarDelegate, HUEditActionDelegate>



@property (readonly, nonatomic) NSObject<HUDashboardNavigator> *dashboardNavigator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UINavigationBar *displayedNavigationBar; // ivar: _displayedNavigationBar
@property (readonly, nonatomic) NSString *editActionTitle;
@property (readonly, nonatomic) NSString *editActionTitleLocalizationKey;
@property (readonly, nonatomic) HUDashboardFilterBarController *filterBarController; // ivar: _filterBarController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEditing;


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldDisableAnimationForViewController:(id)arg0 ;
-(BOOL)navigationBar:(id)arg0 shouldPopItem:(id)arg1 ;
-(BOOL)navigationBar:(id)arg0 shouldPushItem:(id)arg1 ;
-(BOOL)popToBottomNavigationControllerWithCustomAnimation;
-(NSInteger)preferredStatusBarStyle;
-(id)_editActionDelegate;
-(id)_loadWallpaperForViewController:(id)arg0 ;
-(id)_targetNavigationBarForUISplitViewControllerSidebarButton;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)splitViewController;
-(void)_customAnimationForHomeVCToDetailVC:(id)arg0 detailVCWallpaper:(id)arg1 ;
-(void)_customAnimationForPoppingBackToHomeVCWithHomeVCWallpaper:(id)arg0 ;
-(void)dashboardFilterBarController:(id)arg0 didUpdatePreferredHeight:(CGFloat)arg1 ;
-(void)endEditing;
-(void)navigationBar:(id)arg0 didChangeBackgroundVisibility:(BOOL)arg1 ;
-(void)navigationBar:(id)arg0 didPushItem:(id)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)sendContextMenuMetricsWithTitleLocalizationKey:(id)arg0 ;
-(void)startEditing;
-(void)viewLayoutMarginsDidChange;


@end


#endif