// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13SLEEPHEALTHUI29SLEEPSCHEDULECOMPONENTSHEADER_H
#define _TTC13SLEEPHEALTHUI29SLEEPSCHEDULECOMPONENTSHEADER_H

@class UIView;



@interface _TtC13SleepHealthUI29SleepScheduleComponentsHeader : UIView {
    ? model;
    ? $__lazy_storage_$_bedtimeStackView;
    ? $__lazy_storage_$_wakeUpStackView;
    ? $__lazy_storage_$_bedtimeTitleLabel;
    ? $__lazy_storage_$_wakeUpTitleLabel;
    ? $__lazy_storage_$_bedtimeTimeLabel;
    ? $__lazy_storage_$_wakeUpTimeLabel;
    ? $__lazy_storage_$_bedtimeDayLabel;
    ? $__lazy_storage_$_wakeUpDayLabel;
    ? sizingTimeLabel;
    ? isIn24HourTime;
    ? $__lazy_storage_$_stackViewCenterConstraints;
    ? $__lazy_storage_$_stackViewEdgeConstraints;
    ? $__lazy_storage_$_timeLabelConstraints;
}




-(id)accessibilityBedtimeTimeLabel;
-(id)accessibilityWakeUpTimeLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif