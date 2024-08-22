// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDIGESTONBOARDINGAPPSELECTIONMETRICS_H
#define ATXDIGESTONBOARDINGAPPSELECTIONMETRICS_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXDigestOnboardingAppSelectionMetrics : ATXCoreAnalyticsMetric

@property (nonatomic) BOOL addedToDigest; // ivar: _addedToDigest
@property (nonatomic) NSUInteger avgNumBasicNotifications; // ivar: _avgNumBasicNotifications
@property (nonatomic) NSUInteger avgNumMessageNotfications; // ivar: _avgNumMessageNotfications
@property (nonatomic) NSUInteger avgNumTimeSensitiveNonMessageNotifications; // ivar: _avgNumTimeSensitiveNonMessageNotifications
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSUInteger rank; // ivar: _rank
@property (retain, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) BOOL wasShownInDigestOnboarding; // ivar: _wasShownInDigestOnboarding


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif