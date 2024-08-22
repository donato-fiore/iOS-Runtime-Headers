// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONMANAGEMENTSETTINGSMETRIC_H
#define ATXNOTIFICATIONMANAGEMENTSETTINGSMETRIC_H

@class ATXCoreAnalyticsMetric;



@interface ATXNotificationManagementSettingsMetric : ATXCoreAnalyticsMetric

@property (nonatomic) BOOL hasOfferedDigest; // ivar: _hasOfferedDigest
@property (nonatomic) BOOL hasSetupDigest; // ivar: _hasSetupDigest
@property (nonatomic) NSUInteger numConfiguredModes; // ivar: _numConfiguredModes
@property (nonatomic) NSUInteger numDailyDigests; // ivar: _numDailyDigests
@property (nonatomic) NSUInteger numDigestApps; // ivar: _numDigestApps


-(id)coreAnalyticsDictionary;
-(id)description;
-(id)metricName;


@end


#endif