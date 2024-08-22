// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIFETCHTREATMENTTASK_H
#define TRIFETCHTREATMENTTASK_H

@class NSString, NSArray, NSDate;
@protocol TRIRetryableTask, TRITaskQueueStateProviding;


#import "TRITreatmentBaseTask.h"

@interface TRIFetchTreatmentTask : TRITreatmentBaseTask <TRIRetryableTask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
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
+(id)taskWithExperiment:(id)arg0 treatmentId:(id)arg1 taskAttributing:(id)arg2 ;
-(NSUInteger)requiredCapabilities:(id)arg0 ;
-(id)_asPersistedTask;
-(id)_fetchAssetsWithArtifactProvider:(id)arg0 recordId:(id)arg1 experimentRecord:(id)arg2 assetIndexes:(id)arg3 downloadOptions:(id)arg4 context:(id)arg5 assetURLs:(*id)arg6 treatmentFetchError:(*id)arg7 ;
-(id)_fetchTreatmentWithArtifactProvider:(id)arg0 experimentRecord:(id)arg1 downloadOptions:(id)arg2 context:(id)arg3 treatment:(*id)arg4 treatmentSize:(*NSUInteger)arg5 recordId:(*id)arg6 treatmentFetchError:(*id)arg7 ;
-(id)_namespaceDescriptorForNamespaceName:(id)arg0 fromExperimentRecord:(id)arg1 referencingFactorsURL:(id)arg2 ;
-(id)_nextTasksForRunStatus:(int)arg0 ;
-(id)_saveTreatment:(id)arg0 experimentRecord:(id)arg1 assetURLs:(id)arg2 assetMetadata:(id)arg3 context:(id)arg4 paths:(id)arg5 downloadOptions:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(unsigned int)_ncvForNamespaceName:(id)arg0 inExperimentRecord:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)runDequeueHandlerUsingContext:(id)arg0 ;
-(void)runEnqueueHandlerUsingContext:(id)arg0 ;


@end


#endif