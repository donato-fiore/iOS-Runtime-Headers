// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWCDAILYFORECASTULTRAVIOLETINDEXVIEW_H
#define NWCDAILYFORECASTULTRAVIOLETINDEXVIEW_H

@class NWKUILinearGaugeView;


#import "NWCDailyForecastView.h"

@interface NWCDailyForecastUltravioletIndexView : NWCDailyForecastView

@property (readonly, nonatomic) NWKUILinearGaugeView *backgroundLinearGaugeView; // ivar: _backgroundLinearGaugeView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyFilter:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif