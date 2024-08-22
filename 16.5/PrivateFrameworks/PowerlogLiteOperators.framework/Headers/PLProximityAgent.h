// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPROXIMITYAGENT_H
#define PLPROXIMITYAGENT_H

@class PLAgent, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition, NSDate, PLTimer;



@interface PLProximityAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged
@property (retain) PLXPCListenerOperatorComposition *clientStateListener; // ivar: _clientStateListener
@property (retain) PLXPCListenerOperatorComposition *deviceConnectionListener; // ivar: _deviceConnectionListener
@property (retain) NSDate *lastSBCTimestamp; // ivar: _lastSBCTimestamp
@property (retain) PLXPCListenerOperatorComposition *maintenanceListener; // ivar: _maintenanceListener
@property NSUInteger numBTLines; // ivar: _numBTLines
@property NSUInteger numConnects; // ivar: _numConnects
@property NSUInteger numDisconnects; // ivar: _numDisconnects
@property (retain) PLXPCListenerOperatorComposition *radioPowerListener; // ivar: _radioPowerListener
@property (retain) PLXPCListenerOperatorComposition *radioStateListener; // ivar: _radioStateListener
@property (retain) PLTimer *runTimeAggregatorTimer; // ivar: _runTimeAggregatorTimer
@property (retain) PLXPCListenerOperatorComposition *timerStateListener; // ivar: _timerStateListener


+(BOOL)isProximityLiteSupported;
+(BOOL)isProximitySupported;
+(id)defaults;
+(id)entryEventBackwardDefinitionRadioPower;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionClientState;
+(id)entryEventForwardDefinitionRadioState;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitionBinnedDeviceConnection;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionDeviceConnection;
+(id)entryEventPointDefinitionMaintainedDevices;
+(id)entryEventPointDefinitionTimerState;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventBackwardPowerStats:(id)arg0 ;
-(void)logEventForwardClientState:(id)arg0 ;
-(void)logEventForwardRadioState:(id)arg0 ;
-(void)logEventIntervalBinnedDeviceConnection;
-(void)logEventPointDeviceConnection:(id)arg0 ;
-(void)logEventPointMaintenance:(id)arg0 ;
-(void)logEventPointTimerState:(id)arg0 ;


@end


#endif