// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI16TABBARCONTROLLER_H
#define _TTC9SEYMOURUI16TABBARCONTROLLER_H

@class UITabBarController;



@interface _TtC9SeymourUI16TabBarController : UITabBarController {
    ? paletteView;
    ? miniPlayerViewController;
    ? miniPlayerHostPresenter;
    ? eventHub;
    ? subscriptionToken;
}


@property (nonatomic, readonly) NSInteger preferredInterfaceOrientationForPresentation;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif