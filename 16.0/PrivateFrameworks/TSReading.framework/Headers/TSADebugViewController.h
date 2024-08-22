// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSADEBUGVIEWCONTROLLER_H
#define TSADEBUGVIEWCONTROLLER_H

@class UIViewController;


#import "TSKPopoverBasedViewController.h"
#import "TSADebugTableViewController.h"

@interface TSADebugViewController : TSKPopoverBasedViewController {
    UIViewController *_delegate;
    TSADebugTableViewController *_debugTableViewController;
}




-(id)initWithDelegate:(id)arg0 ;
-(void)addItemWithTitle:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)dealloc;
-(void)hideIt:(id)arg0 ;
-(void)loadView;
-(void)showIt:(id)arg0 ;
-(void)toggleVisible:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif