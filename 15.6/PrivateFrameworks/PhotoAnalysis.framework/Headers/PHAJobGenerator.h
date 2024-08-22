// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAJOBGENERATOR_H
#define PHAJOBGENERATOR_H

@class NSMutableDictionary, PHPhotoLibrary;

#import <Foundation/Foundation.h>

#import "PHAWorkerHealthMonitor.h"

@interface PHAJobGenerator : NSObject {
    BOOL _skippedSomeWorker;
}


@property (readonly, nonatomic) NSMutableDictionary *countOfJobsGeneratedByWorkerType; // ivar: _countOfJobsGeneratedByWorkerType
@property (nonatomic) NSInteger generatedJobCountGoal; // ivar: _generatedJobCountGoal
@property BOOL graphIncompatibleWorkersAreInhibited; // ivar: _graphIncompatibleWorkersAreInhibited
@property (readonly, nonatomic) PHAWorkerHealthMonitor *healthMonitor; // ivar: _healthMonitor
@property (readonly, nonatomic) PHPhotoLibrary *library; // ivar: _library
@property (readonly, nonatomic) NSMutableDictionary *workInfoReadersByMode; // ivar: _workInfoReadersByMode


+(NSInteger)maxBatchSize;
-(BOOL)_anyWorkerIsLoadBalanceSkipping;
-(BOOL)_shouldLoadBalanceSkipForWorkerType:(short)arg0 ;
-(BOOL)_workerUnavailableForWorkerType:(short)arg0 defaultsDisabledKey:(id)arg1 unavailableReason:(*id)arg2 ;
-(id)_produceAssetAnalysisOrAdditionalJobWithForWorkerType:(id)arg0 workInfoReaderMode:(id)arg1 scenario:(NSUInteger)arg2 allowLoadBalanceSkip:(BOOL)arg3 additionalStatesToExclude:(id)arg4 askAboutAdditionalJobs:(BOOL)arg5 canUseNetwork:(BOOL)arg6 defaultsDisabledKey:(id)arg7 failureReason:(*id)arg8 ;
-(id)_transformWorkInfoByUUIDToWorkInfoByLocalIdentifier:(id)arg0 ;
-(id)_workerTypesEligibleForLoadBalanceSkipping;
-(id)generateJobWithCurrentConstraints:(id)arg0 workersByType:(id)arg1 ;
-(id)initWithHealthMonitor:(id)arg0 library:(id)arg1 ;
-(void)_increaseGoalLevelIfNeeeded;
-(void)_incrementGeneratedJobCountForWorkerType:(short)arg0 ;
-(void)_jumpToGoalJobCountForWorkerType:(short)arg0 ;


@end


#endif