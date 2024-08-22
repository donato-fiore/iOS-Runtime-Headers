// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOVERLAYCONTEXTUTILITIES_H
#define HKOVERLAYCONTEXTUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKOverlayContextUtilities : NSObject



+(id)defaultMetricColorsForOverlayMode:(NSInteger)arg0 ;
+(id)selectedMetricColorsForCategory:(NSInteger)arg0 ;
+(id)stackedAxisConfiguration;
+(id)stackedChartMetricColorsForSampleType:(id)arg0 templateType:(id)arg1 ;
+(void)setStackedSeriesLegend:(id)arg0 title:(id)arg1 ;


@end


#endif