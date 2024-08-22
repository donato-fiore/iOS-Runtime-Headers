// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUITABBARCONTROLLER_H
#define VUITABBARCONTROLLER_H

@class UITabBarController, UINavigationController, UIViewController, NSString, NSArray;
@protocol UITabBarControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, AMSUIMessageViewControllerDelegate, VUITVAppRootViewController, VUITabBarProtocol, VUITabBarChildViewControllerInteraction, VUITabBarControllerUpdatingDelegate;



@interface VUITabBarController : UITabBarController <UITabBarControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, AMSUIMessageViewControllerDelegate, VUITVAppRootViewController, VUITabBarProtocol, VUITabBarChildViewControllerInteraction>



@property (readonly, nonatomic) UINavigationController *currentNavigationController;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugGestureSetupDone; // ivar: _debugGestureSetupDone
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSetTabBarIndex; // ivar: _hasSetTabBarIndex
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *longPressHandler; // ivar: _longPressHandler
@property (nonatomic) NSUInteger previousSelectedIndex; // ivar: _previousSelectedIndex
@property (nonatomic) NSUInteger selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTabBarHidden) BOOL tabBarHidden;
@property (retain, nonatomic) NSArray *tabBarItems; // ivar: _tabBarItems
@property (weak, nonatomic) NSObject<VUITabBarControllerUpdatingDelegate> *updatingDelegate; // ivar: _updatingDelegate


+(BOOL)shouldIgnoreLastSelectedTabIndex;
+(id)_tabBarImageForResource:(id)arg0 ;
+(id)_tabBarImageForTabIdentifier:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSUInteger)indexForTabBarItemIdentifier:(id)arg0 ;
-(NSUInteger)tabBarControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)_tabBarChildViewControllerWithIdentifier:(id)arg0 documentRef:(id)arg1 supportsInAppBanner:(BOOL)arg2 isNonServerTab:(BOOL)arg3 title:(id)arg4 isSelectedTab:(BOOL)arg5 appContext:(id)arg6 iconResource:(id)arg7 contextData:(id)arg8 childItems:(id)arg9 ;
-(id)init;
-(id)viewControllerWithTabIdentifier:(id)arg0 ;
-(void)_addAndPresentBubbleTipIfAny:(id)arg0 ;
-(void)_handleDebugUIGesture:(id)arg0 ;
-(void)_handleSelectedViewControllerDidChange;
-(void)_saveLastSelectedAndScrollToTop:(id)arg0 selectedIndex:(NSUInteger)arg1 previousSelectedIndex:(NSUInteger)arg2 ;
-(void)_setSelectedViewController:(id)arg0 ;
-(void)_updateTabBarChildViewController:(id)arg0 withTitle:(id)arg1 ;
-(void)_updateTabbarChildViewController:(id)arg0 withTitle:(id)arg1 iconResource:(id)arg2 ;
-(void)configureDebugUIGestureWithHandler:(id)arg0 ;
-(void)dealloc;
-(void)messageViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)messageViewController:(id)arg0 didSelectActionWithDialogResult:(id)arg1 ;
-(void)messageViewController:(id)arg0 didUpdateSize:(struct CGSize )arg1 ;
-(void)removeAllChildViewControllers;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)setVuiSelectedIndex:(NSUInteger)arg0 ;
-(void)tabBarController:(id)arg0 didSelectViewController:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif