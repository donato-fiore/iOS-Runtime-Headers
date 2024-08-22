// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT13AUKNOBCONTROL_H
#define _TTC12COREAUDIOKIT13AUKNOBCONTROL_H

@class UIControl;



@interface _TtC12CoreAudioKit13AUKnobControl : UIControl {
    ? param;
    ? min;
    ? max;
    ? previousTouchPosition;
    ? numDigits;
    ? formatter;
    ? title;
    ? valueLayer;
    ? lineLayer;
    ? titleLayer;
    ? valueLabel;
    ? minValueLayer;
    ? maxValueLayer;
}


@property (nonatomic) NSUInteger accessibilityTraits;
@property (nonatomic) float value; // ivar: value


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;
-(void)configureWith:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)tintColorDidChange;


@end


#endif