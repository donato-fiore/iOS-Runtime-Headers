// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXLOCKSCREENPOSTERSUGGESTIONMETRIC_H
#define ATXLOCKSCREENPOSTERSUGGESTIONMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXLockscreenPosterSuggestionMetric : ATXCoreAnalyticsMetric

@property (nonatomic) BOOL engaged; // ivar: _engaged
@property (copy, nonatomic) NSString *extensionBundleId; // ivar: _extensionBundleId
@property (nonatomic) BOOL outcome; // ivar: _outcome
@property (nonatomic) NSUInteger section; // ivar: _section
@property (copy, nonatomic) NSString *sessionId; // ivar: _sessionId


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif