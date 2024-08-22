// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUNAVIGATIONCONTAINERVIEWCONTROLLER_H
#define SUNAVIGATIONCONTAINERVIEWCONTROLLER_H

@class AMSBinaryPromise, UIViewController;


#import "SUViewController.h"

@interface SUNavigationContainerViewController : SUViewController

@property (retain, nonatomic) AMSBinaryPromise *appearancePromise; // ivar: _appearancePromise
@property (nonatomic) BOOL bridgedNavigation; // ivar: _bridgedNavigation
@property (readonly, nonatomic) UIViewController *embeddedViewController;
@property (copy, nonatomic) id *popHandler; // ivar: _popHandler
@property (nonatomic) BOOL shouldRunPopHandler; // ivar: _shouldRunPopHandler


-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)initWithChildViewController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif