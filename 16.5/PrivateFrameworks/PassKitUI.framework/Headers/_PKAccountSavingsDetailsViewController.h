// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PKACCOUNTSAVINGSDETAILSVIEWCONTROLLER_H
#define _PKACCOUNTSAVINGSDETAILSVIEWCONTROLLER_H

@class UIViewController;



@interface _PKAccountSavingsDetailsViewController : UIViewController {
    ? detailsHostingVC;
    ? configuration;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 setNavigationIconVisible:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif