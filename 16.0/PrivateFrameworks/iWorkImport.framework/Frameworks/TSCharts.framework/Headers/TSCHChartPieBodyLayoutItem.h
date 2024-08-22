// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTPIEBODYLAYOUTITEM_H
#define TSCHCHARTPIEBODYLAYOUTITEM_H



#import "TSCHChartRadialBodyLayoutItem.h"

@interface TSCHChartPieBodyLayoutItem : TSCHChartRadialBodyLayoutItem



-(id)knobsWithRadius:(CGFloat)arg0 center:(struct CGPoint )arg1 startAngle:(CGFloat)arg2 midAngle:(CGFloat)arg3 endAngle:(CGFloat)arg4 ;
-(struct CGPath *)newElementPathWithPercentage:(CGFloat)arg0 radius:(CGFloat)arg1 center:(struct CGPoint )arg2 startAngle:(CGFloat)arg3 midAngle:(CGFloat)arg4 endAngle:(CGFloat)arg5 withInnerRadius:(id)arg6 ;


@end


#endif