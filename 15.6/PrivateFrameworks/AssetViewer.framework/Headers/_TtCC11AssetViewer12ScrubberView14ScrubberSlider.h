// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC11ASSETVIEWER12SCRUBBERVIEW14SCRUBBERSLIDER_H
#define _TTCC11ASSETVIEWER12SCRUBBERVIEW14SCRUBBERSLIDER_H

@class UISlider;



@interface _TtCC11AssetViewer12ScrubberView14ScrubberSlider : UISlider {
    ? sliderThumbView;
    ? translationFromTrailingTouch;
    ? trackedLocationOfTouch;
    ? trackedValue;
    ? thumbShouldReturnToTouch;
    ? normalizer;
    ? scrubbingSpeed;
}




-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(id)createThumbView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)setValue:(float)arg0 animated:(BOOL)arg1 ;
-(void)tintColorDidChange;


@end


#endif