// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLOCKSCREENWIDGETSUGGESTIONMETRIC_H
#define ATXLOCKSCREENWIDGETSUGGESTIONMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXLockscreenWidgetSuggestionMetric : ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *extensionBundleId; // ivar: _extensionBundleId
@property (nonatomic) NSUInteger family; // ivar: _family
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (nonatomic) NSInteger numEngaged; // ivar: _numEngaged
@property (nonatomic) BOOL outcome; // ivar: _outcome
@property (nonatomic) NSUInteger reason; // ivar: _reason
@property (copy, nonatomic) NSString *sessionId; // ivar: _sessionId


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif