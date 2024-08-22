// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTIMERANGEPICKERVIEWCONTROLLER_H
#define WFTIMERANGEPICKERVIEWCONTROLLER_H

@class UITableViewController, NSDate, NSArray;
@protocol WFTimeRangePickerViewControllerDelegate;



@interface WFTimeRangePickerViewController : UITableViewController

@property (weak, nonatomic) NSObject<WFTimeRangePickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)initWithStartTime:(id)arg0 endTime:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)cancel:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)endTimeChanged:(id)arg0 ;
-(void)loadView;
-(void)startTimeChanged:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif