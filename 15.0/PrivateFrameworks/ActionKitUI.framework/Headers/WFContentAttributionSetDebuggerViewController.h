// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTENTATTRIBUTIONSETDEBUGGERVIEWCONTROLLER_H
#define WFCONTENTATTRIBUTIONSETDEBUGGERVIEWCONTROLLER_H

@class UITableViewController, NSArray;



@interface WFContentAttributionSetDebuggerViewController : UITableViewController

@property (retain, nonatomic) NSArray *contentItems; // ivar: _contentItems


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)viewDidLoad;


@end


#endif