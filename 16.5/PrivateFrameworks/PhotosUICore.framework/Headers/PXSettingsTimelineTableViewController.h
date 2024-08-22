// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSETTINGSTIMELINETABLEVIEWCONTROLLER_H
#define PXSETTINGSTIMELINETABLEVIEWCONTROLLER_H

@class UITableViewController, NSArray;



@interface PXSettingsTimelineTableViewController : UITableViewController

@property (retain, nonatomic) NSArray *widgetSizes; // ivar: _widgetSizes


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif