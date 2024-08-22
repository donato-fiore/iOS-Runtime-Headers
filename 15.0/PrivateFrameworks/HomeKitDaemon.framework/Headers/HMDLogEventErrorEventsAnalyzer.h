// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDLOGEVENTERROREVENTSANALYZER_H
#define HMDLOGEVENTERROREVENTSANALYZER_H

@class NSString, NSArray;
@protocol HMDLogEventDailyProvider, HMMLogEventSubmitting;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCountersManager.h"

@interface HMDLogEventErrorEventsAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // ivar: _eventCountersManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;


+(id)errorEventsRequestGroupKeys;
+(id)managedEventCounterRequestGroups;
-(id)currentErrorEventsAnalyzedSummary;
-(id)eventCounterNameForError:(id)arg0 ;
-(id)eventCounterRequestGroupNameForLogEvent:(id)arg0 ;
-(id)eventCounterRequestGroupNameForLogEvent:(id)arg0 underlyingError:(BOOL)arg1 ;
-(id)initWithEventCountersManager:(id)arg0 logEventSubmitter:(id)arg1 ;
-(void)_handleAccessoryPairingLogEvent:(id)arg0 ;
-(void)_handleCloudShareTrustManagerFailureLogEvent:(id)arg0 ;
-(void)_handleReadWriteLogEvent:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)resetEventCountersForAllErrorEventRequestGroups;
-(void)submitAllFormattedErrorAggregationLogEvents;
-(void)submitErrorAggregationLogEventsForErrorEventGroup:(id)arg0 ;


@end


#endif