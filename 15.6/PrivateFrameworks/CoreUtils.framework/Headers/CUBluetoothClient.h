// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUBLUETOOTHCLIENT_H
#define CUBLUETOOTHCLIENT_H

@class NSData, CBCentralManager, CBPeripheralManager, NSMutableDictionary, NSMutableArray, NSString;
@protocol CBCentralManagerDelegate, CBPeripheralManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUBluetoothClient : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate>

 {
    NSData *_btAdvertisingAddress;
    CBCentralManager *_btCentralManager;
    BOOL _btCentralManagerNeeded;
    CBPeripheralManager *_btPeripheralManager;
    BOOL _btPeripheralManagerNeeded;
    BOOL _btConnectionEventsNeeded;
    BOOL _btConnectionDevicesInitialized;
    ? _btAccessoryCallbacks;
    BOOL _btAccessoryEventsNeeded;
    BOOL _btAccessoryEventsRegistered;
    *BTAccessoryManagerImpl _btAccessoryManager;
    *BTSessionImpl _btSession;
    BOOL _btSessionAddedServiceCallback;
    BOOL _btSessionAttaching;
    BOOL _btSessionNeeded;
    BOOL _btSessionStarted;
    *BTLocalDeviceImpl _btLocalDevice;
    NSData *_btLocalDeviceAddr;
    BOOL _btLocalDeviceAddrNeeded;
    ? _btLocalDeviceCallbacks;
    BOOL _btLocalDeviceCallbacksNeeded;
    BOOL _btLocalDeviceCallbacksRegistered;
    *BTPairingAgentImpl _btPairingAgent;
    BOOL _btPairingAgentNeeded;
    BOOL _btPairingAgentStarted;
    NSMutableDictionary *_btConnectedDevices;
    NSMutableDictionary *_btPairedDevices;
    BOOL _btPairedDevicesInitialized;
    NSMutableArray *_findDeviceRequests;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
}


@property (copy, nonatomic) id *bluetoothAddressChangedHandler; // ivar: _bluetoothAddressChangedHandler
@property (nonatomic) int bluetoothState; // ivar: _bluetoothState
@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *deviceConnectedHandler; // ivar: _deviceConnectedHandler
@property (copy, nonatomic) id *deviceDisconnectedHandler; // ivar: _deviceDisconnectedHandler
@property (copy, nonatomic) id *deviceEventHandler; // ivar: _deviceEventHandler
@property (copy, nonatomic) id *devicePairedHandler; // ivar: _devicePairedHandler
@property (copy, nonatomic) id *deviceUnpairedHandler; // ivar: _deviceUnpairedHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned int requiredServices; // ivar: _requiredServices
@property (nonatomic) unsigned int statusFlags; // ivar: _statusFlags
@property (readonly) Class superclass;


-(id)_createCUBluetoothDeviceWithBTDevice:(struct BTDeviceImpl *)arg0 ;
-(id)_internalDispatchQueue;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(struct BTDeviceImpl *)_btDeviceWithID:(id)arg0 error:(*id)arg1 ;
-(void)_btAccessoryNameChanged:(struct BTDeviceImpl *)arg0 ;
-(void)_btAccessoryPlacementChanged:(struct BTAccessoryManagerImpl *)arg0 device:(struct BTDeviceImpl *)arg1 ;
-(void)_btAccessoryStreamStateChanged:(int)arg0 device:(struct BTDeviceImpl *)arg1 ;
-(void)_btEnsureStarted;
-(void)_btEnsureStopped;
-(void)_externalInvokeBlock:(id)arg0 ;
-(void)_findDeviceByAddress:(struct ? )arg0 completion:(id)arg1 ;
-(void)_handleBluetoothAddressChanged;
-(void)_handleConnectedDevicesInit;
-(void)_handleDeviceConnected:(struct BTDeviceImpl *)arg0 ;
-(void)_handleDeviceDisconnected:(struct BTDeviceImpl *)arg0 reason:(int)arg1 ;
-(void)_handleDeviceEvent:(unsigned int)arg0 device:(struct BTDeviceImpl *)arg1 ;
-(void)_handlePairingStatusChanged;
-(void)_invalidated;
-(void)_processFindDeviceRequests;
-(void)_setDeviceFlags:(unsigned int)arg0 mask:(unsigned int)arg1 deviceID:(id)arg2 completion:(id)arg3 ;
-(void)activate;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)dealloc;
-(void)findDeviceByAddress:(struct ? )arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)peripheralManagerDidUpdateState:(id)arg0 ;
-(void)setDeviceFlags:(unsigned int)arg0 mask:(unsigned int)arg1 deviceID:(id)arg2 completion:(id)arg3 ;
-(void)updateDevice:(id)arg0 btDevice:(struct BTDeviceImpl *)arg1 ;
-(void)updateStatusFlags;


@end


#endif