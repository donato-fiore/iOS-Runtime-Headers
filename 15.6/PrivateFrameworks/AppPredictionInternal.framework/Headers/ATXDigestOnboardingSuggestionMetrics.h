// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDIGESTONBOARDINGSUGGESTIONMETRICS_H
#define ATXDIGESTONBOARDINGSUGGESTIONMETRICS_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXDigestOnboardingSuggestionMetrics : ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *outcome; // ivar: _outcome
@property (retain, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) CGFloat timeToResolution; // ivar: _timeToResolution


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif