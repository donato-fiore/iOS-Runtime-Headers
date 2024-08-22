// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTROUTINEMANAGERREGISTRANTSCENARIOTRIGGER_H
#define RTROUTINEMANAGERREGISTRANTSCENARIOTRIGGER_H

@class NSDictionary;


#import "RTRoutineManagerRegistrant.h"

@interface RTRoutineManagerRegistrantScenarioTrigger : RTRoutineManagerRegistrant

@property (readonly, nonatomic) NSUInteger monitoredScenarioTriggerTypes; // ivar: _monitoredScenarioTriggerTypes
@property (readonly, nonatomic) BOOL registered; // ivar: _registered
@property (readonly, copy, nonatomic) NSDictionary *scenarioTriggerHandlers; // ivar: __scenarioTriggerHandlers


-(id)init;
-(id)startMonitoringForScenarioTriggerTypes:(NSUInteger)arg0 handler:(id)arg1 ;
-(id)stopMonitoringForScenarioTriggerTypes:(NSUInteger)arg0 ;
-(void)onScenarioTriggers:(id)arg0 error:(id)arg1 ;


@end


#endif