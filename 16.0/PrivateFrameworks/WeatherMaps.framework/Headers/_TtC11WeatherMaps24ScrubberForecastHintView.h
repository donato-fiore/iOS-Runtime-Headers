// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11WEATHERMAPS24SCRUBBERFORECASTHINTVIEW_H
#define _TTC11WEATHERMAPS24SCRUBBERFORECASTHINTVIEW_H

@class UIView;



@interface _TtC11WeatherMaps24ScrubberForecastHintView : UIView {
    ? delegate;
    ? backgroundEffectView;
    ? iconView;
    ? label;
    ? horizontalPadding;
    ? verticalPadding;
    ? iconLabelSpacing;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didRecognizeTap;
-(void)layoutSubviews;


@end


#endif