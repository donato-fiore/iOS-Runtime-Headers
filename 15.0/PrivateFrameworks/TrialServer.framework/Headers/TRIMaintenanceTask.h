// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIMAINTENANCETASK_H
#define TRIMAINTENANCETASK_H

@class _PASLock, NSString, NSArray, NSDate;
@protocol TRITask, TRIMetricsProviding, OS_dispatch_queue, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"

@interface TRIMaintenanceTask : TRIBaseTask <TRITask, TRIMetricsProviding>

 {
    NSObject<OS_dispatch_queue> *_channelCleanupQueue;
    _PASLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)task;
-(BOOL)_cleanupLocalTempStorageWithPaths:(id)arg0 ;
-(BOOL)_cleanupTreatmentWithTreatmentId:(id)arg0 paths:(id)arg1 ;
-(BOOL)_cleanupUnusedContentWithContext:(id)arg0 ;
-(id)_asPersistedTask;
-(id)_getFreeDiskSpace;
-(id)_getPurgeableDiskSpace;
-(id)dimensions;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(void)_handleExpiredExperimentsWithExperimentDatabase:(id)arg0 nextTasks:(id)arg1 ;
-(void)_handleOrphanedNamespacesWithNamespaceDatabase:(id)arg0 nextTasks:(id)arg1 ;
-(void)_reportStorageUsageUsingContext:(id)arg0 ;
-(void)_synchronizePushService:(id)arg0 usingRolloutDatabase:(id)arg1 experimentDatabase:(id)arg2 ;
-(void)addDimension:(id)arg0 ;
-(void)addMetric:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeTelemetry:(id)arg0 ;


@end


#endif