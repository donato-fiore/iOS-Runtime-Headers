// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPAPPREQUIREDVIEWCONTROLLER_H
#define PKPAYMENTSETUPAPPREQUIREDVIEWCONTROLLER_H

@class PKPaymentSetupProduct;
@protocol PKPaymentSetupViewControllerDelegate;


#import "PKPaymentSetupTableViewController.h"
#import "PKLinkedApplication.h"
#import "PKTableHeaderView.h"

@interface PKPaymentSetupAppRequiredViewController : PKPaymentSetupTableViewController {
    PKPaymentSetupProduct *_product;
    PKLinkedApplication *_linkedApplication;
    PKTableHeaderView *_headerView;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    BOOL _isBridge;
    BOOL _isBuddy;
}




-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_subtitle;
-(id)initWithSetupContext:(NSInteger)arg0 setupDelegate:(id)arg1 product:(id)arg2 linkedApplication:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_doneButtonTapped:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif