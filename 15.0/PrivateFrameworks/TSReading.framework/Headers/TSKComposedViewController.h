// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKCOMPOSEDVIEWCONTROLLER_H
#define TSKCOMPOSEDVIEWCONTROLLER_H

@class UIViewController;


#import "TSKPopoverBasedViewController.h"

@interface TSKComposedViewController : TSKPopoverBasedViewController

@property (readonly, nonatomic) UIViewController *composedViewController; // ivar: mComposedViewController


-(id)i_contentViewController;
-(id)initWithViewController:(id)arg0 ;
-(id)title;
-(void)dealloc;
-(void)p_loadChildView;
-(void)p_unloadChildView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif