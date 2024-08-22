// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTNAVIGATIONCONTROLLER_H
#define SUSCRIPTNAVIGATIONCONTROLLER_H

@class UINavigationController;


#import "SUScriptViewController.h"
#import "SUScriptNavigationBar.h"

@interface SUScriptNavigationController : SUScriptViewController {
    UINavigationController *_navController;
}


@property (readonly) SUScriptNavigationBar *navigationBar;
@property BOOL navigationBarHidden;
@property (copy) id *toolbarHidden;
@property (readonly) SUScriptViewController *topViewController;
@property (retain) id *viewControllers;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_copyNativeViewControllersFromScriptViewControllers:(id)arg0 ;
-(id)_filteredViewControllers;
-(id)_navigationController;
-(id)attributeKeys;
-(id)initWithRootScriptViewController:(id)arg0 clientInterface:(id)arg1 ;
-(id)newNativeViewController;
-(id)scriptAttributeKeys;
-(void)_popToRootViewControllerAnimated:(BOOL)arg0 ;
-(void)_popViewControllerAnimated:(BOOL)arg0 ;
-(void)_pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)didPerformBatchedInvocations;
-(void)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(void)popViewControllerAnimated:(BOOL)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)willPerformBatchedInvocations;


@end


#endif