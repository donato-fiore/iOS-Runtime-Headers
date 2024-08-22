// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDIAGNOSTICSVIEWCONTROLLER_H
#define WFDIAGNOSTICSVIEWCONTROLLER_H

@class NSString;


#import "WFInsetTableViewController.h"

@interface WFDiagnosticsViewController : WFInsetTableViewController

@property (copy, nonatomic) NSString *comment; // ivar: _comment
@property (copy, nonatomic) id *saveHandler; // ivar: _saveHandler
@property (nonatomic) BOOL saving; // ivar: _saving


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif