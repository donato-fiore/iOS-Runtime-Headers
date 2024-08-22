// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSAVINGSACCOUNTVIEWCONTROLLER_H
#define PKSAVINGSACCOUNTVIEWCONTROLLER_H

@class UIViewController;


#import "_PKAccountSavingsViewController.h"
#import "PKDashboardMoreMenuFactory.h"

@interface PKSavingsAccountViewController : UIViewController {
    _PKAccountSavingsViewController *_viewController;
    PKDashboardMoreMenuFactory *_moreMenuFactory;
}




-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(id)initWithConfiguration:(id)arg0 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif