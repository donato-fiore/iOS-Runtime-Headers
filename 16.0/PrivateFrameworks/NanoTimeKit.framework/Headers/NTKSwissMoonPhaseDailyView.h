// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKSWISSMOONPHASEDAILYVIEW_H
#define NTKSWISSMOONPHASEDAILYVIEW_H

@class UIView, UILabel;


#import "NTKAstronomyRichComplicationContentView.h"

@interface NTKSwissMoonPhaseDailyView : UIView

@property (retain, nonatomic) UILabel *dayLabel; // ivar: _dayLabel
@property (retain, nonatomic) NTKAstronomyRichComplicationContentView *moonView; // ivar: _moonView
@property (retain, nonatomic) UILabel *weekdayLabel; // ivar: _weekdayLabel


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif