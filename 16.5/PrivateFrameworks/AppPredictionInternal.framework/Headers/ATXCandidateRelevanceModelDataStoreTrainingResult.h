// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCANDIDATERELEVANCEMODELDATASTORETRAININGRESULT_H
#define ATXCANDIDATERELEVANCEMODELDATASTORETRAININGRESULT_H

@class NSString, NSUUID, NSDate;

#import <Foundation/Foundation.h>

#import "ATXCandidate.h"
#import "ATXCandidateRelevanceModelDataStoreDatasetMetadata.h"
#import "ATXCandidateRelevanceModelFeaturizationManager.h"
#import "ATXCandidateRelevanceModel.h"

@interface ATXCandidateRelevanceModelDataStoreTrainingResult : NSObject

@property (readonly, nonatomic) ATXCandidate *candidate; // ivar: _candidate
@property (readonly, nonatomic) NSString *clientModelName; // ivar: _clientModelName
@property (readonly, nonatomic) ATXCandidateRelevanceModelDataStoreDatasetMetadata *datasetMetadata; // ivar: _datasetMetadata
@property (readonly, nonatomic) ATXCandidateRelevanceModelFeaturizationManager *featurizationManager; // ivar: _featurizationManager
@property (readonly, nonatomic) BOOL isVerified; // ivar: _isVerified
@property (readonly, nonatomic) ATXCandidateRelevanceModel *model; // ivar: _model
@property (readonly, nonatomic) NSUUID *modelUUID; // ivar: _modelUUID
@property (readonly, nonatomic) NSDate *trainDate; // ivar: _trainDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXCandidateRelevanceModelDataStoreTrainingResult:(id)arg0 ;
-(id)description;
-(id)initWithModel:(id)arg0 candidate:(id)arg1 featurizationManager:(id)arg2 modelUUID:(id)arg3 datasetMetadata:(id)arg4 clientModelName:(id)arg5 trainDate:(id)arg6 isVerified:(BOOL)arg7 ;


@end


#endif