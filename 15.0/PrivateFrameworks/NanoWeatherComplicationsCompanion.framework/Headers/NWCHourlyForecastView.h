// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWCHOURLYFORECASTVIEW_H
#define NWCHOURLYFORECASTVIEW_H

@class UIView, UIImageView, UILabel;
@protocol NWMDataFormatter;



@interface NWCHourlyForecastView : UIView

@property (weak, nonatomic) NSObject<NWMDataFormatter> *formatter; // ivar: _formatter
@property (readonly, nonatomic) UIImageView *middleImageView; // ivar: _middleImageView
@property (readonly, nonatomic) UILabel *middleLabel; // ivar: _middleLabel
@property (readonly, nonatomic) UILabel *timeLabel; // ivar: _timeLabel
@property (readonly, nonatomic) UILabel *topLabel; // ivar: _topLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_applyConstraintsWithConstants:(struct ? )arg0 ;
-(void)applyEntryModel:(id)arg0 date:(id)arg1 timeZone:(id)arg2 ;
-(void)applyStyle;


@end


#endif