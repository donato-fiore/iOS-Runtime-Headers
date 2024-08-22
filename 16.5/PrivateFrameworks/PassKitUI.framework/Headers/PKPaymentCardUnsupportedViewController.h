// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTCARDUNSUPPORTEDVIEWCONTROLLER_H
#define PKPAYMENTCARDUNSUPPORTEDVIEWCONTROLLER_H

@class PKPaymentSetupProduct;
@protocol PKPaymentSetupViewControllerDelegate;


#import "PKPaymentSetupTableViewController.h"
#import "PKTableHeaderView.h"
#import "PKLinkedAppView.h"

@interface PKPaymentCardUnsupportedViewController : PKPaymentSetupTableViewController {
    PKTableHeaderView *_headerView;
    PKLinkedAppView *_appViewCell;
}


@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)edgesForExtendedLayout;
-(id)initWithUnsupportedProduct:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_done:(id)arg0 ;
-(void)_updateViewsWithProduct:(id)arg0 ;
-(void)dealloc;
-(void)viewDidLoad;


@end


#endif