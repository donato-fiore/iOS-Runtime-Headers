// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBUTTONAGENT_H
#define PLBUTTONAGENT_H

@class PLAgent, PLEntryNotificationOperatorComposition, PLHIDEventOperatorComposition;



@interface PLButtonAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged
@property (retain) PLHIDEventOperatorComposition *buttonEvent; // ivar: _buttonEvent
@property (retain) PLHIDEventOperatorComposition *smartCoverEvent; // ivar: _smartCoverEvent


+(id)defaults;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitionTrackpadPowerState;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventForwardSmartCover:(struct __IOHIDEvent *)arg0 ;
-(void)logEventPointButton:(struct __IOHIDEvent *)arg0 ;


@end


#endif