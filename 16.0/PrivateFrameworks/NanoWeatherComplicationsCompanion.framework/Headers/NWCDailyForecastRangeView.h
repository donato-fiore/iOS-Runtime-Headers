// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCDAILYFORECASTRANGEVIEW_H
#define NWCDAILYFORECASTRANGEVIEW_H

@class UIView, UILabel;



@interface NWCDailyForecastRangeView : UIView

@property (readonly, nonatomic) UILabel *highLabel; // ivar: _highLabel
@property (readonly, nonatomic) UILabel *lowLabel; // ivar: _lowLabel


-(id)_rangeLabelWithFontSize:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_applyConstraints:(struct ? )arg0 ;


@end


#endif