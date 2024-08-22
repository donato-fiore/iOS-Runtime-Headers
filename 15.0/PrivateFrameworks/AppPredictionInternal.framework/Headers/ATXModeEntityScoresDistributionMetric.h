// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODEENTITYSCORESDISTRIBUTIONMETRIC_H
#define ATXMODEENTITYSCORESDISTRIBUTIONMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXModeEntityScoresDistributionMetric : ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *modeEntityTypeIdentifier; // ivar: _modeEntityTypeIdentifier
@property (retain, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (retain, nonatomic) NSString *modeSemanticType; // ivar: _modeSemanticType
@property (nonatomic) CGFloat score; // ivar: _score


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif