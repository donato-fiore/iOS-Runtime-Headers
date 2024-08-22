// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDEVICEUSAGESUMMARYMETRICS_H
#define ATXDEVICEUSAGESUMMARYMETRICS_H

@class ATXCoreAnalyticsMetric, NSDate;



@interface ATXDeviceUsageSummaryMetrics : ATXCoreAnalyticsMetric {
    NSDate *_lastEntryTime;
}


@property (readonly, nonatomic) CGFloat averagePickupDuration;
@property (readonly, nonatomic) NSUInteger devicePickupCount; // ivar: _devicePickupCount
@property (readonly, nonatomic) CGFloat totalDeviceOnTime; // ivar: _totalDeviceOnTime
@property (readonly, nonatomic) CGFloat totalTime; // ivar: _totalTime


-(id)coreAnalyticsDictionary;
-(id)initWithDimensions:(id)arg0 ;
-(id)metricName;
-(void)handleConfigurationEntry:(id)arg0 ;
-(void)handleConfigurationExit:(id)arg0 ;
-(void)handleOnInterval:(id)arg0 ;


@end


#endif