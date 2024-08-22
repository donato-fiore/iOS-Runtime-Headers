// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENFOCUSSUGGESTIONMETRICS_H
#define ATXHOMESCREENFOCUSSUGGESTIONMETRICS_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXHomeScreenFocusSuggestionMetrics : ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *modeSemanticType; // ivar: _modeSemanticType
@property (nonatomic) NSInteger outcome; // ivar: _outcome


-(NSUInteger)cappedForPrivacyWithValue:(NSInteger)arg0 ;
-(id)coreAnalyticsDictionary;
-(id)description;
-(id)metricName;
-(id)outcomeToString:(NSInteger)arg0 ;


@end


#endif