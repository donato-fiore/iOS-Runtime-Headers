// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI227DOCKCONTAINERVIEWCONTROLLER_H
#define _TTC7NEWSUI227DOCKCONTAINERVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC7NewsUI227DockContainerViewController : UIViewController {
    ? _rootViewController;
    ? lazyDockableViewController;
    ? presentationMode;
    ? dockView;
    ? $__lazy_storage_$_longPressGestureRecognizer;
    ? $__lazy_storage_$_dockHeightConstraint;
    ? $__lazy_storage_$_dockedView;
    ? $__lazy_storage_$_expandedViewController;
}


@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) BOOL shouldAutorotate;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dockedViewLongPressed;
-(void)dockedViewTapped;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)showDetailViewController:(id)arg0 sender:(id)arg1 ;
-(void)showViewController:(id)arg0 sender:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif