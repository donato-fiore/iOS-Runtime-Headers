// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPDEVICEPICKERVIEWCONTROLLER_H
#define CDPDEVICEPICKERVIEWCONTROLLER_H

@class NSArray, UIButton, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, CDPDevicePickerDelegate;


#import "CDPTableViewController.h"

@interface CDPDevicePickerViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate>

 {
    NSArray *_escapeOffers;
    id<CDPDevicePickerDelegate> *_delegate;
    UIButton *_remoteApprovalButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)heightForFooterInTableView:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)escapeOffers;
-(id)initWithDevices:(id)arg0 delegate:(id)arg1 ;
-(id)initWithDevices:(id)arg0 delegate:(id)arg1 tableViewStyle:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)viewForFooterInTableView:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif