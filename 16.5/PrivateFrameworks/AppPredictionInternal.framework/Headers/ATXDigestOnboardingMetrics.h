// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDIGESTONBOARDINGMETRICS_H
#define ATXDIGESTONBOARDINGMETRICS_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXDigestOnboardingMetrics : ATXCoreAnalyticsMetric

@property (nonatomic) NSInteger deliveryTime1; // ivar: _deliveryTime1
@property (nonatomic) NSInteger deliveryTime2; // ivar: _deliveryTime2
@property (nonatomic) NSInteger deliveryTime3; // ivar: _deliveryTime3
@property (nonatomic) BOOL didSelectShowMore; // ivar: _didSelectShowMore
@property (retain, nonatomic) NSString *digestOnboardingOutcome; // ivar: _digestOnboardingOutcome
@property (retain, nonatomic) NSString *entrySource; // ivar: _entrySource
@property (retain, nonatomic) NSString *finalUIShown; // ivar: _finalUIShown
@property (nonatomic) NSUInteger numScheduledDeliveries; // ivar: _numScheduledDeliveries
@property (retain, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) CGFloat timeTaken; // ivar: _timeTaken


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif