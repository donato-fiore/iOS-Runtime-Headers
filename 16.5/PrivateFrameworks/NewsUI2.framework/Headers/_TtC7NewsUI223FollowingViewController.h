// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI223FOLLOWINGVIEWCONTROLLER_H
#define _TTC7NEWSUI223FOLLOWINGVIEWCONTROLLER_H

@class TUViewController;



@interface _TtC7NewsUI223FollowingViewController : TUViewController {
    ? searchCoordinator;
    ? styler;
    ? eventHandler;
    ? blueprintViewController;
    ? blueprintSelectionProvider;
    ? purchaseController;
    ? bundleSubscriptionManager;
    ? previousSelectedIndexPath;
    ? commands;
    ? newsActivityManager;
    ? $__lazy_storage_$_sidebarBarButtonItem;
}




-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)contentScrollView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)delete:(id)arg0 ;
-(void)handleSidebarWithSender:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif