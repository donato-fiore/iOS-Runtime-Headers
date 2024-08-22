// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDLOGEVENTACCESSORYFIRMWAREUPDATEEVENTANALYZER_H
#define HMDLOGEVENTACCESSORYFIRMWAREUPDATEEVENTANALYZER_H

@protocol HMDAggregationAnalysisEventContributing;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCountersManager.h"

@interface HMDLogEventAccessoryFirmwareUpdateEventAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>



@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // ivar: _eventCountersManager


+(id)managedEventCounterRequestGroups;
-(id)initWithEventCountersManager:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)populateAggregationAnalysisLogEvent:(id)arg0 ;
-(void)resetAggregationAnalysisContext;


@end


#endif