// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDLOGEVENTUSERACTIVITYANALYZER_H
#define HMDLOGEVENTUSERACTIVITYANALYZER_H

@protocol HMDAggregationAnalysisEventContributing;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCountersManager.h"
#import "HMDEventFlagsManager.h"

@interface HMDLogEventUserActivityAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>



@property (retain, nonatomic) HMDEventCountersManager *eventCountersManager; // ivar: _eventCountersManager
@property (retain, nonatomic) HMDEventFlagsManager *eventFlagsManager; // ivar: _eventFlagsManager


+(id)managedEventCounterRequestGroups;
-(BOOL)_isTriggerSource:(NSUInteger)arg0 ;
-(BOOL)_isUserSource:(NSUInteger)arg0 ;
-(id)initWithEventCountersManager:(id)arg0 eventFlagsManager:(id)arg1 ;
-(void)_handleAccessoryPairingLogEvent:(id)arg0 ;
-(void)_handleActionSetRunLogEvent:(id)arg0 ;
-(void)_handleAddActionSetLogEvent:(id)arg0 ;
-(void)_handleAddTriggerLogEvent:(id)arg0 ;
-(void)_handleCameraClipRequestLogEvent:(id)arg0 ;
-(void)_handleCameraStreamLogEvent:(id)arg0 ;
-(void)_handleReadWriteLogEvent:(id)arg0 ;
-(void)_markUserActivityEventForEventName:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)populateAggregationAnalysisLogEvent:(id)arg0 ;
-(void)resetAggregationAnalysisContext;


@end


#endif