// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCPAYLOADDETAILSVIEWCONTROLLER_H
#define DMCPAYLOADDETAILSVIEWCONTROLLER_H

@class NSArray, MCPayload;


#import "DMCProfileTableViewController.h"
#import "DMCPayloadViewModel.h"

@interface DMCPayloadDetailsViewController : DMCProfileTableViewController

@property (retain, nonatomic) NSArray *keyValueSections; // ivar: _keyValueSections
@property (retain, nonatomic) MCPayload *payload; // ivar: _payload
@property (retain, nonatomic) DMCPayloadViewModel *payloadViewModel; // ivar: _payloadViewModel


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_keyValueSectionForSection:(NSInteger)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithPayloadViewModel:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_setTitle:(id)arg0 keyValueSections:(id)arg1 ;
-(void)_setup;


@end


#endif