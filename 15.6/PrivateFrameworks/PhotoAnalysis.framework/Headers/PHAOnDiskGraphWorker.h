// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAONDISKGRAPHWORKER_H
#define PHAONDISKGRAPHWORKER_H

@protocol PLPhotoAnalysisGraphServiceOnDiskProtocol;


#import "PHAWorker.h"

@interface PHAOnDiskGraphWorker : PHAWorker <PLPhotoAnalysisGraphServiceOnDiskProtocol>





+(BOOL)persistsState;
+(NSInteger)applicationDataFolderIdentifier;
+(short)workerType;
-(BOOL)hasAdditionalJobsForScenario:(NSUInteger)arg0 requestReason:(NSUInteger)arg1 ;
-(BOOL)startAnalysisJob:(id)arg0 error:(*id)arg1 ;
-(BOOL)stopAnalysisJob:(id)arg0 error:(*id)arg1 ;
-(id)graphCurrentlyUnavailableError;
-(id)nextAdditionalJobWithScenario:(NSUInteger)arg0 requestReason:(NSUInteger)arg1 ;
-(void)cooldown;
-(void)requestOnDiskContactInferencesForPersonLocalIdentifiers:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestOnDiskRelationshipInferencesForPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestOnDiskSuggestedContributionsForAssetsMetadata:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestOnDiskSuggestedPersonsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestOnDiskSuggestedRecipientsForAssetLocalIdentifiers:(id)arg0 momentLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id)arg4 ;
-(void)reset;
-(void)warmupWithProgressBlock:(id)arg0 ;


@end


#endif