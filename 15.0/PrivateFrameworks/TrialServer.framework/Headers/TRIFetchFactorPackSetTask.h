// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFETCHFACTORPACKSETTASK_H
#define TRIFETCHFACTORPACKSETTASK_H

@class NSDictionary, NSString, NSArray, TRIRolloutDeployment, NSString<TRIFactorPackSetId>, NSDate;
@protocol TRIRetryableTask, TRIMetricsProviding, TRITaskAttributing, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"
#import "TRIRolloutTaskSupport.h"

@interface TRIFetchFactorPackSetTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding>

 {
    id<TRITaskAttributing> *_taskAttribution;
    TRIRolloutTaskSupport *_support;
    NSDictionary *_factorRecordsByAssetId;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, nonatomic) TRIRolloutDeployment *deployment; // ivar: _deployment
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId; // ivar: _factorPackSetId
@property (readonly) NSUInteger hash;
@property (nonatomic) int retryCount; // ivar: retryCount
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;
@property (nonatomic) BOOL wasDeferred; // ivar: wasDeferred


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithFactorPackSetId:(id)arg0 taskAttribution:(id)arg1 rolloutDeployment:(id)arg2 ;
-(BOOL)_downloadAndSaveAssetsWithMetadata:(id)arg0 forFactorPackSet:(id)arg1 artifactProvider:(id)arg2 options:(id)arg3 downloadNotificationKey:(id)arg4 context:(id)arg5 assetsDownloadSize:(*NSUInteger)arg6 downloadedFactors:(id)arg7 errorResult:(*id)arg8 fetchError:(*id)arg9 ;
-(BOOL)_saveFactorPackSet:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredCapabilities;
-(id)_aliasesInFactorPack:(id)arg0 context:(id)arg1 ;
-(id)_asPersistedTask;
-(id)_downloadSetArtifactWithProvider:(id)arg0 downloadOptions:(id)arg1 downloadNotificationKey:(id)arg2 downloadSize:(*NSUInteger)arg3 errorResult:(*id)arg4 setArtifactFetchError:(*id)arg5 ;
-(id)_requiredAssetIdsForFactorPackSet:(id)arg0 context:(id)arg1 ;
-(id)_subscribedOnDemandFactorsForAssetIds:(id)arg0 factorPackSet:(id)arg1 context:(id)arg2 ;
-(id)dimensions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFactorPackSetId:(id)arg0 taskAttribution:(id)arg1 rolloutDeployment:(id)arg2 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(void)_logOnDemandFactor:(id)arg0 metricName:(id)arg1 namespaceName:(id)arg2 client:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif