// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DBSCOLORTEMPERATURECONTROLLER_H
#define DBSCOLORTEMPERATURECONTROLLER_H

@class PSListController, NSDateFormatter, NSTimer, CBClient, PSSpecifier;
@protocol PSTimeRangeCellDelegate;



@interface DBSColorTemperatureController : PSListController <PSTimeRangeCellDelegate>

 {
    NSDateFormatter *_timeFormatter;
    BOOL _temperatureSliderWasTracking;
    NSTimer *_blueLightReductionLabelRefreshTimer;
    BOOL _showColorTemperature;
    BOOL _showingScheduleRange;
}


@property (retain, nonatomic) CBClient *_brightnessClient; // ivar: __brightnessClient
@property (retain, nonatomic) PSSpecifier *_manualSwitchSpecifier; // ivar: __manualSwitchSpecifier
@property (retain, nonatomic) PSSpecifier *_scheduleRangeSpecifier; // ivar: __scheduleRangeSpecifier
@property (retain, nonatomic) PSSpecifier *_scheduleSwitchSpecifier; // ivar: __scheduleSwitchSpecifier
@property (retain, nonatomic) PSSpecifier *_temperatureSlider; // ivar: __temperatureSlider


-(id)blueLightReductionFooter;
-(id)fromDetailForCell:(id)arg0 ;
-(id)getBlueLightReductionEnabled:(id)arg0 ;
-(id)getBlueLightReductionScheduleEnabled:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)localizedTimeForTime:(struct ? )arg0 ;
-(id)specifiers;
-(id)temperatureStrength:(id)arg0 ;
-(id)toDetailForCell:(id)arg0 ;
-(void)_printBlueLightStatus:(struct ? *)arg0 ;
-(void)colorTemperatureSliderDidChange;
-(void)dealloc;
-(void)handleBlueLightStatusChanged:(struct ? *)arg0 ;
-(void)setBlueLightReductionEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setBlueLightReductionSchedule:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setTemperatureStrength:(id)arg0 specifier:(id)arg1 ;
// -(void)showAlertToDisableAccessibilityFiltersForBlueLightReduction:(id)arg0 cancel:(unk)arg1  ;
-(void)showScheduleRange:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif