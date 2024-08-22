// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STDEVICEBEDTIMELISTCONTROLLER_H
#define STDEVICEBEDTIMELISTCONTROLLER_H

@class PSListController, PSSpecifier, NSTimer, NSArray;
@protocol PSDateTimePickerCellDelegate, STRootViewModelCoordinator, STDeviceBedtimeListControllerDelegate;


#import "STUIUser.h"
#import "STDeviceBedtime.h"

@interface STDeviceBedtimeListController : PSListController <PSDateTimePickerCellDelegate>



@property (retain, nonatomic) STUIUser *affectedUser; // ivar: _affectedUser
@property (retain, nonatomic) PSSpecifier *atBedtimeGroupSpecifier; // ivar: _atBedtimeGroupSpecifier
@property (retain, nonatomic) PSSpecifier *atBedtimeSpecifier; // ivar: _atBedtimeSpecifier
@property (copy, nonatomic) STDeviceBedtime *bedtime; // ivar: _bedtime
@property (nonatomic) BOOL canAskForMoreTime; // ivar: _canAskForMoreTime
@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // ivar: _coordinator
@property (retain) PSSpecifier *customizeDaysSpecifier; // ivar: _customizeDaysSpecifier
@property (weak, nonatomic) NSObject<STDeviceBedtimeListControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier; // ivar: _deviceBedtimeSpecifier
@property (retain, nonatomic) PSSpecifier *downTimeGroupSpecifier; // ivar: _downTimeGroupSpecifier
@property (retain, nonatomic) NSTimer *downtimeScheduleRefreshTimer; // ivar: _downtimeScheduleRefreshTimer
@property (retain, nonatomic) PSSpecifier *endTimePickerSpecifier; // ivar: _endTimePickerSpecifier
@property (retain, nonatomic) PSSpecifier *endTimeSpecifier; // ivar: _endTimeSpecifier
@property (retain) PSSpecifier *everyDaySpecifier; // ivar: _everyDaySpecifier
@property (retain, nonatomic) PSSpecifier *informativeTextGroupSpecifier; // ivar: _informativeTextGroupSpecifier
@property (nonatomic) BOOL isEditingSimple; // ivar: _isEditingSimple
@property (readonly) NSArray *orderedLocalizedWeekdayNames; // ivar: _orderedLocalizedWeekdayNames
@property (readonly) NSArray *orderedWeekdayIndexes; // ivar: _orderedWeekdayIndexes
@property (retain, nonatomic) PSSpecifier *scheduleSwitchGroupSpecifier; // ivar: _scheduleSwitchGroupSpecifier
@property (retain, nonatomic) PSSpecifier *scheduleTypeGroupSpecifier; // ivar: _scheduleTypeGroupSpecifier
@property (retain, nonatomic) PSSpecifier *scheduledSwitchSpecifier; // ivar: _scheduledSwitchSpecifier
@property (retain, nonatomic) PSSpecifier *selectedTimeSpecifier; // ivar: _selectedTimeSpecifier
@property (retain, nonatomic) PSSpecifier *startTimePickerSpecifier; // ivar: _startTimePickerSpecifier
@property (retain, nonatomic) PSSpecifier *startTimeSpecifier; // ivar: _startTimeSpecifier
@property (retain, nonatomic) PSSpecifier *timeGroupSpecifier; // ivar: _timeGroupSpecifier
@property (retain) NSArray *weekdaySpecifiers; // ivar: _weekdaySpecifiers


-(BOOL)canBeShownFromSuspendedState;
-(id)_createDefaultCustomScheduleFromSimpleSchedule:(id)arg0 ;
-(id)_customScheduleTime:(id)arg0 ;
-(id)_deviceBedtimeSpecifierWithBedtime:(id)arg0 downtimeGroupSpecifier:(id)arg1 ;
-(id)_simpleEndTime:(id)arg0 ;
-(id)_simpleStartTime:(id)arg0 ;
-(id)askForMoreTime:(id)arg0 ;
-(id)atDowntimeFooterText;
-(id)datePickerForSpecifier:(id)arg0 ;
-(id)deviceBedtimeEnabled:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(id)timeFooterText;
-(void)_actuallyToggleDowntimeEnabled;
-(void)_didEndEditingDailySchedule:(id)arg0 ;
-(void)_didFinishEditingBedtime;
-(void)_renderDeviceBedtimeSpecifierWithBedtime:(id)arg0 ;
-(void)_showCustomizeDailyScheduleListController:(id)arg0 ;
-(void)_showOrHidePickerSpecifierForSpecifier:(id)arg0 ;
-(void)_toggleDowntimeEnabled;
-(void)datePickerChanged:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)scheduleDowntimeRefreshAndReloadSpecifiers;
-(void)scheduleDowntimeRefreshIfNeeded;
-(void)setAskForMoreTime:(id)arg0 specifier:(id)arg1 ;
-(void)setDeviceBedtimeEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willResignActive;


@end


#endif