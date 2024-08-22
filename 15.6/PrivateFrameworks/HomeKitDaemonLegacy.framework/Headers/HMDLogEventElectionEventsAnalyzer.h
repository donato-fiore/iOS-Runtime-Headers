// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLOGEVENTELECTIONEVENTSANALYZER_H
#define HMDLOGEVENTELECTIONEVENTSANALYZER_H

@protocol HMDAggregationAnalysisEventContributing;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCountersManager.h"

@interface HMDLogEventElectionEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>



@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // ivar: _eventCountersManager
@property BOOL isCurrentDeviceInSecondaryResidentCoordinationMesh; // ivar: _isCurrentDeviceInSecondaryResidentCoordinationMesh


+(id)managedEventCounterRequestGroups;
-(NSUInteger)fetchCountForEventName:(id)arg0 ;
-(id)initWithEventCountersManager:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)incrementCountForEventName:(id)arg0 ;
-(void)populateAggregationAnalysisLogEvent:(id)arg0 ;
-(void)resetAggregationAnalysisContext;


@end


#endif