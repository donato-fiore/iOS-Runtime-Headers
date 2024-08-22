// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINTERRUPTEDAPPSESSIONSUMMARYMETRICS_H
#define ATXINTERRUPTEDAPPSESSIONSUMMARYMETRICS_H

@class ATXCoreAnalyticsMetric;



@interface ATXInterruptedAppSessionSummaryMetrics : ATXCoreAnalyticsMetric

@property (nonatomic) NSUInteger interruptedAppSessions; // ivar: _interruptedAppSessions
@property (readonly, nonatomic) CGFloat percentageInterruptedAppSessions;
@property (nonatomic) NSUInteger totalAppSessions; // ivar: _totalAppSessions


-(id)coreAnalyticsDictionary;
-(id)initWithDimensions:(id)arg0 ;
-(id)metricName;


@end


#endif