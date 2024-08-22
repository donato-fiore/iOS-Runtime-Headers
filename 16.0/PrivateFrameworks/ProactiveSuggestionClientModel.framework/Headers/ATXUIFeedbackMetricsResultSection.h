// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUIFEEDBACKMETRICSRESULTSECTION_H
#define ATXUIFEEDBACKMETRICSRESULTSECTION_H


#import <Foundation/Foundation.h>

#import "ATXCategoricalAttributeBreakdown.h"
#import "ATXScoreDistribution.h"

@interface ATXUIFeedbackMetricsResultSection : NSObject

@property (readonly, nonatomic) ATXCategoricalAttributeBreakdown *clientModelBreakdown; // ivar: _clientModelBreakdown
@property (readonly, nonatomic) ATXCategoricalAttributeBreakdown *confidenceBreakdown; // ivar: _confidenceBreakdown
@property (readonly, nonatomic) ATXCategoricalAttributeBreakdown *consumerSubTypeBreakdown; // ivar: _consumerSubTypeBreakdown
@property (readonly, nonatomic) ATXCategoricalAttributeBreakdown *predictionReasonCodeBreakdown; // ivar: _predictionReasonCodeBreakdown
@property (readonly, nonatomic) ATXScoreDistribution *scoreDistribution; // ivar: _scoreDistribution


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUIFeedbackMetricsResultSection:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;


@end


#endif