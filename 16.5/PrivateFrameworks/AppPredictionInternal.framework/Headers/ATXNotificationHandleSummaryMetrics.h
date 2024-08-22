// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONHANDLESUMMARYMETRICS_H
#define ATXNOTIFICATIONHANDLESUMMARYMETRICS_H

@class ATXCoreAnalyticsMetric, NSMutableDictionary;



@interface ATXNotificationHandleSummaryMetrics : ATXCoreAnalyticsMetric {
    NSMutableDictionary *_unhandledReceivedNotifications;
    CGFloat _rejectedNotificationTotalHandleTime;
    CGFloat _acceptedNotificationTotalHandleTime;
}


@property (readonly, nonatomic) CGFloat acceptedNotificationAverageHandleTime;
@property (readonly, nonatomic) NSUInteger acceptedNotificationCount; // ivar: _acceptedNotificationCount
@property (readonly, nonatomic) CGFloat acceptedNotificationsPercentage;
@property (readonly, nonatomic) NSUInteger notificationsReceivedCount; // ivar: _notificationsReceivedCount
@property (readonly, nonatomic) CGFloat rejectedNotificationAverageHandleTime;
@property (readonly, nonatomic) NSUInteger rejectedNotificationCount; // ivar: _rejectedNotificationCount
@property (readonly, nonatomic) CGFloat rejectedNotificationsPercentage;
@property (readonly, nonatomic) CGFloat unhandledNotificationsPercentage;


-(id)coreAnalyticsDictionary;
-(id)initWithDimensions:(id)arg0 ;
-(id)metricName;
-(id)popReceiveEventForNotification:(id)arg0 ;
-(void)handleNotificationEvent:(id)arg0 ;
-(void)handleTelemetryResult:(id)arg0 ;


@end


#endif