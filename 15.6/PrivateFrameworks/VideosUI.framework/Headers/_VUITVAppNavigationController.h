// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _VUITVAPPNAVIGATIONCONTROLLER_H
#define _VUITVAPPNAVIGATIONCONTROLLER_H

@class UINavigationController, UIViewController, NSString;
@protocol UINavigationControllerDelegate, VUITVAppRootViewController;



@interface _VUITVAppNavigationController : UINavigationController <UINavigationControllerDelegate, VUITVAppRootViewController>



@property (readonly, nonatomic) UINavigationController *currentNavigationController;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxNavControllerStackDepth; // ivar: _maxNavControllerStackDepth
@property (readonly) Class superclass;


-(id)initWithRootViewController:(id)arg0 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)vui_popToRootViewControllerAnimated:(BOOL)arg0 ;
-(id)vui_popViewControllerAnimated:(BOOL)arg0 ;
-(id)vui_rootViewController;
-(id)vui_topViewController;
-(id)vui_viewControllers;
-(id)vui_visibleViewController;
-(void)dismissAllModals:(id)arg0 ;
-(void)loadView;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)vui_pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)vui_setViewControllers:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif