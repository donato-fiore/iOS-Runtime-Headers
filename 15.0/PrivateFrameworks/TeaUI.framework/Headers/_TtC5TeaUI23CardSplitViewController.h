// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI23CARDSPLITVIEWCONTROLLER_H
#define _TTC5TEAUI23CARDSPLITVIEWCONTROLLER_H

@class UISplitViewController, UIViewController, NSArray;



@interface _TtC5TeaUI23CardSplitViewController : UISplitViewController {
    ? primaryCardContainerController;
    ? commands;
    ? preservedItems;
    ? eventManager;
    ? splitViewFocus;
}


@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, copy) NSArray *viewControllers;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif