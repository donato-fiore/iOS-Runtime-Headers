// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCANDIDATERELEVANCEMODELCONFIGMINIMALACTION_H
#define ATXCANDIDATERELEVANCEMODELCONFIGMINIMALACTION_H



#import "ATXCandidateRelevanceModelConfig.h"
#import "ATXActionPredictionBlacklist.h"
#import "ATXDigitalHealthBlacklist.h"

@interface ATXCandidateRelevanceModelConfigMinimalAction : ATXCandidateRelevanceModelConfig

@property (retain, nonatomic) ATXActionPredictionBlacklist *actionBlacklist; // ivar: _actionBlacklist
@property (retain, nonatomic) ATXDigitalHealthBlacklist *appDigitalHealthBlacklist; // ivar: _appDigitalHealthBlacklist


-(BOOL)candidateIsStillValidToSuggest:(id)arg0 ;
-(id)candidatePublisherFromStartTime:(CGFloat)arg0 ;
-(id)datasetGenerator;
-(id)heuristicSuggestionsForContext:(id)arg0 currentSuggestionExecutableIds:(id)arg1 ;
-(id)init;
-(id)proactiveSuggestionForCandidate:(id)arg0 prediction:(float)arg1 ;


@end


#endif