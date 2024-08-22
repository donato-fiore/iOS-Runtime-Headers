// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCANDIDATERELEVANCEMODELCONFIG_H
#define ATXCANDIDATERELEVANCEMODELCONFIG_H

@class NSDictionary, NSString, ATXProactiveSuggestionClientModel, NSArray, NSSet;
@protocol ATXCandidateRelevanceModelDataStoreProtocol, ATXCandidateRelevanceModelTrainingPlanProtocol;

#import <Foundation/Foundation.h>


@interface ATXCandidateRelevanceModelConfig : NSObject {
    NSDictionary *_parameters;
}


@property (readonly, nonatomic) NSString *abGroupIdentifier; // ivar: _abGroupIdentifier
@property (retain, nonatomic) ATXProactiveSuggestionClientModel *clientModel; // ivar: _clientModel
@property (retain, nonatomic) NSObject<ATXCandidateRelevanceModelDataStoreProtocol> *datastore; // ivar: _datastore
@property (readonly, nonatomic) NSArray *featurizers; // ivar: _featurizers
@property (retain, nonatomic) NSSet *installedAppsKnownToSpringBoard; // ivar: _installedAppsKnownToSpringBoard
@property (retain, nonatomic) NSObject<ATXCandidateRelevanceModelTrainingPlanProtocol> *modelTrainingPlan; // ivar: _modelTrainingPlan


-(BOOL)candidateIsStillValidToSuggest:(id)arg0 ;
-(BOOL)isEnabled;
-(BOOL)shouldTrainModelWithCandidateDatasetMetadata:(id)arg0 ;
-(BOOL)shouldTrainModelWithOverallDatasetMetadata:(id)arg0 ;
-(BOOL)shouldTrainModelWithPositiveCandidateDatasetMetadata:(id)arg0 ;
-(float)dataHarvestingSamplingRate;
-(id)candidatePublisherFromStartTime:(CGFloat)arg0 ;
-(id)datasetGenerator;
-(id)heuristicSuggestionsForContext:(id)arg0 currentSuggestionExecutableIds:(id)arg1 ;
-(id)init;
-(id)initWithAppIconState:(id)arg0 ;
-(id)proactiveSuggestionForCandidate:(id)arg0 prediction:(float)arg1 ;
-(int)maximumNumberOfTrainedCandidates;
-(int)minimumNumberOfDaysWithPositiveSamplesForCandidate;
-(int)minimumNumberOfDaysWithPositiveSamplesOverall;
-(int)minimumNumberOfDaysWithSamplesForCandidate;
-(int)minimumNumberOfPositiveSamplesForCandidate;
-(int)minimumNumberOfPositiveSamplesOverall;
-(int)minimumNumberOfSamplesForCandidate;


@end


#endif