// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKBLUETOOTHMONITOR_H
#define _DKBLUETOOTHMONITOR_H

@class DKMonitor, BMSource, NSMutableDictionary, NSDictionary, NSLock, NSString, BMPruner;
@protocol _DKNotificationReceiver, _DKHistoricalDeletingMonitor, OS_dispatch_queue, OS_dispatch_source;



@interface _DKBluetoothMonitor : DKMonitor <_DKNotificationReceiver, _DKHistoricalDeletingMonitor>

 {
    BMSource *_source;
    BOOL _enabled;
}


@property (retain, nonatomic) NSMutableDictionary *activeConnections; // ivar: _activeConnections
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *batteryLevelPollingQueue; // ivar: _batteryLevelPollingQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *batteryLevelPollingTimer; // ivar: _batteryLevelPollingTimer
@property (retain) NSDictionary *batteryLevels; // ivar: _batteryLevels
@property (retain, nonatomic) NSLock *connectionUpdateLock; // ivar: _connectionUpdateLock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *historicalDeletingHandler; // ivar: historicalDeletingHandler
@property (retain, nonatomic) NSMutableDictionary *inactiveConnections; // ivar: _inactiveConnections
@property (retain, nonatomic) BMPruner *pruner; // ivar: _pruner
@property (readonly) Class superclass;


+(id)_BMEventFromDKEvent:(id)arg0 starting:(BOOL)arg1 ;
+(id)_eventWithState:(BOOL)arg0 name:(id)arg1 address:(id)arg2 type:(int)arg3 isAppleAudioDevice:(BOOL)arg4 isUserWearing:(BOOL)arg5 productID:(unsigned int)arg6 accessoryBatteryLevels:(id)arg7 ;
+(id)audioProductsBatteryLevels;
+(id)contextValueForBluetoothConnectionStatus:(BOOL)arg0 name:(id)arg1 address:(id)arg2 deviceType:(int)arg3 isAppleAudioDevice:(BOOL)arg4 isUserWearing:(BOOL)arg5 productID:(unsigned int)arg6 ;
+(id)entitlements;
+(id)eventStream;
+(id)log;
+(int)BMDeviceBluetoothDeviceTypeFromBTDeviceType:(int)arg0 ;
-(BOOL)_inEarStatusForDevice:(id)arg0 ;
-(id)init;
-(id)loadState;
-(void)deactivate;
-(void)dealloc;
-(void)handleUnpairingEvent:(id)arg0 ;
-(void)receiveNotificationEvent:(id)arg0 ;
-(void)saveState;
-(void)start;
-(void)stop;
-(void)updateCurrentBatteryLevels;


@end


#endif