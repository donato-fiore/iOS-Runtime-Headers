// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFBITACORASTATEINFO_H
#define LBFBITACORASTATEINFO_H

@class NSArray, NSDate, NSUUID, NSNumber, NSMutableArray, BMLighthouseLedgerTrialIdentifiers;

#import <Foundation/Foundation.h>


@interface LBFBitacoraStateInfo : NSObject

@property (readonly, nonatomic) NSArray *bitacoraEvents; // ivar: _bitacoraEvents
@property (readonly, nonatomic) NSArray *bitacoraStateTransitions; // ivar: _bitacoraStateTransitions
@property (readonly, nonatomic) NSDate *bucketEndTime; // ivar: _bucketEndTime
@property (readonly, nonatomic) NSDate *bucketStartTime; // ivar: _bucketStartTime
@property (readonly, nonatomic) NSUUID *contextId; // ivar: _contextId
@property (readonly, nonatomic) NSNumber *count_Activated_Failed; // ivar: _count_Activated_Failed
@property (readonly, nonatomic) NSNumber *count_Activated_Succeeded; // ivar: _count_Activated_Succeeded
@property (readonly, nonatomic) NSNumber *count_Allocated_Failed; // ivar: _count_Allocated_Failed
@property (readonly, nonatomic) NSNumber *count_Allocated_Succeeded; // ivar: _count_Allocated_Succeeded
@property (readonly, nonatomic) NSNumber *count_Deactivated_Failed; // ivar: _count_Deactivated_Failed
@property (readonly, nonatomic) NSNumber *count_Deactivated_Succeeded; // ivar: _count_Deactivated_Succeeded
@property (readonly, nonatomic) NSNumber *count_PerformTask_Failed; // ivar: _count_PerformTask_Failed
@property (readonly, nonatomic) NSNumber *count_PerformTask_Succeeded; // ivar: _count_PerformTask_Succeeded
@property (readonly, nonatomic) NSNumber *count_Stop_Failed; // ivar: _count_Stop_Failed
@property (readonly, nonatomic) NSNumber *count_Stop_Succeeded; // ivar: _count_Stop_Succeeded
@property (readonly, nonatomic) NSNumber *count_TaskCompleted_Failed; // ivar: _count_TaskCompleted_Failed
@property (readonly, nonatomic) NSNumber *count_TaskCompleted_Succeeded; // ivar: _count_TaskCompleted_Succeeded
@property (readonly, nonatomic) NSNumber *count_TaskFetched_Failed; // ivar: _count_TaskFetched_Failed
@property (readonly, nonatomic) NSNumber *count_TaskFetched_Succeeded; // ivar: _count_TaskFetched_Succeeded
@property (readonly, nonatomic) NSNumber *count_TaskScheduled_Failed; // ivar: _count_TaskScheduled_Failed
@property (readonly, nonatomic) NSNumber *count_TaskScheduled_Succeeded; // ivar: _count_TaskScheduled_Succeeded
@property (readonly, nonatomic) NSNumber *isActivated; // ivar: _isActivated
@property (nonatomic) BOOL isActivated_implicit; // ivar: _isActivated_implicit
@property (readonly, nonatomic) NSNumber *isAllocated; // ivar: _isAllocated
@property (nonatomic) BOOL isAllocated_implicit; // ivar: _isAllocated_implicit
@property (nonatomic) NSInteger latestState; // ivar: _latestState
@property (readonly, nonatomic) NSUUID *stateId; // ivar: _stateId
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_Activated; // ivar: _timedeltas_To_State_Activated
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_ActivatedFailed; // ivar: _timedeltas_To_State_ActivatedFailed
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_Allocated; // ivar: _timedeltas_To_State_Allocated
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_AllocatedFailed; // ivar: _timedeltas_To_State_AllocatedFailed
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_Deactivated; // ivar: _timedeltas_To_State_Deactivated
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_DeactivatedFailed; // ivar: _timedeltas_To_State_DeactivatedFailed
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_PerformTask; // ivar: _timedeltas_To_State_PerformTask
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_PerformTaskFailed; // ivar: _timedeltas_To_State_PerformTaskFailed
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_PluginStop; // ivar: _timedeltas_To_State_PluginStop
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_PluginStopFailed; // ivar: _timedeltas_To_State_PluginStopFailed
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_TaskCompleted; // ivar: _timedeltas_To_State_TaskCompleted
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_TaskCompletedFailed; // ivar: _timedeltas_To_State_TaskCompletedFailed
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_TaskFetched; // ivar: _timedeltas_To_State_TaskFetched
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_TaskFetchedFailed; // ivar: _timedeltas_To_State_TaskFetchedFailed
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_TaskScheduled; // ivar: _timedeltas_To_State_TaskScheduled
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_TaskScheduledFailed; // ivar: _timedeltas_To_State_TaskScheduledFailed
@property (readonly, nonatomic) NSMutableArray *timedeltas_To_State_Unexpeted; // ivar: _timedeltas_To_State_Unexpeted
@property (readonly, nonatomic) NSDate *timestamp_Activated_Failed; // ivar: _timestamp_Activated_Failed
@property (readonly, nonatomic) NSDate *timestamp_Activated_Succeeded; // ivar: _timestamp_Activated_Succeeded
@property (readonly, nonatomic) NSDate *timestamp_Allocated_Failed; // ivar: _timestamp_Allocated_Failed
@property (readonly, nonatomic) NSDate *timestamp_Allocated_Succeeded; // ivar: _timestamp_Allocated_Succeeded
@property (readonly, nonatomic) NSDate *timestamp_Deactivated_Failed; // ivar: _timestamp_Deactivated_Failed
@property (readonly, nonatomic) NSDate *timestamp_Deactivated_Succeeded; // ivar: _timestamp_Deactivated_Succeeded
@property (readonly, nonatomic) NSDate *timestamp_PerformTask_Failed; // ivar: _timestamp_PerformTask_Failed
@property (readonly, nonatomic) NSDate *timestamp_PerformTask_Succeeded; // ivar: _timestamp_PerformTask_Succeeded
@property (readonly, nonatomic) NSDate *timestamp_Stop_Failed; // ivar: _timestamp_Stop_Failed
@property (readonly, nonatomic) NSDate *timestamp_Stop_Succeeded; // ivar: _timestamp_Stop_Succeeded
@property (readonly, nonatomic) NSDate *timestamp_TaskCompleted_Failed; // ivar: _timestamp_TaskCompleted_Failed
@property (readonly, nonatomic) NSDate *timestamp_TaskCompleted_Succeeded; // ivar: _timestamp_TaskCompleted_Succeeded
@property (readonly, nonatomic) NSDate *timestamp_TaskFetched_Failed; // ivar: _timestamp_TaskFetched_Failed
@property (readonly, nonatomic) NSDate *timestamp_TaskFetched_Succeeded; // ivar: _timestamp_TaskFetched_Succeeded
@property (readonly, nonatomic) NSDate *timestamp_TaskScheduled_Failed; // ivar: _timestamp_TaskScheduled_Failed
@property (readonly, nonatomic) NSDate *timestamp_TaskScheduled_Succeeded; // ivar: _timestamp_TaskScheduled_Succeeded
@property (readonly, nonatomic) BMLighthouseLedgerTrialIdentifiers *trialIdentifiers; // ivar: _trialIdentifiers


+(id)getCAEventDictionaryFromBiomeEvent:(id)arg0 ;
-(BOOL)uploadRawEventsToCoreAnalytics;
-(BOOL)uploadToCoreAnalytics;
-(id)getDictionaryRepresentation;
-(id)getPETState;
-(id)initWithBitcoraState:(id)arg0 bucketStartTime:(id)arg1 bucketEndTime:(id)arg2 observedTrialStatus:(id)arg3 bitacoraStateTransitions:(id)arg4 bitacoraEvents:(id)arg5 ;
-(id)maxTimedelta_To_State_Activated;
-(id)maxTimedelta_To_State_ActivatedFailed;
-(id)maxTimedelta_To_State_Allocated;
-(id)maxTimedelta_To_State_AllocatedFailed;
-(id)maxTimedelta_To_State_Deativated;
-(id)maxTimedelta_To_State_DeativatedFailed;
-(id)maxTimedelta_To_State_PerformTask;
-(id)maxTimedelta_To_State_PerformTaskFailed;
-(id)maxTimedelta_To_State_TaskCompleted;
-(id)maxTimedelta_To_State_TaskCompletedFailed;
-(id)maxTimedelta_To_State_TaskFetched;
-(id)maxTimedelta_To_State_TaskFetchedFailed;
-(id)maxTimedelta_To_State_TaskScheduled;
-(id)maxTimedelta_To_State_TaskScheduledFailed;
-(id)maxTimedelta_To_State_Unexpeted;
-(void)iterateEvents;
-(void)iterateTransitions;


@end


#endif