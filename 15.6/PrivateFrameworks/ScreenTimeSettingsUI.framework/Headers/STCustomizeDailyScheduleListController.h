// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCUSTOMIZEDAILYSCHEDULELISTCONTROLLER_H
#define STCUSTOMIZEDAILYSCHEDULELISTCONTROLLER_H

@class PSListController, STBlueprintScheduleCustomDayItem, PSSpecifier, NSDateComponents;
@protocol PSDateTimePickerCellDelegate;



@interface STCustomizeDailyScheduleListController : PSListController <PSDateTimePickerCellDelegate>



@property (copy) STBlueprintScheduleCustomDayItem *dailySchedule; // ivar: _dailySchedule
@property (readonly) PSSpecifier *dailyScheduleGroupSpecifier; // ivar: _dailyScheduleGroupSpecifier
@property (readonly) PSSpecifier *endTimePickerSpecifier; // ivar: _endTimePickerSpecifier
@property (readonly) PSSpecifier *endTimeSpecifier; // ivar: _endTimeSpecifier
@property (readonly, copy) NSDateComponents *minimumStartTime; // ivar: _minimumStartTime
@property (readonly) PSSpecifier *startTimePickerSpecifier; // ivar: _startTimePickerSpecifier
@property (readonly) PSSpecifier *startTimeSpecifier; // ivar: _startTimeSpecifier
@property (getter=isWeekdayEnabled) BOOL weekdayEnabled; // ivar: _weekdayEnabled
@property (readonly) NSUInteger weekdayIndex; // ivar: _weekdayIndex


-(BOOL)canBeShownFromSuspendedState;
-(id)_endTime:(id)arg0 ;
-(id)_getWeekdayEnabled:(id)arg0 ;
-(id)_startTime:(id)arg0 ;
-(id)datePickerForSpecifier:(id)arg0 ;
-(id)initWithDailySchedule:(id)arg0 weekdayIndex:(NSUInteger)arg1 weekdayName:(id)arg2 minimumStartTime:(id)arg3 ;
-(id)specifiers;
-(void)_didEndEditingDailySchedule:(BOOL)arg0 ;
-(void)_updateTimeSpecifierDetailTextLabelColors:(BOOL)arg0 selectedSpecifier:(id)arg1 unselectedSpecifier:(id)arg2 ;
-(void)datePickerChanged:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willResignActive;


@end


#endif