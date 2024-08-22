// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTIMEOFDAYTRIGGERCONFIGURATIONVIEWCONTROLLER_H
#define WFTIMEOFDAYTRIGGERCONFIGURATIONVIEWCONTROLLER_H

@class WFTriggerConfigurationViewController, NSString, NSArray, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, WFTimeOffsetPickerViewControllerDelegate, WFTimeTriggerDayOfWeekCellDelegate, _CDUserContext;



@interface WFTimeOfDayTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTimeOffsetPickerViewControllerDelegate, WFTimeTriggerDayOfWeekCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) BOOL showingPicker;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (nonatomic) NSUInteger timeOfDayInterval; // ivar: _timeOfDayInterval
@property (readonly, nonatomic) NSObject<_CDUserContext> *userContext; // ivar: _userContext


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)allDaysOfWeek;
-(id)calendarFooterText;
-(id)currentDayOfMonth;
-(id)currentSunriseTime;
-(id)currentSunsetTime;
-(id)dateComponentsFromTriggerDays;
-(id)infoForSection:(NSInteger)arg0 ;
-(id)initWithTrigger:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)titleForIndexPath:(id)arg0 ;
-(void)dayOfWeekPickerCell:(id)arg0 didChangeSelectedRecurrences:(id)arg1 ;
-(void)dismissKeyboard;
-(void)loadView;
-(void)presentOffsetPickerViewControllerForEvent:(NSUInteger)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)timeOffsetPickerViewController:(id)arg0 didSelectOffset:(NSUInteger)arg1 ;
-(void)timeOffsetPickerViewControllerDidCancel:(id)arg0 ;
-(void)timePickerUpdated:(id)arg0 ;
-(void)updateCalendarDayIfNeeded;
-(void)updateCalendarFooterText;
-(void)updateTriggerCalendarDayFromDate:(id)arg0 ;
-(void)updateTriggerTimeFromDate:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif