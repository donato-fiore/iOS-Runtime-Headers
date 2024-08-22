// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSEREDUCATIONSUGGESTIONFEEDBACKMETRIC_H
#define ATXUSEREDUCATIONSUGGESTIONFEEDBACKMETRIC_H

@class ATXCoreAnalyticsMetric, ATXUserEducationSuggestionFeedback;



@interface ATXUserEducationSuggestionFeedbackMetric : ATXCoreAnalyticsMetric

@property (readonly, nonatomic) ATXUserEducationSuggestionFeedback *feedback; // ivar: _feedback


-(id)coreAnalyticsDictionary;
-(id)initWithFeedback:(id)arg0 ;


@end


#endif