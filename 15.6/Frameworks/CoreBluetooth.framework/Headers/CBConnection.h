// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBCONNECTION_H
#define CBCONNECTION_H

@class NSUUID, NSData, NSMutableArray, NSString, NSArray;
@protocol CBCentralManagerDelegate, CBPeripheralDelegate, CUReadWriteRequestable, CBPairingAgentDelegate, CUXPCCodable, CBActivatable, CBErrorReporting, CBInterruptable, CBLabelable, CBPairable, CBReadWriteRequestable, CBStateReporting, CBUseCaseable, OS_dispatch_source, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CBCentralManager.h"
#import "CBPeripheral.h"
#import "CBReadRequest.h"
#import "CBWriteRequest.h"
#import "CBL2CAPChannel.h"
#import "CBDevice.h"
#import "CBServer.h"

@interface CBConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CUReadWriteRequestable, CBPairingAgentDelegate, CUXPCCodable, CBActivatable, CBErrorReporting, CBInterruptable, CBLabelable, CBPairable, CBReadWriteRequestable, CBStateReporting, CBUseCaseable>

 {
    BOOL _activateCalled;
    id *_activateCompletion;
    NSUUID *_blePeerUUID;
    CBCentralManager *_centralManager;
    NSObject<OS_dispatch_source> *_connectTimeoutTimer;
    BOOL _guardConnected;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSData *_pairingOOBData;
    CBPeripheral *_peripheral;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CBReadRequest *_readRequestCurrent;
    NSMutableArray *_readRequests;
    int _socketFD;
    int _state;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CBWriteRequest *_writeRequestCurrent;
    NSMutableArray *_writeRequests;
    *LogCategory _ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
}


@property (nonatomic) unsigned short blePSM; // ivar: _blePSM
@property (readonly, nonatomic) NSInteger bluetoothState; // ivar: _bluetoothState
@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (copy, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (nonatomic) NSInteger clientUseCase; // ivar: _clientUseCase
@property (nonatomic) CGFloat connectTimeoutSeconds; // ivar: _connectTimeoutSeconds
@property (nonatomic) unsigned int connectionFlags; // ivar: _connectionFlags
@property (nonatomic) NSInteger connectionLatency; // ivar: _connectionLatency
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int internalFlags; // ivar: _internalFlags
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) CBL2CAPChannel *l2capChannel; // ivar: _l2capChannel
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *pairingCompletedHandler; // ivar: _pairingCompletedHandler
@property (copy, nonatomic) id *pairingPromptHandler; // ivar: _pairingPromptHandler
@property (retain, nonatomic) CBDevice *peerDevice; // ivar: _peerDevice
@property (retain, nonatomic) CBServer *server; // ivar: _server
@property (copy, nonatomic) id *serverInvalidationHandler; // ivar: _serverInvalidationHandler
@property (nonatomic) unsigned int serviceFlags; // ivar: _serviceFlags
@property (readonly) Class superclass;
@property (nonatomic) int useCase; // ivar: _useCase
@property (copy, nonatomic) NSArray *useCaseClientIDs; // ivar: _useCaseClientIDs
@property (copy, nonatomic) id *xpcForwardMessageReceiveHandler; // ivar: _xpcForwardMessageReceiveHandler
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcListenerEndpoint; // ivar: _xpcListenerEndpoint
@property (copy, nonatomic) id *xpcSendEventHandler; // ivar: _xpcSendEventHandler


-(BOOL)_prepareWriteRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)_processReadStatus;
-(BOOL)_runConnectStart;
-(BOOL)_runSetupChannel;
-(BOOL)_setupIOAndReturnError:(*id)arg0 ;
-(BOOL)_startConnectingAndReturnError:(*id)arg0 ;
-(BOOL)activateDirectAndReturnError:(*id)arg0 ;
-(id)_ensureXPCStarted;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_abortReadsWithError:(id)arg0 ;
-(void)_abortWritesWithError:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_activateXPCCompleted:(id)arg0 ;
-(void)_activateXPCStart:(BOOL)arg0 ;
-(void)_completeReadRequest:(id)arg0 error:(id)arg1 ;
-(void)_completeWriteRequest:(id)arg0 error:(id)arg1 ;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)_pairWithOOBData:(id)arg0 ;
-(void)_pairingGenerateOOBDataWithCompletionHandler:(id)arg0 ;
-(void)_pairingSetOOBEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_prepareReadRequest:(id)arg0 ;
-(void)_processReads:(BOOL)arg0 ;
-(void)_processWrites;
-(void)_reportError:(id)arg0 ;
-(void)_run;
-(void)_xpcReceivedMessage:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didFailToConnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)dealloc;
-(void)disconnectWithCompletion:(id)arg0 ;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)invalidate;
-(void)pairWithOOBData:(id)arg0 ;
-(void)pairingAgent:(id)arg0 peerDidCompletePairing:(id)arg1 ;
-(void)pairingAgent:(id)arg0 peerDidFailToCompletePairing:(id)arg1 error:(id)arg2 ;
-(void)pairingAgent:(id)arg0 peerDidRequestPairing:(id)arg1 type:(NSInteger)arg2 passkey:(id)arg3 ;
-(void)pairingAgent:(id)arg0 peerDidUnpair:(id)arg1 ;
-(void)pairingGenerateOOBDataWithCompletionHandler:(id)arg0 ;
-(void)pairingPerformAction:(int)arg0 completionHandler:(id)arg1 ;
-(void)pairingSetOOBEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)peripheral:(id)arg0 didOpenL2CAPChannel:(id)arg1 error:(id)arg2 ;
-(void)readWithCBReadRequest:(id)arg0 ;
-(void)readWithRequest:(id)arg0 ;
-(void)writeEndOfDataWithCompletion:(id)arg0 ;
-(void)writeWithCBWriteRequest:(id)arg0 ;
-(void)writeWithRequest:(id)arg0 ;
-(void)xpcForwardMessage:(id)arg0 ;
-(void)xpcReceivedForwardedEvent:(id)arg0 ;
-(void)xpcReceivedMessage:(id)arg0 ;
-(void)xpcReceivedPairingCompleted:(id)arg0 ;
-(void)xpcReceivedPairingPrompt:(id)arg0 ;


@end


#endif