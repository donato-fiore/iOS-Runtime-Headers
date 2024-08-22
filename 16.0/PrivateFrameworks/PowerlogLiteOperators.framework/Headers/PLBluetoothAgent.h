// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBLUETOOTHAGENT_H
#define PLBLUETOOTHAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition, NSMutableDictionary, PLEntryNotificationOperatorComposition, SPBeaconManager, NSString, NSDate, PLNSNotificationOperatorComposition;



@interface PLBluetoothAgent : PLAgent {
    BOOL keepSessionAlive;
    *BTSessionImpl session;
    *BTLocalDeviceImpl localBluetoothDevice;
}


@property (retain) PLXPCListenerOperatorComposition *ENListener; // ivar: _ENListener
@property (retain) NSMutableDictionary *ENScanCache; // ivar: _ENScanCache
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged
@property (retain) SPBeaconManager *beaconManager; // ivar: _beaconManager
@property (retain) PLXPCListenerOperatorComposition *btA2DPListener; // ivar: _btA2DPListener
@property (retain) PLXPCListenerOperatorComposition *btHCIListener; // ivar: _btHCIListener
@property (retain) PLXPCListenerOperatorComposition *btHCIVSEListener; // ivar: _btHCIVSEListener
@property (retain) PLXPCListenerOperatorComposition *btHFPListener; // ivar: _btHFPListener
@property (readonly) NSString *btHardwareChipset; // ivar: _btHardwareChipset
@property (retain) NSDate *lastPowerEntryDate; // ivar: _lastPowerEntryDate
@property (retain) PLXPCListenerOperatorComposition *leConnectionListener; // ivar: _leConnectionListener
@property unsigned char logCount; // ivar: _logCount
@property (retain) PLXPCListenerOperatorComposition *magnetListener; // ivar: _magnetListener
@property (retain) PLXPCListenerOperatorComposition *magnetOperationListener; // ivar: _magnetOperationListener
@property (retain) PLEntryNotificationOperatorComposition *sbcChanged; // ivar: _sbcChanged
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener; // ivar: _thermalMonitorListener
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications; // ivar: _wakeEntryNotifications
@property (retain) PLXPCListenerOperatorComposition *wirelessProxListener; // ivar: _wirelessProxListener


+(BOOL)shouldLogEnhancedStats;
+(id)defaults;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+(id)entryEventBackwardDefinitionHCITrace;
+(id)entryEventBackwardDefinitionMaxDutyCycle;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionMagnet;
+(id)entryEventPointDefinitionMagnetOperation;
+(id)entryEventPointDefinitions;
+(id)getScanCoreKeys;
+(void)load;
-(BOOL)bluetoothPresent;
-(BOOL)isConnectable;
-(BOOL)isConnected;
-(BOOL)isDiscoverable;
-(BOOL)modulePowered;
-(id)advertisingDataDescription:(char *)arg0 ;
-(id)init;
-(struct BTLocalDeviceImpl *)localBluetoothDevice;
-(void)attachSession;
-(void)bluetoothDeviceEvent:(int)arg0 onDevice:(struct BTLocalDeviceImpl *)arg1 withResult:(int)arg2 ;
-(void)bluetoothSessionEvent:(int)arg0 onSession:(struct BTSessionImpl *)arg1 withResult:(int)arg2 ;
-(void)dealloc;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventBackwardA2DP:(id)arg0 ;
-(void)logEventBackwardHFP:(id)arg0 ;
-(void)logEventBackwardMaxDutyCycle:(id)arg0 ;
-(void)logEventBackwardPowerProfileStats;
-(void)logEventBackwardWirelessProximity:(id)arg0 ;
-(void)logEventForwardDeviceState;
-(void)logEventForwardPairedDevices;
-(void)logEventIntervalConnectedDevices;
-(void)logEventIntervalHCIRawData:(id)arg0 ;
-(void)logEventIntervalLeConnectedDevices:(id)arg0 withRequest:(BOOL)arg1 ;
-(void)logEventIntervalWakeVSE:(id)arg0 ;
-(void)logEventPointMagnet:(id)arg0 ;
-(void)logEventPointMagnetOperation:(id)arg0 ;
-(void)logwithBTOnCheck;
-(void)modelBluetoothOffPower;
-(void)modelBluetoothPower:(id)arg0 ;
-(void)sessionAttached:(struct BTSessionImpl *)arg0 withResult:(int)arg1 ;
-(void)sessionTerminated:(struct BTSessionImpl *)arg0 withResult:(int)arg1 ;


@end


#endif