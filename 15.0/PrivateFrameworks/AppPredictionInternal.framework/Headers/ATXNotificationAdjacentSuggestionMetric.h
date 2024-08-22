// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONADJACENTSUGGESTIONMETRIC_H
#define ATXNOTIFICATIONADJACENTSUGGESTIONMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXNotificationAdjacentSuggestionMetric : ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) BOOL isAddToMode; // ivar: _isAddToMode
@property (nonatomic) CGFloat suggestionCompletionTimestamp; // ivar: _suggestionCompletionTimestamp
@property (retain, nonatomic) NSString *suggestionOutcome; // ivar: _suggestionOutcome
@property (retain, nonatomic) NSString *suggestionScope; // ivar: _suggestionScope
@property (retain, nonatomic) NSString *suggestionType; // ivar: _suggestionType
@property (retain, nonatomic) NSString *targetMode; // ivar: _targetMode
@property (nonatomic) CGFloat timeToOutcome; // ivar: _timeToOutcome


-(id)coreAnalyticsDictionary;
-(id)metricName;


@end


#endif