// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFETCHONDEMANDFACTORSTASK_H
#define TRIFETCHONDEMANDFACTORSTASK_H

@class NSDictionary, NSSet, NSString, TRITrialSystemTelemetry, NSMutableArray, _PASLock, NSMutableDictionary, NSArray, TRIRolloutDeployment, NSDate;
@protocol TRIRetryableTask, TRIMetricsProviding, TRICancellableTask, TRITaskAttributing, TRIArtifactProvider, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"

@interface TRIFetchOnDemandFactorsTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding, TRICancellableTask>

 {
    NSDictionary *_assetIndexesByTreatment;
    NSDictionary *_assetIdsByFactorPack;
    NSSet *_rolloutFactorNames;
    NSString *_namespaceName;
    id<TRITaskAttributing> *_taskAttributing;
    int _retryCount;
    NSString *_notificationKey;
    uint8_t _isCurrentlyExecuting;
    TRITrialSystemTelemetry *_trialSystemTelemetry;
    NSMutableArray *_metrics;
    NSMutableArray *_dimensions;
    id<TRIArtifactProvider> *_artifactProvider;
    _PASLock *_lock;
    NSMutableDictionary *_factorNameByAssetId;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, nonatomic) TRIRolloutDeployment *deployment; // ivar: _deployment
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCurrentlyExecuting;
@property (nonatomic) int retryCount;
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSObject<TRITaskAttributing> *taskAttribution;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;
@property (nonatomic) BOOL wasDeferred; // ivar: wasDeferred


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithAssetIndexesByTreatment:(id)arg0 experimentId:(id)arg1 assetIdsByFactorPack:(id)arg2 rolloutFactorNames:(id)arg3 rolloutDeployment:(id)arg4 namespaceName:(id)arg5 taskAttributing:(id)arg6 notificationKey:(id)arg7 ;
-(BOOL)_saveIndexedAssetURLs:(id)arg0 withTreatmentId:(id)arg1 usingAssetMetadata:(id)arg2 paths:(id)arg3 downloadSize:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)_saveNamedAssetURLs:(id)arg0 usingAssetMetadata:(id)arg1 downloadSize:(*NSUInteger)arg2 paths:(id)arg3 error:(*id)arg4 ;
-(BOOL)_updateFactorPacksByMergingAssetsWithIds:(id)arg0 paths:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredCapabilities;
-(id)_asPersistedTask;
-(id)_assetIdsFromKeysInDictionary:(id)arg0 ;
-(id)_currentTaskStatus;
-(id)_fetchDiffsFromAssetDiffRecordsWithContext:(id)arg0 plan:(id)arg1 aggregateProgress:(id)arg2 downloadSize:(*NSUInteger)arg3 options:(id)arg4 downloadedFactors:(id)arg5 ;
-(id)_fetchOptionsWithDownloadOptions:(id)arg0 paths:(id)arg1 ;
-(id)_planForFetchingAssetDiffsWithContext:(id)arg0 downloadOptions:(id)arg1 updatingAggregateProgress:(id)arg2 nonDiffableAssetIds:(*id)arg3 ;
-(id)_planForFetchingAssetsFromFactorPacksWithContext:(id)arg0 assetDiffFetchPlan:(id)arg1 requiredAssetIds:(id)arg2 downloadOptions:(id)arg3 updatingAggregateProgress:(id)arg4 ;
-(id)_planForFetchingAssetsFromTreatmentRecordsWithContext:(id)arg0 downloadOptions:(id)arg1 updatingAggregateProgress:(id)arg2 ;
-(id)_telemetryForFactorPackIds:(id)arg0 rolloutDeployment:(id)arg1 treatmentIds:(id)arg2 experimentId:(id)arg3 namespaceName:(id)arg4 taskAttributing:(id)arg5 ;
-(id)dimensions;
-(id)initWithAssetIndexesByTreatment:(id)arg0 experimentId:(id)arg1 assetIdsByFactorPack:(id)arg2 rolloutFactorNames:(id)arg3 rolloutDeployment:(id)arg4 namespaceName:(id)arg5 taskAttributing:(id)arg6 notificationKey:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(void)_addDimension:(id)arg0 ;
-(void)_addMetric:(id)arg0 ;
-(void)_asyncFetchAssetsFromAssetRecordsWithContext:(id)arg0 plan:(id)arg1 aggregateProgress:(id)arg2 downloadSize:(*NSUInteger)arg3 options:(id)arg4 group:(id)arg5 downloadedFactors:(id)arg6 ;
-(void)_asyncFetchAssetsFromTreatmentRecordsWithContext:(id)arg0 plan:(id)arg1 aggregateProgress:(id)arg2 downloadSize:(*NSUInteger)arg3 downloadOptions:(id)arg4 group:(id)arg5 ;
-(void)_completeTaskWithStatus:(int)arg0 earliestRetryDate:(id)arg1 error:(id)arg2 aggregateProgress:(id)arg3 context:(id)arg4 ;
-(void)_logOnDemandFactor:(id)arg0 metricName:(id)arg1 namespaceName:(id)arg2 client:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)willBeCancelledByTaskQueue:(id)arg0 withContext:(id)arg1 ;


@end


#endif