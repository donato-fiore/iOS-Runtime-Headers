// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCPAYLOADDETAILSVIEWCONTROLLER_H
#define MCPAYLOADDETAILSVIEWCONTROLLER_H

@class NSArray, MCPayload;


#import "MCUITableViewController.h"
#import "MCPayloadInfo.h"

@interface MCPayloadDetailsViewController : MCUITableViewController

@property (retain, nonatomic) NSArray *keyValueSections; // ivar: _keyValueSections
@property (retain, nonatomic) MCPayload *payload; // ivar: _payload
@property (retain, nonatomic) MCPayloadInfo *payloadInfo; // ivar: _payloadInfo


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithPayloadInfo:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_setup;
-(void)setTitle:(id)arg0 keyValueSections:(id)arg1 ;


@end


#endif