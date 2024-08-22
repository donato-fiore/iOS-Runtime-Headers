// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STWEEKLYREPORTVIEWCONTROLLER_H
#define STWEEKLYREPORTVIEWCONTROLLER_H

@class UITableViewController, NSLayoutConstraint, NSArray;


#import "STUsageReport.h"

@interface STWeeklyReportViewController : UITableViewController

@property (retain) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (readonly, nonatomic) STUsageReport *report; // ivar: _report
@property (retain, nonatomic) NSArray *tableViewCells; // ivar: _tableViewCells


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithUsageReport:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_heightDidChange:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif