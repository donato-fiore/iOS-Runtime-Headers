// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIHOMEPERSONCLUSTERINGTASK_H
#define HMIHOMEPERSONCLUSTERINGTASK_H

@class NSUUID, NSDate;
@protocol HMIFaceClassifier, HMIHomePersonManagerDataSource;


#import "HMIHomeTask.h"
#import "HMIGreedyClustering.h"
#import "HMIPersonsModelManager.h"
#import "HMIClusteringTaskSummary.h"

@interface HMIHomePersonClusteringTask : HMIHomeTask {
    HMIGreedyClustering *_clusterer;
    id<HMIFaceClassifier> *_faceClassifier;
    os_unfair_lock_s _lock;
}


@property (readonly) NSObject<HMIHomePersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly) BOOL doImpurePersonCleanup; // ivar: _doImpurePersonCleanup
@property (readonly) HMIPersonsModelManager *personsModelManager; // ivar: _personsModelManager
@property (readonly) NSUUID *sourceUUID; // ivar: _sourceUUID
@property (readonly) NSDate *startTime; // ivar: _startTime
@property (readonly) HMIClusteringTaskSummary *summary; // ivar: _summary


+(id)logCategory;
-(id)initWithTaskID:(int)arg0 homeUUID:(id)arg1 dataSource:(id)arg2 sourceUUID:(id)arg3 personsModelManager:(id)arg4 doImpurePersonCleanup:(BOOL)arg5 error:(*id)arg6 ;
-(id)personCreatedDateFromFaceCrops:(id)arg0 ;
-(void)_stageFive_addPersons:(id)arg0 clusterMapping:(id)arg1 faceprints:(id)arg2 ;
-(void)_stageFour_clusterFaceprints:(id)arg0 ;
-(void)_stageOne_fetchFaceCrops;
-(void)_stageSix_associateFaceCropsWithClusterMapping:(id)arg0 faceprints:(id)arg1 ;
-(void)_stageThree_generateFaceprintsForFaceCrops:(id)arg0 existingFaceprints:(id)arg1 ;
-(void)_stageTwo_fetchFaceprints:(id)arg0 ;
-(void)_stageZero_expireUnnamedPersons;
-(void)finish;
-(void)mainInsideAutoreleasePool;
-(void)removePerson:(id)arg0 ;


@end


#endif