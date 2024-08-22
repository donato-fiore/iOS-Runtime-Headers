// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCDAILYFORECASTVIEW_H
#define NWCDAILYFORECASTVIEW_H

@class UIView, CLKDevice, NWKUILinearGaugeView, UILabel;



@interface NWCDailyForecastView : UIView

@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly, nonatomic) NWKUILinearGaugeView *linearGaugeView; // ivar: _linearGaugeView
@property (readonly, nonatomic) UILabel *weekdayLabel; // ivar: _weekdayLabel


+(void)initialize;
-(id)initWithDevice:(id)arg0 ;
-(void)_applyLayoutConstraints:(struct ? )arg0 ;
-(void)applyAccentFilters:(id)arg0 fraction:(CGFloat)arg1 ;
-(void)applyNonAccentFilters:(id)arg0 fraction:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)updateWithHighlightColor:(id)arg0 fraction:(CGFloat)arg1 ;


@end


#endif