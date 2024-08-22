// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT8MFSLIDER_H
#define _TTC16MAGNIFIERSUPPORT8MFSLIDER_H

@class UISlider;



@interface _TtC16MagnifierSupport8MFSlider : UISlider {
    ? tickValue;
    ? tickHeight;
    ? lastTickRect;
    ? trackColor;
    ? maxOffsetFromThumbRect;
    ? extraTouchInset;
    ? tickFeedbackGenerator;
}




-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;


@end


#endif