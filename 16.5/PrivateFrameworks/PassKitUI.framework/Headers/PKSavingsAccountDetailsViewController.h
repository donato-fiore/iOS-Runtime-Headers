// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSAVINGSACCOUNTDETAILSVIEWCONTROLLER_H
#define PKSAVINGSACCOUNTDETAILSVIEWCONTROLLER_H

@class UIViewController, UIImageView;


#import "_PKAccountSavingsDetailsViewController.h"
#import "PKAnimatedNavigationBarTitleView.h"

@interface PKSavingsAccountDetailsViewController : UIViewController {
    _PKAccountSavingsDetailsViewController *_viewController;
    PKAnimatedNavigationBarTitleView *_titleIconView;
    UIImageView *_titleIcon;
}




-(id)initWithConfiguration:(id)arg0 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif