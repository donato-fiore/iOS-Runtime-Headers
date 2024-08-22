// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13SLEEPHEALTHUI18SLEEPSCHEDULECLOCK_H
#define _TTC13SLEEPHEALTHUI18SLEEPSCHEDULECLOCK_H

@class UIControl;



@interface _TtC13SleepHealthUI18SleepScheduleClock : UIControl {
    ? model;
    ? configuration;
    ? gestureRecognizer;
    ? track;
    ? ring;
    ? grabber;
    ? dial;
    ? bedtimeHand;
    ? wakeUpHand;
    ? majorFeedbackGenerator;
    ? minorFeedbackGenerator;
    ? dragState;
}




-(BOOL)accessibilityAlarmEnabled;
-(BOOL)accessibilityIsForSingleDayOverride;
-(CGFloat)accessibilityTimeInBed;
-(CGFloat)accessibilityTimeInBedGoal;
-(id)accessibilityBedtimeHand;
-(id)accessibilityWakeUpHand;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif