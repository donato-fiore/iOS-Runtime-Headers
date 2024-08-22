// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13SLEEPHEALTHUI22TIMEINTERVALPICKERVIEW_H
#define _TTC13SLEEPHEALTHUI22TIMEINTERVALPICKERVIEW_H

@class UIPickerView;



@interface _TtC13SleepHealthUI22TimeIntervalPickerView : UIPickerView {
    ? configuration;
    ? selectedHourIndex;
    ? selectedMinuteIndex;
    ? timeIntervalSubscriber;
    ? timeIntervalPublisher;
    ? $__lazy_storage_$_hourFormatter;
    ? $__lazy_storage_$_minuteFormatter;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif