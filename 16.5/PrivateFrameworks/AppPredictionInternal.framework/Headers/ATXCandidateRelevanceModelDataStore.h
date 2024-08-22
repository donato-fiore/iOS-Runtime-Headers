// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCANDIDATERELEVANCEMODELDATASTORE_H
#define ATXCANDIDATERELEVANCEMODELDATASTORE_H

@class NSString;
@protocol ATXCandidateRelevanceModelDataStoreProtocol;

#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"

@interface ATXCandidateRelevanceModelDataStore : NSObject <ATXCandidateRelevanceModelDataStoreProtocol>

 {
    _ATXDataStore *_dataStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isModelUUIDVerified:(id)arg0 ;
-(NSInteger)candidateIdForCandidate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)datasetMetadataIdForDatasetMetadata:(id)arg0 error:(*id)arg1 ;
-(NSInteger)featurizationManagerIdForFeaturizationManager:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)numberOfCandidateIds;
-(NSUInteger)numberOfDatasetMetadataIds;
-(NSUInteger)numberOfFeaturizationManagerIds;
-(NSUInteger)numberOfTrainedModels;
-(id)cachedCandidatesForModelId:(id)arg0 earliestDate:(id)arg1 ;
-(id)clientModelNamesWithTrainedRelevanceModels;
-(id)idsInTableWithName:(id)arg0 ;
-(id)init;
-(id)initWithDataStore:(id)arg0 ;
-(id)modelUUIDToTrainDateForClientModelName:(id)arg0 ;
-(id)mostRecentVerifiedTrainDateForClientModelName:(id)arg0 ;
-(id)mostRecentVerifiedTrainingResultsForClientModelName:(id)arg0 ;
-(id)trainingResultsForClientModelName:(id)arg0 modelUUID:(id)arg1 ;
-(void)cacheSelectedCandidates:(id)arg0 featurizationManager:(id)arg1 modelId:(id)arg2 ;
-(void)deleteCachedCandidatesForModelId:(id)arg0 ;
-(void)deleteRowsWithIds:(id)arg0 fromTableWithName:(id)arg1 ;
-(void)deleteTrainedModelsWithTrainDateOlderThanDate:(id)arg0 ;
// -(void)receiveMostRecentVerifiedTrainedModelTrainingResults:(id)arg0 clientModelName:(unk)arg1 completion:(id)arg2  ;
// -(void)receiveMostRecentVerifiedTrainedModelTrainingResults:(id)arg0 completion:(unk)arg1  ;
// -(void)receiveTrainingResult:(id)arg0 completion:(unk)arg1 modelUUID:(id)arg2 clientModelName:(unk)arg3  ;
-(void)writeSuccessfulVerificationForModelUUID:(id)arg0 ;
-(void)writeTrainingResult:(id)arg0 ;
-(void)writeVerificationStatusForModelUUID:(id)arg0 clientModelName:(id)arg1 expectedNumberOfModels:(NSUInteger)arg2 ;


@end


#endif