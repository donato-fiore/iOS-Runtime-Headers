// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSCOLORSCHEDULECONTROLLER_H
#define DBSCOLORSCHEDULECONTROLLER_H

@class PSListController, CBClient, PSSpecifier, NSDateFormatter, UIDatePicker;
@protocol PSDateTimePickerCellDelegate;



@interface DBSColorScheduleController : PSListController <PSDateTimePickerCellDelegate>

 {
    CBClient *_brightnessClient;
    PSSpecifier *_radioGroup;
    PSSpecifier *_sunsetToSunriseRadioSpecifier;
    PSSpecifier *_scheduleRadioSpecifier;
    PSSpecifier *_timeGroup;
    PSSpecifier *_startTimePickerSpecifier;
    PSSpecifier *_endTimePickerSpecifier;
    NSDateFormatter *_timeFormatter;
    BOOL _showingScheduleSpecifiers;
    UIDatePicker *_startTimePicker;
    UIDatePicker *_endTimePicker;
}




-(id)datePickerForSpecifier:(id)arg0 ;
-(id)endTime;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)specifiers;
-(id)startTime;
-(int)blueLightMode;
-(void)datePickerChanged:(id)arg0 ;
-(void)dealloc;
-(void)handleBlueLightStatusChanged:(struct ? *)arg0 ;
-(void)showScheduleSpecifiers:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)willResignActive;


@end


#endif