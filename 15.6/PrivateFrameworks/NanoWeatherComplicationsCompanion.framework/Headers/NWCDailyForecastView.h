// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWCDAILYFORECASTVIEW_H
#define NWCDAILYFORECASTVIEW_H

@class UIView, NWKUILinearGaugeView, UILabel;



@interface NWCDailyForecastView : UIView

@property (readonly, nonatomic) NWKUILinearGaugeView *linearGaugeView; // ivar: _linearGaugeView
@property (nonatomic) CGFloat percentage; // ivar: _percentage
@property (readonly, nonatomic) UILabel *weekdayLabel; // ivar: _weekdayLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_applyLayoutConstraints:(struct ? )arg0 ;
-(void)applyFilter:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateMonochromeColor:(id)arg0 fraction:(CGFloat)arg1 ;


@end


#endif