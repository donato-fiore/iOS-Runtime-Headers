// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGDATETIMECONTROLLER_H
#define PSGDATETIMECONTROLLER_H

@class PSListController, NSIndexPath, NSTimer, CoreTelephonyClient, PSSpecifier, NSString;
@protocol CoreTelephonyClientCarrierBundleDelegate, PSDateTimePickerCellDelegate;


#import "PSGWallClockMinuteTimer.h"

@interface PSGDateTimeController : PSListController <CoreTelephonyClientCarrierBundleDelegate, PSDateTimePickerCellDelegate>

 {
    NSIndexPath *_setDateAndTimeIndexPath;
    NSTimer *_timer;
    BOOL _localeForces24HourTime;
    *__CFDateFormatter _dateFormatter;
    *__CFDateFormatter _timeFormatter;
}


@property (retain, nonatomic) CoreTelephonyClient *_client; // ivar: __client
@property (retain, nonatomic) PSSpecifier *ampmToggleSpecifier; // ivar: _ampmToggleSpecifier
@property (retain) PSSpecifier *currentTimeSpecifier; // ivar: _currentTimeSpecifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSGWallClockMinuteTimer *minuteTimer; // ivar: _minuteTimer
@property (readonly) Class superclass;
@property (retain) PSSpecifier *timePickerSpecifier; // ivar: _timePickerSpecifier
@property (retain) PSSpecifier *timeZoneSpecifier; // ivar: _timeZoneSpecifier


-(BOOL)shouldDisplayTimezoneSpinner;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(id)currentDateString;
-(id)currentTimeString;
-(id)init;
-(id)is24HourTime:(id)arg0 ;
-(id)isShowingAMPMInStatusBar:(id)arg0 ;
-(id)isShowingDateInStatusBar:(id)arg0 ;
-(id)makeCurrentTimeSpecifier;
-(id)makeTimePickerSpecifier;
-(id)specifiers;
-(id)timeZoneValue:(id)arg0 ;
-(id)useAutomaticTime:(id)arg0 ;
-(id)valueForTime:(id)arg0 ;
-(void)_createDateTimeFormatters;
-(void)_setSpecifier:(id)arg0 valueEnabled:(BOOL)arg1 ;
-(void)_updateCurrentTime;
-(void)carrierBundleChange:(id)arg0 ;
-(void)datePickerChanged:(id)arg0 ;
-(void)dealloc;
-(void)effectiveSettingsChanged:(id)arg0 ;
-(void)loadTimeZoneController:(id)arg0 ;
-(void)localeChanged:(id)arg0 ;
-(void)reloadTimezone;
-(void)set24HourTime:(id)arg0 specifier:(id)arg1 ;
-(void)setAutomaticTimeFooter;
-(void)setShowAMPMInStatusBar:(id)arg0 specifier:(id)arg1 ;
-(void)setShowDateInStatusBar:(id)arg0 specifier:(id)arg1 ;
-(void)setTimeZoneValue:(id)arg0 specifier:(id)arg1 ;
-(void)setUseAutomaticTime:(id)arg0 specifier:(id)arg1 ;
-(void)significantTimeChange:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif