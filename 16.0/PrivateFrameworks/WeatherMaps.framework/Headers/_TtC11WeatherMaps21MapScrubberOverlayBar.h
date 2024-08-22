// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11WEATHERMAPS21MAPSCRUBBEROVERLAYBAR_H
#define _TTC11WEATHERMAPS21MAPSCRUBBEROVERLAYBAR_H

@class UIControl;



@interface _TtC11WeatherMaps21MapScrubberOverlayBar : UIControl {
    ? bar;
    ? elapsedBar;
    ? control;
    ? tickMarks;
    ? nowTickMark;
    ? barHeight;
    ? tickWidth;
    ? baselineSpacing;
    ? minimumWidth;
    ? verticalHitAreaIncrease;
    ? extraPadding;
    ? overlappingLabelInsets;
    ? nowLabel;
    ? todayLabel;
    ? $__lazy_storage_$_gestureRecognizer;
    ? model;
    ? current;
}




-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)handleWithGesture:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif