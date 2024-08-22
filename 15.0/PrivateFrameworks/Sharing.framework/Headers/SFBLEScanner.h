// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFBLESCANNER_H
#define SFBLESCANNER_H

@class CBCentralManager, NSMutableDictionary, CURetrier, NSSet, NSData, NSArray, WPAWDL, WPNearby, WPPairing, NSString;
@protocol CBCentralManagerDelegate, WPAWDLDelegate, WPNearbyDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFBLERecorder.h"

@interface SFBLEScanner : NSObject <CBCentralManagerDelegate, WPAWDLDelegate, WPNearbyDelegate>

 {
    BOOL _activateCalled;
    BOOL _activated;
    BOOL _activeScan;
    *BTSessionImpl _btSession;
    BOOL _btStarted;
    CBCentralManager *_centralManager;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    NSObject<OS_dispatch_source> *_lostTimer;
    BOOL _needDups;
    NSInteger _payloadType;
    BOOL _poweredOffSleep;
    int _rescanSecondsActual;
    NSObject<OS_dispatch_source> *_rescanTimer;
    *__sFILE _rssiEventLogFile;
    BOOL _scanStarted;
    CURetrier *_startRetrier;
    BOOL _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSSet *_trackedPeersApplied;
    *LogCategory _ucat;
    BOOL _updating;
    BOOL _scanParamActive;
    BOOL _scanParamCache;
    BOOL _scanParamDups;
    NSData *_scanParamFilterData;
    NSData *_scanParamFilterMask;
    NSInteger _scanParamInterval;
    NSInteger _scanParamWindow;
    NSInteger _scanParamMode;
    NSArray *_scanParamPeers;
    NSInteger _scanParamRSSI;
    WPAWDL *_wpAirDrop;
    WPNearby *_wpNearby;
    NSInteger _wpNearbyType;
    WPPairing *_wpPairing;
}


@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *deviceChangedHandler; // ivar: _deviceChangedHandler
@property (copy, nonatomic) NSArray *deviceFilter; // ivar: _deviceFilter
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, copy, nonatomic) NSData *payloadFilterData; // ivar: _payloadFilterData
@property (readonly, copy, nonatomic) NSData *payloadFilterMask; // ivar: _payloadFilterMask
@property (retain, nonatomic) SFBLERecorder *recorder; // ivar: _recorder
@property (nonatomic) CGFloat rescanInterval; // ivar: _rescanInterval
@property (nonatomic) BOOL rssiLog; // ivar: _rssiLog
@property (nonatomic) BOOL rssiLogStdOut; // ivar: _rssiLogStdOut
@property (nonatomic) NSInteger rssiThreshold; // ivar: _rssiThreshold
@property (nonatomic) BOOL scanCache; // ivar: _scanCache
@property (nonatomic) NSInteger scanInterval; // ivar: _scanInterval
@property (nonatomic) NSInteger scanRate; // ivar: _scanRate
@property (readonly, nonatomic) NSInteger scanState; // ivar: _scanState
@property (copy, nonatomic) id *scanStateChangedHandler; // ivar: _scanStateChangedHandler
@property (nonatomic) NSInteger scanWindow; // ivar: _scanWindow
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (copy, nonatomic) id *timeoutHandler; // ivar: _timeoutHandler
@property (copy, nonatomic) NSSet *trackedPeers; // ivar: _trackedPeers


-(BOOL)_btSessionUsable;
-(BOOL)_needActiveScan;
-(BOOL)_needDups;
-(BOOL)_updateCounterpart:(id)arg0 ;
-(BOOL)pairingUpdatePairedInfo:(id)arg0 fields:(id)arg1 bleDevice:(id)arg2 ;
-(BOOL)pairingUpdatePairedInfoMB:(id)arg0 fields:(id)arg1 bleDevice:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)modelWithProductID:(unsigned short)arg0 ;
-(id)pairingParsePayload:(id)arg0 identifier:(id)arg1 bleDevice:(id)arg2 ;
-(int)_btSessionEnsureStarted;
-(unsigned int)statusToHeadsetStatus:(unsigned char)arg0 forProductID:(unsigned short)arg1 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_btSessionEnsureStopped;
-(void)_foundDevice:(id)arg0 advertisementData:(id)arg1 rssi:(NSInteger)arg2 fields:(id)arg3 ;
-(void)_invalidate;
-(void)_invokeBlockActivateSafe:(id)arg0 ;
-(void)_nearbyParseManufacturerData:(id)arg0 fields:(id)arg1 ;
-(void)_nearbyParseNearbyActionPtr:(char *)arg0 end:(char *)arg1 fields:(id)arg2 ;
-(void)_nearbyParseNearbyInfoPtr:(char *)arg0 end:(char *)arg1 fields:(id)arg2 ;
-(void)_poweredOff;
-(void)_poweredOn;
-(void)_recordDevice:(id)arg0 data:(id)arg1 rssi:(id)arg2 info:(id)arg3 ;
-(void)_removeAllDevicesWithReason:(id)arg0 ;
-(void)_rescanLostFired;
-(void)_rescanTimerFired;
-(void)_restartIfNeeded;
-(void)_restartIfNeeded:(BOOL)arg0 ;
-(void)_startTimeoutIfNeeded;
-(void)_updateRescanTimer;
-(void)_updateTrackedPeers;
-(void)_watchSetupParseName:(id)arg0 fields:(id)arg1 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)awdl:(id)arg0 failedToStartScanningWithError:(id)arg1 ;
-(void)awdl:(id)arg0 foundDevice:(id)arg1 rssi:(id)arg2 ;
-(void)awdlDidUpdateState:(id)arg0 ;
-(void)awdlStartedScanning:(id)arg0 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)dealloc;
-(void)foundAWDLDevice:(id)arg0 rssi:(id)arg1 ;
-(void)foundNearbyDevice:(id)arg0 data:(id)arg1 peerInfo:(id)arg2 ;
-(void)foundPairingDevice:(id)arg0 payload:(id)arg1 rssi:(id)arg2 peerInfo:(id)arg3 ;
-(void)foundPeripheralDevice:(id)arg0 advertisementData:(id)arg1 RSSI:(id)arg2 ;
-(void)invalidate;
-(void)nearby:(id)arg0 didDiscoverType:(NSInteger)arg1 withData:(id)arg2 fromPeer:(id)arg3 peerInfo:(id)arg4 ;
-(void)nearby:(id)arg0 didFailToStartScanningForType:(NSInteger)arg1 WithError:(id)arg2 ;
-(void)nearby:(id)arg0 didLosePeer:(id)arg1 type:(NSInteger)arg2 ;
-(void)nearby:(id)arg0 didStartScanningForType:(NSInteger)arg1 ;
-(void)nearbyDidUpdateState:(id)arg0 ;
-(void)pairing:(id)arg0 failedToStartScanningWithError:(id)arg1 ;
-(void)pairing:(id)arg0 foundDevice:(id)arg1 payload:(id)arg2 rssi:(id)arg3 peerInfo:(id)arg4 ;
-(void)pairingDidUpdateState:(id)arg0 ;
-(void)pairingStartedScanning:(id)arg0 ;
-(void)parseStatus3:(unsigned char)arg0 productID:(unsigned int)arg1 caseLEDColor:(*unsigned char)arg2 caseLEDStatus:(char *)arg3 ;
-(void)performUpdate:(id)arg0 ;


@end


#endif