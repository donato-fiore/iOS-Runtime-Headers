// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVROOTMENUBARCONTROLLER_H
#define _TVROOTMENUBARCONTROLLER_H

@class UITabBarController, IKAppTabBar, NSArray, UINavigationController, UIViewController, NSString;
@protocol UITabBarControllerDelegate, TVAppRootViewController, IKAppTabBarController, IKAppNavigationController, _TVAppNavigationControllerDelegate;



@interface _TVRootMenuBarController : UITabBarController <UITabBarControllerDelegate, TVAppRootViewController, IKAppTabBarController>



@property (readonly, nonatomic) NSObject<IKAppNavigationController> *appNavigationController;
@property (retain, nonatomic) NSObject<_TVAppNavigationControllerDelegate> *appNavigationControllerDelegate; // ivar: _appNavigationControllerDelegate
@property (readonly, nonatomic) IKAppTabBar *appTabBar; // ivar: _appTabBar
@property (retain, nonatomic) NSArray *appTabBarItems; // ivar: _appTabBarItems
@property (readonly, nonatomic) UINavigationController *currentNavigationController;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger previousSelectedIndex; // ivar: _previousSelectedIndex
@property (readonly) Class superclass;


-(NSUInteger)numberOfTabsInTabBar:(id)arg0 ;
-(NSUInteger)tabBarControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)init;
-(id)selectedTabItemForTabBar:(id)arg0 ;
-(id)tabBar:(id)arg0 setTabItems:(id)arg1 ;
-(id)tabBar:(id)arg0 tabItemAtIndex:(NSUInteger)arg1 ;
-(id)transientTabItemForTabBar:(id)arg0 ;
-(void)dealloc;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)tabBar:(id)arg0 setSelectedTabItem:(id)arg1 ;
-(void)tabBarController:(id)arg0 didSelectViewController:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif