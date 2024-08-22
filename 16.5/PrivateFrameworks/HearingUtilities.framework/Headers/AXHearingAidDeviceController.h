// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXHEARINGAIDDEVICECONTROLLER_H
#define AXHEARINGAIDDEVICECONTROLLER_H

@class CBCentralManager, NSLock, NSMutableDictionary, AXDispatchTimer, NSMutableArray, NSString;
@protocol CBCentralManagerDelegate, AXHADeviceControllerProtocol, OS_dispatch_queue;


#import "HUDeviceController.h"

@interface AXHearingAidDeviceController : HUDeviceController <CBCentralManagerDelegate, AXHADeviceControllerProtocol>

 {
    CBCentralManager *_bluetoothManager;
    NSLock *_centralRequestsLock;
    BOOL _isScanning;
    BOOL _centralIsOn;
    NSObject<OS_dispatch_queue> *_bluetoothCentralQueue;
    NSObject<OS_dispatch_queue> *_deviceUpdatesQueue;
    NSMutableDictionary *_deviceUpdatesDescription;
    AXDispatchTimer *_advertisingTimeoutTimer;
    NSMutableDictionary *_advertisingTimestamps;
    AXDispatchTimer *_availableDeviceTimer;
}


@property (retain, nonatomic) NSMutableArray *availablePeripherals; // ivar: _availablePeripherals
@property (retain, nonatomic) NSMutableArray *availableSearchBlocks; // ivar: _availableSearchBlocks
@property (retain, nonatomic) NSMutableArray *centralRequestBlocks; // ivar: centralRequestBlocks
@property (retain, nonatomic) NSMutableArray *connectedDevices; // ivar: _connectedDevices
@property (retain, nonatomic) NSMutableArray *connectedSearchBlocks; // ivar: _connectedSearchBlocks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableArray *loadedDevices; // ivar: _loadedDevices
@property (retain, nonatomic) NSMutableArray *persistentDevices; // ivar: _persistentDevices
@property (nonatomic) BOOL shouldActiveScan; // ivar: _shouldActiveScan
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *updateDeviceBlocks; // ivar: _updateDeviceBlocks


+(id)sharedController;
-(BOOL)isBluetoothAvailable;
-(BOOL)isConnected;
-(BOOL)isPaired;
-(BOOL)isPartiallyConnected;
-(BOOL)isScanning;
-(BOOL)representsLocalDevices;
-(id)hearingAidForDeviceID:(id)arg0 ;
-(id)hearingAidForPeripheral:(id)arg0 ;
-(id)hearingAidsForPeripheral:(id)arg0 ;
-(id)hearingAidsForUUID:(id)arg0 ;
-(id)init;
-(id)valueForProperty:(NSUInteger)arg0 forDeviceID:(id)arg1 ;
-(void)addAvailableDevice:(id)arg0 ;
-(void)addConnectedDevice:(id)arg0 ;
-(void)addLoadedDevice:(id)arg0 ;
-(void)cancelPendingConnections;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didDisconnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManager:(id)arg0 didFailToConnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didRetrieveConnectedPeripherals:(id)arg1 ;
-(void)centralManager:(id)arg0 didRetrievePeripherals:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)checkPartiallyPairedWithCompletion:(id)arg0 ;
-(void)checkPeripheralPaired:(id)arg0 withCompletion:(id)arg1 ;
-(void)clearAvailableDevices;
-(void)clearConnectedDevices;
-(void)clearLoadedDevices;
-(void)clearMissingHearingAids;
-(void)connectToPeripheral:(id)arg0 ;
-(void)dealloc;
-(void)deviceDidFinishLoading:(id)arg0 ;
-(void)disconnectFromHearingAidWithDeviceUUID:(id)arg0 ;
-(void)disconnectFromPeripheral:(id)arg0 ;
-(void)forgetDevice:(id)arg0 ;
-(void)mergeDevice:(id)arg0 withDevice:(id)arg1 ;
-(void)pairedHearingAidsDidChange;
-(void)pairingAgent:(id)arg0 peerDidCompletePairing:(id)arg1 ;
-(void)pairingAgent:(id)arg0 peerDidFailToCompletePairing:(id)arg1 error:(id)arg2 ;
-(void)pairingAgent:(id)arg0 peerDidUnpair:(id)arg1 ;
-(void)persistPairedHearingAids;
-(void)removeAvailableDevice:(id)arg0 ;
-(void)removeConnectedDevice:(id)arg0 ;
-(void)removeLoadedDevice:(id)arg0 ;
-(void)replaceDevice:(id)arg0 withDevice:(id)arg1 ;
-(void)resetConnectionToPeripheral:(id)arg0 ;
-(void)searchForAvailableDevices;
-(void)searchForAvailableDevicesWithCompletion:(id)arg0 ;
-(void)searchForConnectedDevices;
-(void)sendRequestToCentralManager:(id)arg0 ;
-(void)shouldRelinquishForPartialConnection:(id)arg0 ;
-(void)stopSearching;
-(void)unpairPeripheralWithUUID:(id)arg0 ;


@end


#endif