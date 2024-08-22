// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STINTRODOWNTIMETABLEVIEWCONTROLLER_H
#define STINTRODOWNTIMETABLEVIEWCONTROLLER_H

@class UITableViewController, NSDateFormatter;


#import "STDeviceBedtime.h"

@interface STIntroDowntimeTableViewController : UITableViewController

@property (readonly) STDeviceBedtime *bedtime; // ivar: _bedtime
@property NSInteger datePickerVisibility; // ivar: _datePickerVisibility
@property (readonly) NSDateFormatter *downtimeFormatter; // ivar: _downtimeFormatter


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_tableRowForDatePicker;
-(NSInteger)_tableRowForEndLabelRow;
-(NSInteger)_tableRowForStartLabelRow;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_datePickerChanged:(id)arg0 ;
-(void)_stIntroDowntimeTableViewControllerCommonInit;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif