// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SLEEPHEALTHUI29SLEEPSCHEDULECOMPONENTSHEADER_H
#define _TTC13SLEEPHEALTHUI29SLEEPSCHEDULECOMPONENTSHEADER_H

@class UIView;



@interface _TtC13SleepHealthUI29SleepScheduleComponentsHeader : UIView {
    ? model;
    ? bedtimeTitleLabel;
    ? wakeUpTitleLabel;
    ? bedtimeTimeLabel;
    ? wakeUpTimeLabel;
    ? $__lazy_storage_$_bedtimeDayLabel;
    ? $__lazy_storage_$_wakeUpDayLabel;
    ? sizingTimeLabel;
    ? isIn24HourTime;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)accessibilityBedtimeTimeLabel;
-(id)accessibilityWakeUpTimeLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif