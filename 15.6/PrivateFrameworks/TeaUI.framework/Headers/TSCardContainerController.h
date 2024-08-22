// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCARDCONTAINERCONTROLLER_H
#define TSCARDCONTAINERCONTROLLER_H

@class UIViewController;



@interface TSCardContainerController : UIViewController {
    ? delegate;
    ? transitionManager;
    ? cardViewLayoutOptions;
    ? rootViewController;
    ? dimmingColor;
    ? dimmingAlpha;
    ? cardItemStack;
    ? dimmingView;
    ? eventManager;
}


@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;


@end


#endif