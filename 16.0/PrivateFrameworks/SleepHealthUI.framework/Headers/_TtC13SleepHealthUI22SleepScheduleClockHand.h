// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13SLEEPHEALTHUI22SLEEPSCHEDULECLOCKHAND_H
#define _TTC13SLEEPHEALTHUI22SLEEPSCHEDULECLOCKHAND_H

@class UIControl;



@interface _TtC13SleepHealthUI22SleepScheduleClockHand : UIControl {
    ? background;
    ? symbol;
    ? image;
    ? configuration;
}


@property (nonatomic) BOOL highlighted;


-(BOOL)accessibilityHandIsBedtime;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif