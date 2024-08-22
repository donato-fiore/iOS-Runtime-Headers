// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDLOGEVENTMESSAGEEVENTSANALYZER_H
#define HMDLOGEVENTMESSAGEEVENTSANALYZER_H

@class NSUserDefaults;
@protocol HMDAggregationAnalysisEventContributing, HMMLogEventSubmitting;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCountersManager.h"

@interface HMDLogEventMessageEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

 {
    os_unfair_lock_s _lock;
}


@property (copy) id *dateFactory; // ivar: _dateFactory
@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // ivar: _eventCountersManager
@property CGFloat lastRemoteMessageEventsPeriodicSubmissionTime; // ivar: _lastRemoteMessageEventsPeriodicSubmissionTime
@property CGFloat lastXPCMessageEventsPeriodicSubmissionTime; // ivar: _lastXPCMessageEventsPeriodicSubmissionTime
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) NSUInteger periodicLoggingInterval; // ivar: _periodicLoggingInterval
@property (retain) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)managedEventCounterRequestGroups;
-(id)initWithEventCountersManager:(id)arg0 logEventSubmitter:(id)arg1 ;
-(id)initWithEventCountersManager:(id)arg0 logEventSubmitter:(id)arg1 userDefaults:(id)arg2 ;
-(id)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)arg0 ;
-(id)periodicRemoteMessageCounterEventNameWithMessageName:(id)arg0 peerInformation:(id)arg1 ;
-(id)transportTypeStringForRemoteMessageCounterRequestGroup:(id)arg0 ;
-(void)_handleRemoteMessageLogEvent:(id)arg0 ;
-(void)_handleXPCMessageCounterLogEvent:(id)arg0 ;
-(void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)arg0 messageDirectionSending:(BOOL)arg1 ;
-(void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)arg0 peerInformation:(id)arg1 transportType:(int)arg2 messageDirectionSending:(BOOL)arg3 identifier:(id)arg4 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)populateAggregationAnalysisLogEvent:(id)arg0 ;
-(void)resetAggregationAnalysisContext;
-(void)submitPeriodicAggregateCountersForRemoteMessageCounterRequestGroup:(id)arg0 ;
-(void)submitPeriodicAggregateCountersForXPCMessageCounterRequestGroup:(id)arg0 ;
-(void)submitPeriodicRemoteMessageCountersLogEventIfNeeded;
-(void)submitPeriodicXPCMessageCountersLogEventIfNeeded;


@end


#endif