// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEAPPCONFIGURATIONMETRIC_H
#define ATXMODEAPPCONFIGURATIONMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXModeAppConfigurationMetric : ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (copy, nonatomic) NSString *modeSemanticType; // ivar: _modeSemanticType


-(id)coreAnalyticsDictionary;
-(id)description;
-(id)metricName;


@end


#endif