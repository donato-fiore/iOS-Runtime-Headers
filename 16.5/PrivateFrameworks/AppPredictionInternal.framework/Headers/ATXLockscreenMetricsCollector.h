// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLOCKSCREENMETRICSCOLLECTOR_H
#define ATXLOCKSCREENMETRICSCOLLECTOR_H


#import <Foundation/Foundation.h>


@interface ATXLockscreenMetricsCollector : NSObject



-(id)_configurationMetricFromPosterConfiguration:(id)arg0 lockscreenId:(id)arg1 modeClient:(id)arg2 ;
-(id)_dailyMetricsDescriptionGivenConfigurationMetrics:(id)arg0 widgetMetrics:(id)arg1 summaryMetric:(id)arg2 ;
-(id)_dailyMetricsDescription_shouldPost:(BOOL)arg0 ;
-(id)_weeklyRollingIdFromLockscreenId:(id)arg0 ;
-(id)_widgetMetricFromComplication:(id)arg0 lockscreenId:(id)arg1 ;
-(id)dailyMetricsDescription;
-(void)_fillSummaryMetric:(id)arg0 configurations:(id)arg1 ;
-(void)_postConfigurationMetrics:(id)arg0 widgetMetrics:(id)arg1 summaryMetric:(id)arg2 ;
-(void)postDailyMetrics;
-(void)postEditMetricWithEvent:(id)arg0 ;
-(void)postSwitchMetricWithEvent:(id)arg0 ;


@end


#endif