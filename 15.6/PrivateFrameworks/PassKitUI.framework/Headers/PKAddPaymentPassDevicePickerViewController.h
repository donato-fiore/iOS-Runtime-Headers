// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKADDPAYMENTPASSDEVICEPICKERVIEWCONTROLLER_H
#define PKADDPAYMENTPASSDEVICEPICKERVIEWCONTROLLER_H

@class UITableViewController, NSArray, PKAddPaymentPassRequestConfiguration;
@protocol PKAddPaymentPassDevicePickerDelegate;


#import "PKTableHeaderView.h"

@interface PKAddPaymentPassDevicePickerViewController : UITableViewController {
    PKTableHeaderView *_headerView;
    NSArray *_webServices;
    PKAddPaymentPassRequestConfiguration *_configuration;
    BOOL _viewHasAppeared;
    BOOL _sentViewHasAppearedEvent;
}


@property (weak, nonatomic) NSObject<PKAddPaymentPassDevicePickerDelegate> *delegate; // ivar: _delegate


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPaymentWebServices:(id)arg0 configuration:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)noteNavigationUserInterfaceDidDisappear;
-(void)reloadContentFromWebServices;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif