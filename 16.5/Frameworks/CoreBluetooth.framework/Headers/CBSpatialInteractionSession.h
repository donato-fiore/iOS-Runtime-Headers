// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBSPATIALINTERACTIONSESSION_H
#define CBSPATIALINTERACTIONSESSION_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol CUXPCCodable, CBActivatable, CBDeviceReporting, CBErrorReporting, CBInterruptable, CBLabelable, CBStateReporting, CBSystemOverridable, OS_dispatch_source, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CBSpatialInteractionSession : NSObject <CUXPCCodable, CBActivatable, CBDeviceReporting, CBErrorReporting, CBInterruptable, CBLabelable, CBStateReporting, CBSystemOverridable>

 {
    BOOL _activateCalled;
    id *_activateCompletion;
    NSObject<OS_dispatch_source> *_advertiseRateTimer;
    BOOL _changesPending;
    NSMutableDictionary *_deviceMap;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_peerMap;
    *LogCategory _ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
}


@property (nonatomic) int advertiseRate; // ivar: _advertiseRate
@property (copy, nonatomic) id *advertisingAddressChangedHandler; // ivar: _advertisingAddressChangedHandler
@property (copy, nonatomic) NSData *advertisingAddressData; // ivar: _advertisingAddressData
@property (copy, nonatomic) id *aopDataHandler; // ivar: _aopDataHandler
@property (readonly, nonatomic) NSInteger bluetoothState; // ivar: _bluetoothState
@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (nonatomic) unsigned int controlFlags; // ivar: _controlFlags
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (readonly, copy) NSArray *discoveredDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) NSData *identifierData; // ivar: _identifierData
@property (nonatomic) unsigned int internalFlags; // ivar: _internalFlags
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSData *irkData; // ivar: _irkData
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *measurementHandler; // ivar: _measurementHandler
@property (nonatomic) int scanRate; // ivar: _scanRate
@property (nonatomic) int scanRateOverride; // ivar: _scanRateOverride
@property (nonatomic) int scanRateScreenOff; // ivar: _scanRateScreenOff
@property (readonly, nonatomic) unsigned int systemOverrideFlags; // ivar: _systemOverrideFlags
@property (copy, nonatomic) id *systemOverrideHandler; // ivar: _systemOverrideHandler
@property (retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // ivar: _testListenerEndpoint
@property (copy, nonatomic) id *tokenChangedHandler; // ivar: _tokenChangedHandler
@property (copy, nonatomic) NSData *tokenData; // ivar: _tokenData
@property (copy) NSData *uwbConfigData; // ivar: _uwbConfigData
@property (nonatomic) unsigned int uwbTokenFlags; // ivar: _uwbTokenFlags


+(id)dictionaryWithTokenData:(id)arg0 error:(*id)arg1 ;
-(BOOL)matchesWithDevice:(id)arg0 ;
-(BOOL)updateWithSession:(id)arg0 ;
-(id)_ensureXPCStarted;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_activate;
-(void)_activateDirectStart;
-(void)_activateXPCCompleted:(id)arg0 reactivate:(BOOL)arg1 ;
-(void)_activateXPCStart:(BOOL)arg0 ;
-(void)_addPeerToken:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)_interrupted;
-(void)_invalidateDirect;
-(void)_invalidated;
-(void)_lostAllDevices;
-(void)_reAddTokens;
-(void)_update;
-(void)_updateIfNeededWithBlock:(id)arg0 ;
-(void)_xpcReceivedAOPData:(id)arg0 ;
-(void)_xpcReceivedAdvertisingAddressChanged:(id)arg0 ;
-(void)_xpcReceivedDeviceFound:(id)arg0 ;
-(void)_xpcReceivedDeviceLost:(id)arg0 ;
-(void)_xpcReceivedEvent:(id)arg0 ;
-(void)_xpcReceivedMessage:(id)arg0 ;
-(void)_xpcReceivedPowerStateChanged:(id)arg0 ;
-(void)_xpcReceivedSystemOverrideChanged:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)addPeerToken:(id)arg0 completion:(id)arg1 ;
-(void)addPeerToken:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)invalidate;
-(void)removePeerToken:(id)arg0 completion:(id)arg1 ;


@end


#endif