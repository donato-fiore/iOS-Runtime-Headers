// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDIGESTGROUPENGAGEMENTMETRIC_H
#define ATXDIGESTGROUPENGAGEMENTMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXDigestGroupEngagementMetric : ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSString *digestUUID; // ivar: _digestUUID
@property (nonatomic) CGFloat groupScore; // ivar: _groupScore
@property (nonatomic) BOOL hasImage; // ivar: _hasImage
@property (nonatomic) NSUInteger numEngagementsAfterExpiration; // ivar: _numEngagementsAfterExpiration
@property (nonatomic) NSUInteger numEngagementsInScheduled; // ivar: _numEngagementsInScheduled
@property (nonatomic) NSUInteger numEngagementsInUpcoming; // ivar: _numEngagementsInUpcoming
@property (nonatomic) NSUInteger numExpansions; // ivar: _numExpansions
@property (nonatomic) NSUInteger numNotifications; // ivar: _numNotifications
@property (retain, nonatomic) NSString *section; // ivar: _section
@property (nonatomic) NSUInteger sectionPosition; // ivar: _sectionPosition
@property (nonatomic) NSUInteger sectionSize; // ivar: _sectionSize


-(id)coreAnalyticsDictionary;
-(id)metricName;
-(void)populateMetricsFromDigestGroup:(id)arg0 digestUUID:(id)arg1 ;


@end


#endif