// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBCONTROLLER_H
#define CBCONTROLLER_H

@class NSString;
@protocol CBXPCReceivable, CUXPCCodable, CBActivatable, CBErrorReporting, CBInterruptable, CBLabelable, CBStateReporting, CBRemotable, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CBDevice.h"

@interface CBController : NSObject <CBXPCReceivable, CUXPCCodable, CBActivatable, CBErrorReporting, CBInterruptable, CBLabelable, CBStateReporting, CBRemotable>

 {
    BOOL _activateAssertionCalled;
    BOOL _activateCalled;
    id *_activateCompletion;
    BOOL _changesPending;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
}


@property (copy, nonatomic) NSString *appID; // ivar: _appID
@property (nonatomic) unsigned int assertionFlags; // ivar: _assertionFlags
@property (readonly, nonatomic) NSInteger bluetoothState; // ivar: _bluetoothState
@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (readonly, nonatomic) int discoverableState; // ivar: _discoverableState
@property (copy, nonatomic) id *discoverableStateChangedHandler; // ivar: _discoverableStateChangedHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly, nonatomic) int inquiryState; // ivar: _inquiryState
@property (copy, nonatomic) id *inquiryStateChangedHandler; // ivar: _inquiryStateChangedHandler
@property (nonatomic) unsigned int internalFlags; // ivar: _internalFlags
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *relayMessageHandler; // ivar: _relayMessageHandler
@property (retain, nonatomic) CBDevice *remoteDevice; // ivar: _remoteDevice
@property (retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // ivar: _testListenerEndpoint
@property (copy, nonatomic) id *tipiChangedHandler; // ivar: _tipiChangedHandler


+(BOOL)bluetoothModificationAllowed;
+(BOOL)safeToPowerOffBluetooth;
+(BOOL)setBluetoothModificationAllowed:(BOOL)arg0 error:(*id)arg1 ;
+(BOOL)systemHasOnlyBluetoothPointingDevices;
+(BOOL)systemHasUSBPointingDevice;
+(BOOL)writePrefKey:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
+(NSUInteger)numberOfPointingDevices;
+(id)controllerInfoAndReturnError:(*id)arg0 ;
+(id)controllerInfoWithEndpoint:(id)arg0 error:(*id)arg1 ;
+(id)performDeviceRequest:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
+(id)performDeviceRequest:(id)arg0 device:(id)arg1 xpcEndpoint:(id)arg2 error:(*id)arg3 ;
+(id)readPrefKeys:(id)arg0 error:(*id)arg1 ;
+(unsigned int)featureFlags;
+(void)setOfflineAdvertisingParams:(id)arg0 ;
-(BOOL)setLowPowerModeWithReason:(int)arg0 error:(*id)arg1 ;
-(id)_ensureXPCStarted;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_activate;
-(void)_activateAssertionWithFlagsDirect:(unsigned int)arg0 completion:(id)arg1 ;
-(void)_activateAssertionWithFlagsXPC:(unsigned int)arg0 completion:(id)arg1 ;
-(void)_activateDirectStart;
-(void)_activateXPCCompleted:(id)arg0 ;
-(void)_activateXPCStart:(BOOL)arg0 ;
-(void)_interrupted;
-(void)_invalidateDirect;
-(void)_invalidated;
-(void)_update;
-(void)_updateIfNeededWithBlock:(id)arg0 ;
-(void)_xpcReceivedDiscoverableStateChanged:(id)arg0 ;
-(void)_xpcReceivedInquiryStateChanged:(id)arg0 ;
-(void)_xpcReceivedMessage:(id)arg0 ;
-(void)_xpcReceivedPowerStateChanged:(id)arg0 ;
-(void)_xpcReceivedRelayMessage:(id)arg0 ;
-(void)_xpcReceivedTipiChanged:(id)arg0 ;
-(void)activateAssertionWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deleteDevice:(id)arg0 completion:(id)arg1 ;
-(void)diagnosticControl:(id)arg0 completion:(id)arg1 ;
-(void)diagnosticLog:(id)arg0 completion:(id)arg1 ;
-(void)diagnosticShow:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)getControllerInfoWithCompletion:(id)arg0 ;
-(void)getControllerSettingsWithCompletionHandler:(id)arg0 ;
-(void)getDevicesWithFlags:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)getPowerStateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)modifyControllerSettings:(id)arg0 completionHandler:(id)arg1 ;
-(void)modifyDevice:(id)arg0 completion:(id)arg1 ;
-(void)modifyDevice:(id)arg0 connectionPriorityDevices:(id)arg1 timeoutSeconds:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)modifyDevice:(id)arg0 peerSourceDevice:(id)arg1 peerSourceState:(char)arg2 completionHandler:(id)arg3 ;
-(void)modifyDevice:(id)arg0 peerSourceDevice:(id)arg1 peerSourceState:(char)arg2 requestFlags:(unsigned int)arg3 completionHandler:(id)arg4 ;
-(void)modifyDevice:(id)arg0 settings:(id)arg1 completion:(id)arg2 ;
-(void)performDeviceRequest:(id)arg0 device:(id)arg1 completion:(id)arg2 ;
-(void)resetCBExtensionID:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendRelayMessageType:(unsigned char)arg0 messageData:(id)arg1 conduitDevice:(id)arg2 destinationDevice:(id)arg3 completionHandler:(id)arg4 ;
-(void)sendSmartRoutingInformation:(id)arg0 device:(id)arg1 completionHandler:(id)arg2 ;
-(void)setLowPowerModeWithReason:(int)arg0 completion:(id)arg1 ;
-(void)setPowerState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)updateIdentities:(id)arg0 completion:(id)arg1 ;
-(void)xpcReceivedMessage:(id)arg0 ;


@end


#endif