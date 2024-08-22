// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDIGESTENGAGEMENTMETRIC_H
#define ATXDIGESTENGAGEMENTMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXDigestEngagementMetric : ATXCoreAnalyticsMetric

@property (nonatomic) CGFloat digestExpirationTimestamp; // ivar: _digestExpirationTimestamp
@property (retain, nonatomic) NSString *digestTimeCategory; // ivar: _digestTimeCategory
@property (retain, nonatomic) NSString *digestUUID; // ivar: _digestUUID
@property (nonatomic) CGFloat firstScheduledViewTimestamp; // ivar: _firstScheduledViewTimestamp
@property (nonatomic) CGFloat firstUpcomingViewTimestamp; // ivar: _firstUpcomingViewTimestamp
@property (nonatomic) NSUInteger numDigestExpansions; // ivar: _numDigestExpansions
@property (nonatomic) NSUInteger numEngagementsAfterExpiration; // ivar: _numEngagementsAfterExpiration
@property (nonatomic) NSUInteger numEngagementsInScheduled; // ivar: _numEngagementsInScheduled
@property (nonatomic) NSUInteger numEngagementsInUpcoming; // ivar: _numEngagementsInUpcoming
@property (nonatomic) NSUInteger numHighlightedGroups; // ivar: _numHighlightedGroups
@property (nonatomic) NSUInteger numHighlightedNotifications; // ivar: _numHighlightedNotifications
@property (nonatomic) NSUInteger numMessageGroups; // ivar: _numMessageGroups
@property (nonatomic) NSUInteger numMessageNotifications; // ivar: _numMessageNotifications
@property (nonatomic) NSUInteger numNotificationGroupExpansions; // ivar: _numNotificationGroupExpansions
@property (nonatomic) NSUInteger numOtherGroups; // ivar: _numOtherGroups
@property (nonatomic) NSUInteger numOtherNotifications; // ivar: _numOtherNotifications


-(id)coreAnalyticsDictionary;
-(id)metricName;
-(void)populateMetricsFromDigest:(id)arg0 ;


@end


#endif