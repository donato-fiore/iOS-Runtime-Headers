// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI21PROMISEVIEWCONTROLLER_H
#define _TTC5TEAUI21PROMISEVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC5TeaUI21PromiseViewController : UIViewController {
    ? identifier;
    ? promise;
    ? contentViewController;
    ? coverViewManager;
    ? navigationItemStyle;
}


@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif