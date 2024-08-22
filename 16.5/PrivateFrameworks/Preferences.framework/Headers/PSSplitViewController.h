// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSPLITVIEWCONTROLLER_H
#define PSSPLITVIEWCONTROLLER_H

@class UISplitViewController;
@protocol PSSplitViewControllerNavigationDelegate;


#import "PSRootController.h"

@interface PSSplitViewController : UISplitViewController

@property (retain, nonatomic) PSRootController *containerNavigationController; // ivar: _containerNavigationController
@property (weak, nonatomic) NSObject<PSSplitViewControllerNavigationDelegate> *navigationDelegate; // ivar: _navigationDelegate


-(NSUInteger)supportedInterfaceOrientations;
-(id)categoryController;
-(id)childViewControllerForStatusBarStyle;
-(void)popRecursivelyToRootController;
-(void)setViewControllers:(id)arg0 ;
-(void)setupControllerForToolbar:(id)arg0 ;
-(void)showInitialViewController:(id)arg0 ;


@end


#endif