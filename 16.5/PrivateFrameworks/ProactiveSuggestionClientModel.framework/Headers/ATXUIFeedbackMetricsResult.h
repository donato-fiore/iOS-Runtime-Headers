// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUIFEEDBACKMETRICSRESULT_H
#define ATXUIFEEDBACKMETRICSRESULT_H


#import <Foundation/Foundation.h>

#import "ATXUIFeedbackMetricsResultSection.h"
#import "ATXTrendPlot.h"

@interface ATXUIFeedbackMetricsResult : NSObject

@property (readonly, nonatomic) ATXUIFeedbackMetricsResultSection *sectionForEngagedSuggestions; // ivar: _sectionForEngagedSuggestions
@property (readonly, nonatomic) ATXUIFeedbackMetricsResultSection *sectionForRejectedSuggestions; // ivar: _sectionForRejectedSuggestions
@property (readonly, nonatomic) ATXUIFeedbackMetricsResultSection *sectionForShownSuggestions; // ivar: _sectionForShownSuggestions
@property (readonly, nonatomic) ATXTrendPlot *trendPlot; // ivar: _trendPlot


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUIFeedbackMetricsResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithSpecification:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;


@end


#endif