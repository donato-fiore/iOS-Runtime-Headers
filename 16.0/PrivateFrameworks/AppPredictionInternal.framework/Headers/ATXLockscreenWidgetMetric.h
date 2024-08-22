// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXLOCKSCREENWIDGETMETRIC_H
#define ATXLOCKSCREENWIDGETMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXLockscreenWidgetMetric : ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *extensionBundleId; // ivar: _extensionBundleId
@property (nonatomic) NSUInteger family; // ivar: _family
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (copy, nonatomic) NSString *lockscreenId; // ivar: _lockscreenId
@property (nonatomic) NSUInteger source; // ivar: _source


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif