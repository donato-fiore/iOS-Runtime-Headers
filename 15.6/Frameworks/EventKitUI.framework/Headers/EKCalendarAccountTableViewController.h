// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDARACCOUNTTABLEVIEWCONTROLLER_H
#define EKCALENDARACCOUNTTABLEVIEWCONTROLLER_H

@class UITableViewController, NSMutableArray, EKCalendar, NSString, EKEventStore;



@interface EKCalendarAccountTableViewController : UITableViewController

@property (readonly) NSMutableArray *accounts;
@property (weak) EKCalendar *calendar; // ivar: _calendar
@property (retain) NSString *currentSourceIdentifier; // ivar: _currentSourceIdentifier
@property (weak) EKEventStore *eventStore; // ivar: _eventStore


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCalendar:(id)arg0 andStore:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)resetBackgroundColor;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif