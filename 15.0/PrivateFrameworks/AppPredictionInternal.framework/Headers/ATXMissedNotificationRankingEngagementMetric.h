// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMISSEDNOTIFICATIONRANKINGENGAGEMENTMETRIC_H
#define ATXMISSEDNOTIFICATIONRANKINGENGAGEMENTMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXMissedNotificationRankingEngagementMetric : ATXCoreAnalyticsMetric

@property (nonatomic) CGFloat createdTimestamp; // ivar: _createdTimestamp
@property (nonatomic) CGFloat expireTimestamp; // ivar: _expireTimestamp
@property (retain, nonatomic) NSString *mnbUUID; // ivar: _mnbUUID
@property (retain, nonatomic) NSString *nextModeSemanticType; // ivar: _nextModeSemanticType
@property (nonatomic) NSUInteger numEngagementsAfterExpiration; // ivar: _numEngagementsAfterExpiration
@property (nonatomic) NSUInteger numEngagementsAfterShow; // ivar: _numEngagementsAfterShow
@property (nonatomic) NSUInteger numEngagementsInUpcoming; // ivar: _numEngagementsInUpcoming
@property (nonatomic) NSUInteger numExpansions; // ivar: _numExpansions
@property (nonatomic) NSUInteger numMessageEngagements; // ivar: _numMessageEngagements
@property (nonatomic) NSUInteger numMessageGroups; // ivar: _numMessageGroups
@property (nonatomic) NSUInteger numMessageNotifications; // ivar: _numMessageNotifications
@property (nonatomic) NSUInteger numOtherEngagements; // ivar: _numOtherEngagements
@property (nonatomic) NSUInteger numOtherGroups; // ivar: _numOtherGroups
@property (nonatomic) NSUInteger numOtherNotifications; // ivar: _numOtherNotifications
@property (retain, nonatomic) NSString *previousModeSemanticType; // ivar: _previousModeSemanticType
@property (nonatomic) CGFloat showTimestamp; // ivar: _showTimestamp


-(id)coreAnalyticsDictionary;
-(id)metricName;
-(void)populateMetricsFromRanking:(id)arg0 ;


@end


#endif