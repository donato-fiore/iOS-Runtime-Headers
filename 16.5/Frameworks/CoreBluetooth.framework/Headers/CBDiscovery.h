// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBDISCOVERY_H
#define CBDISCOVERY_H

@class NSMutableDictionary, NSString, NSArray;
@protocol CBXPCReceivable, CUXPCCodable, CBActivatable, CBDeviceReporting, CBErrorReporting, CBInterruptable, CBLabelable, CBRemotable, CBStateReporting, CBSystemOverridable, CBUseCaseable, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CBDevice.h"

@interface CBDiscovery : NSObject <CBXPCReceivable, CUXPCCodable, CBActivatable, CBDeviceReporting, CBErrorReporting, CBInterruptable, CBLabelable, CBRemotable, CBStateReporting, CBSystemOverridable, CBUseCaseable>

 {
    BOOL _activateCalled;
    id *_activateCompletion;
    BOOL _changesPending;
    NSMutableDictionary *_deviceMap;
    BOOL _direct;
    ? _discoveryTypesInternal;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
}


@property (copy, nonatomic) NSString *appID; // ivar: _appID
@property (nonatomic) char bleRSSIThresholdHint; // ivar: _bleRSSIThresholdHint
@property (nonatomic) int bleScanRate; // ivar: _bleScanRate
@property (nonatomic) int bleScanRateOverride; // ivar: _bleScanRateOverride
@property (nonatomic) int bleScanRateScreenOff; // ivar: _bleScanRateScreenOff
@property (readonly, nonatomic) NSInteger bluetoothState; // ivar: _bluetoothState
@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (nonatomic) NSUInteger changeFlags; // ivar: _changeFlags
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (copy, nonatomic) NSArray *deviceFilter; // ivar: _deviceFilter
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (nonatomic) BOOL disabledActive; // ivar: _disabledActive
@property (nonatomic) BOOL disabledPending; // ivar: _disabledPending
@property (readonly, copy) NSArray *discoveredDevices;
@property (nonatomic) NSUInteger discoveryFlags; // ivar: _discoveryFlags
@property (readonly, nonatomic) *? discoveryTypesInternalPtr;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (nonatomic) NSUInteger extraDiscoveryFlags; // ivar: _extraDiscoveryFlags
@property (copy, nonatomic) id *finishHandler; // ivar: _finishHandler
@property (nonatomic) unsigned int internalFlags; // ivar: _internalFlags
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) BOOL keepAlive; // ivar: _keepAlive
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned int memoryPressureFlags; // ivar: _memoryPressureFlags
@property (copy, nonatomic) NSArray *oobKeys; // ivar: _oobKeys
@property (retain, nonatomic) CBDevice *remoteDevice; // ivar: _remoteDevice
@property (nonatomic) unsigned int systemOverrideFlags; // ivar: _systemOverrideFlags
@property (copy, nonatomic) id *systemOverrideHandler; // ivar: _systemOverrideHandler
@property (retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // ivar: _testListenerEndpoint
@property (nonatomic) unsigned int useCase; // ivar: _useCase
@property (copy, nonatomic) NSArray *useCaseClientIDs; // ivar: _useCaseClientIDs
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcSubscriberRepresentation;


+(id)devicesWithDiscoveryFlags:(NSUInteger)arg0 endpoint:(id)arg1 error:(*id)arg2 ;
+(id)devicesWithDiscoveryFlags:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)discoveryTypesContainTypes:(struct ? *)arg0 ;
-(BOOL)needsAdvertisingAddress;
-(BOOL)needsBLEScan;
-(BOOL)needsIdentify;
-(BOOL)updateWithCBDiscovery:(id)arg0 ;
-(NSUInteger)updateWithXPCSubscriberInfo:(id)arg0 ;
-(id)_ensureXPCStarted;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_activate;
-(void)_activateDirectStart;
-(void)_activateXPCCompleted:(id)arg0 ;
-(void)_activateXPCStart:(BOOL)arg0 ;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidateDirect;
-(void)_invalidated;
-(void)_lostAllDevices;
-(void)_update;
-(void)_updateIfNeededWithBlock:(id)arg0 ;
-(void)_xpcReceivedDeviceFound:(id)arg0 ;
-(void)_xpcReceivedDeviceLost:(id)arg0 ;
-(void)_xpcReceivedMessage:(id)arg0 ;
-(void)_xpcReceivedPowerStateChanged:(id)arg0 ;
-(void)_xpcReceivedSystemOverrideChanged:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)addDiscoveryType:(int)arg0 ;
-(void)dealloc;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)finish;
-(void)invalidate;
-(void)removeAllDiscoveryTypes;
-(void)removeDiscoveryType:(int)arg0 ;
-(void)xpcReceivedMessage:(id)arg0 ;


@end


#endif