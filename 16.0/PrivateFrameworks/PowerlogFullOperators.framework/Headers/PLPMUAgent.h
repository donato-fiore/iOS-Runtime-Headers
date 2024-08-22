// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPMUAGENT_H
#define PLPMUAGENT_H

@class PLAgent, NSMutableDictionary, NSMutableArray, PLEntryNotificationOperatorComposition;



@interface PLPMUAgent : PLAgent {
    *__IOHIDEventSystemClient hidEventSystem;
    NSMutableDictionary *matchingSensors;
    NSMutableArray *sensorNamesC;
    NSMutableArray *sensorNamesV;
}


@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged


+(id)accountingGroupDefinitions;
+(id)defaults;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(id)railDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventPointSensors;


@end


#endif