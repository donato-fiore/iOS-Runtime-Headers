// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINFORMATIONPROBABILISTICRANKER_H
#define ATXINFORMATIONPROBABILISTICRANKER_H

@protocol ATXInformationRankerProtocol;

#import <Foundation/Foundation.h>


@interface ATXInformationProbabilisticRanker : NSObject <ATXInformationRankerProtocol>





-(CGFloat)_standardUniformDistribution;
-(CGFloat)_tieBreakingScoreForSuggestion:(id)arg0 ;
-(id)_groupSuggestionsByConfidenceLevel:(id)arg0 ;
-(id)_rankNumbersProbabilistically:(id)arg0 ;
-(id)_rankSuggestionsProbabilistically:(id)arg0 ;
-(id)_smooth:(id)arg0 ;
-(id)_tieBreakingScoresForSuggestions:(id)arg0 ;
-(id)sortFeaturizedSuggestions:(id)arg0 withFeatureWeights:(id)arg1 ;


@end


#endif