// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDLOGEVENTDAILYSCHEDULER_H
#define HMDLOGEVENTDAILYSCHEDULER_H

@class HMFObject, NSString, NSDate, NSHashTable;
@protocol HMFLogging, HMMLogEventSubmitting, HMDXPCActivityInterfacing;



@interface HMDLogEventDailyScheduler : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (copy) id *dateFactory; // ivar: _dateFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastRunTime; // ivar: _lastRunTime
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (retain, nonatomic) NSHashTable *mutableTaskRunners; // ivar: _mutableTaskRunners
@property (readonly, nonatomic) NSString *preferencesKey; // ivar: _preferencesKey
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *xpcActivityIdentifier; // ivar: _xpcActivityIdentifier
@property (retain, nonatomic) NSObject<HMDXPCActivityInterfacing> *xpcActivityInterface; // ivar: _xpcActivityInterface


+(id)createSchedulerWithLogEventSubmitter:(id)arg0 ;
+(id)logCategory;
-(id)_criteriaForActivity;
-(id)initWithIdentifier:(id)arg0 preferencesKey:(id)arg1 logEventSubmitter:(id)arg2 xpcActivityInterface:(id)arg3 dateFactory:(id)arg4 ;
-(id)statusSummary;
-(id)taskRunners;
-(void)_handleCheckInForActivity:(id)arg0 ;
-(void)_registerActivity;
-(void)_runActivity:(id)arg0 ;
-(void)registerDailyTaskRunner:(id)arg0 ;
-(void)runDailyTasks;


@end


#endif