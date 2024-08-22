// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONMANAGEMENTSETTINGSMETRIC_H
#define ATXNOTIFICATIONMANAGEMENTSETTINGSMETRIC_H

@class ATXCoreAnalyticsMetric;



@interface ATXNotificationManagementSettingsMetric : ATXCoreAnalyticsMetric

@property (nonatomic) NSUInteger numDailyDigests; // ivar: _numDailyDigests
@property (nonatomic) NSUInteger numDigestApps; // ivar: _numDigestApps


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif