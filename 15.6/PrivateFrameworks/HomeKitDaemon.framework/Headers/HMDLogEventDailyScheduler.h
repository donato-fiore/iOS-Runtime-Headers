// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (retain, nonatomic) NSHashTable *mutableLogEventDailyProviders; // ivar: _mutableLogEventDailyProviders
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *xpcActivityIdentifier; // ivar: _xpcActivityIdentifier
@property (retain, nonatomic) NSObject<HMDXPCActivityInterfacing> *xpcActivityInterface; // ivar: _xpcActivityInterface


+(id)logCategory;
+(id)sharedInstance;
-(id)_criteriaForActivity;
-(id)init;
-(id)initWithIdentifier:(id)arg0 logEventSubmitter:(id)arg1 xpcActivityInterface:(id)arg2 dateFactory:(id)arg3 ;
-(id)logEventDailyProviders;
-(id)statusSummary;
-(void)_handleCheckInForActivity:(id)arg0 ;
-(void)_registerActivity;
-(void)_runActivity:(id)arg0 ;
-(void)_runRegisteredBlocks;
-(void)forceRunRegisteredBlocks;
-(void)registerLogEventDailyProvider:(id)arg0 ;


@end


#endif