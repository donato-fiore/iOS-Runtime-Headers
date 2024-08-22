// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRRESEARCHDAYSVIEWCONTROLLER_H
#define SRRESEARCHDAYSVIEWCONTROLLER_H

@class UITableViewController, NSMutableSet, NSArray;



@interface SRResearchDaysViewController : UITableViewController

@property (retain, nonatomic) NSMutableSet *deletedDays; // ivar: _deletedDays
@property (nonatomic) CGFloat end; // ivar: _end
@property (nonatomic) NSInteger numberOfDays; // ivar: _numberOfDays
@property (retain, nonatomic) NSArray *tombstones; // ivar: _tombstones


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)dateForRow:(NSInteger)arg0 ;
-(id)datesFrom:(CGFloat)arg0 to:(CGFloat)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;


@end


#endif