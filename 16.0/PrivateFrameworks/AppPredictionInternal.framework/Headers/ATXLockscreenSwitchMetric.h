// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXLOCKSCREENSWITCHMETRIC_H
#define ATXLOCKSCREENSWITCHMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXLockscreenSwitchMetric : ATXCoreAnalyticsMetric

@property (nonatomic) NSInteger duration; // ivar: _duration
@property (copy, nonatomic) NSString *lockscreenId; // ivar: _lockscreenId
@property (copy, nonatomic) NSString *outcome; // ivar: _outcome
@property (copy, nonatomic) NSString *switchMechanism; // ivar: _switchMechanism


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif