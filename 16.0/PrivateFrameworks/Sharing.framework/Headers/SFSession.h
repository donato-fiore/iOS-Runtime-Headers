// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSESSION_H
#define SFSESSION_H

@class NSMutableData, NSMutableDictionary, CUMessageSessionServer, CUPairingSession, NSXPCConnection, NSString, NSUUID, CUMessageSession, CUAppleIDClient, NSDictionary, SDStatusMonitor, NSXPCListenerEndpoint, TRSession;
@protocol NSSecureCoding, SFXPCInterface, OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFAppleIDContactInfo.h"
#import "SFTRSession.h"
#import "SFDevice.h"

@interface SFSession : NSObject <NSSecureCoding, SFXPCInterface>

 {
    *CryptoAEADPrivate _encryptionReadAEAD;
    unsigned char _encryptionReadNonce;
    *CryptoAEADPrivate _encryptionWriteAEAD;
    unsigned char _encryptionWriteNonce;
    NSMutableData *_fragmentData;
    unsigned short _fragmentLastIndex;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    NSMutableDictionary *_requestMap;
    NSObject<OS_os_transaction> *_transaction;
    *LogCategory _ucatCore;
    *LogCategory _ucatCrypto;
    BOOL _activateCalled;
    BOOL _activateInProgress;
    BOOL _activateCompleted;
    id *_activateCompletion;
    SFAppleIDContactInfo *_appleIDContactInfo;
    BOOL _appleIDContactCompleted;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _heartbeatID;
    BOOL _heartbeatV2;
    BOOL _heartbeatWaiting;
    CUMessageSessionServer *_messageSessionServer;
    id *_pairSetupCompletion;
    BOOL _pairSetupEnded;
    unsigned int _pairSetupFlags;
    CUPairingSession *_pairSetupSession;
    unsigned int _pairSetupXID;
    id *_pairVerifyCompletion;
    BOOL _pairVerifyEnded;
    unsigned int _pairVerifyFlags;
    *PairingSessionPrivate _pairVerifySession;
    NSMutableDictionary *_requestQueue;
    BOOL _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
    SFTRSession *_sfTRSession;
}


@property (nonatomic) NSInteger bluetoothState; // ivar: _bluetoothState
@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *eventMessageHandler; // ivar: _eventMessageHandler
@property (copy, nonatomic) NSString *fixedPIN; // ivar: _fixedPIN
@property (nonatomic) NSUInteger heartbeatLastTicks; // ivar: _heartbeatLastTicks
@property (copy, nonatomic) id *hidePINHandler; // ivar: _hidePINHandler
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) CUMessageSession *messageSessionTemplate; // ivar: _messageSessionTemplate
@property (copy, nonatomic) NSString *myAppleID; // ivar: _myAppleID
@property (retain, nonatomic) CUAppleIDClient *myAppleIDInfoClient; // ivar: _myAppleIDInfoClient
@property (copy, nonatomic) NSDictionary *pairSetupACL; // ivar: _pairSetupACL
@property (copy, nonatomic) id *pairSetupCompletionHandler; // ivar: _pairSetupCompletionHandler
@property (copy, nonatomic) NSDictionary *pairVerifyACL; // ivar: _pairVerifyACL
@property (copy, nonatomic) NSUUID *peer; // ivar: _peer
@property (copy, nonatomic) NSString *peerAppleID; // ivar: _peerAppleID
@property (copy, nonatomic) NSString *peerContactIdentifier; // ivar: _peerContactIdentifier
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (copy, nonatomic) id *receivedFrameHandler; // ivar: _receivedFrameHandler
@property (copy, nonatomic) id *receivedObjectHandler; // ivar: _receivedObjectHandler
@property (copy, nonatomic) id *receivedRequestHandler; // ivar: _receivedRequestHandler
@property (readonly, copy, nonatomic) NSMutableDictionary *requestHandlers; // ivar: _requestHandlers
@property (copy, nonatomic) id *requestMessageHandler; // ivar: _requestMessageHandler
@property (copy, nonatomic) id *responseMessageInternalHandler; // ivar: _responseMessageInternalHandler
@property (copy, nonatomic) id *sendFrameHandler; // ivar: _sendFrameHandler
@property (copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (nonatomic) unsigned char serviceType; // ivar: _serviceType
@property (copy, nonatomic) NSUUID *serviceUUID; // ivar: _serviceUUID
@property (nonatomic) unsigned int sessionFlags; // ivar: _sessionFlags
@property (nonatomic) unsigned int sessionID; // ivar: _sessionID
@property (copy, nonatomic) id *sessionStartedHandler; // ivar: _sessionStartedHandler
@property (nonatomic) unsigned int sharingSourceVersion; // ivar: _sharingSourceVersion
@property (copy, nonatomic) id *showPINHandlerEx; // ivar: _showPINHandlerEx
@property (retain, nonatomic) SDStatusMonitor *statusMonitor; // ivar: _statusMonitor
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // ivar: _testListenerEndpoint
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (copy, nonatomic) id *timeoutHandler; // ivar: _timeoutHandler
@property (nonatomic) BOOL touchRemoteEnabled; // ivar: _touchRemoteEnabled
@property (retain, nonatomic) TRSession *trSession; // ivar: _trSession


+(BOOL)supportsSecureCoding;
-(BOOL)_appleIDAddProof:(id)arg0 error:(*id)arg1 ;
-(BOOL)_sessionReceivedEvent:(id)arg0 flags:(unsigned int)arg1 ;
-(BOOL)_sessionReceivedRegisteredRequestID:(id)arg0 flags:(unsigned int)arg1 xidKey:(id)arg2 xidValue:(id)arg3 ;
-(BOOL)_sessionReceivedRequest:(id)arg0 flags:(unsigned int)arg1 responseHandler:(id)arg2 ;
-(BOOL)pairingContainsACL:(id)arg0 ;
-(id)_appleIDVerifyProof:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)pairingDeriveKeyForIdentifier:(id)arg0 keyLength:(NSUInteger)arg1 ;
-(int)setEncryptionReadKey:(char *)arg0 readKeyLen:(NSUInteger)arg1 writeKey:(char *)arg2 writeKeyLen:(NSUInteger)arg3 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_activated;
-(void)_activatedIfReady:(id)arg0 ;
-(void)_cleanup;
-(void)_deregisterRequestID:(id)arg0 ;
-(void)_ensureXPCStarted;
-(void)_fetchInfo;
-(void)_hearbeatTimer;
-(void)_interrupted;
-(void)_invalidated;
-(void)_pairSetup:(id)arg0 start:(BOOL)arg1 ;
-(void)_pairSetupCompleted:(int)arg0 ;
-(void)_pairSetupTryPIN:(id)arg0 ;
// -(void)_pairSetupWithFlags:(unsigned int)arg0 completion:(id)arg1 isServer:(unk)arg2  ;
-(void)_pairVerify:(id)arg0 start:(BOOL)arg1 ;
-(void)_pairVerifyCompleted:(int)arg0 ;
-(void)_pairVerifyWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
-(void)_registerRequestID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)_sendEncryptedObject:(id)arg0 ;
-(void)_sendFrameType:(unsigned char)arg0 object:(id)arg1 ;
-(void)_sendRequestID:(id)arg0 options:(id)arg1 request:(id)arg2 responseHandler:(id)arg3 ;
-(void)_sendRequestWithFlags:(unsigned int)arg0 object:(id)arg1 responseHandler:(id)arg2 ;
-(void)_serviceInitiatedPairSetup:(id)arg0 ;
-(void)_sessionReceivedEncryptedData:(id)arg0 type:(unsigned char)arg1 ;
-(void)_sessionReceivedObject:(id)arg0 flags:(unsigned int)arg1 ;
-(void)_sessionReceivedRequestID:(id)arg0 object:(id)arg1 flags:(unsigned int)arg2 ;
-(void)_sessionReceivedResponseID:(id)arg0 object:(id)arg1 flags:(unsigned int)arg2 ;
-(void)_sessionReceivedStartAck:(id)arg0 ;
-(void)_sessionReceivedUnencryptedData:(id)arg0 type:(unsigned char)arg1 ;
-(void)_setupMessageSession;
-(void)_setupTouchRemote;
-(void)_startTimeoutIfNeeded;
-(void)_tearDownMessageSession;
-(void)_tearDownTouchRemote;
-(void)activateWithCompletion:(id)arg0 ;
-(void)appleIDAddProof:(id)arg0 dispatchQueue:(id)arg1 completion:(id)arg2 ;
-(void)appleIDVerifyProof:(id)arg0 dispatchQueue:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)deregisterRequestID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)pairSetupTryPIN:(id)arg0 ;
-(void)pairSetupWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
// -(void)pairSetupWithFlags:(unsigned int)arg0 completion:(id)arg1 isServer:(unk)arg2  ;
-(void)pairVerifyWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
-(void)registerForExternalIO:(id)arg0 ;
-(void)registerRequestID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)sendEvent:(id)arg0 ;
-(void)sendExternalIO:(id)arg0 ;
-(void)sendFrameType:(unsigned char)arg0 data:(id)arg1 ;
-(void)sendFrameType:(unsigned char)arg0 object:(id)arg1 ;
-(void)sendRequest:(id)arg0 ;
-(void)sendRequestID:(id)arg0 options:(id)arg1 request:(id)arg2 responseHandler:(id)arg3 ;
-(void)sendRequestWithFlags:(unsigned int)arg0 object:(id)arg1 responseHandler:(id)arg2 ;
-(void)sendResponse:(id)arg0 ;
-(void)sendWithFlags:(unsigned int)arg0 object:(id)arg1 ;
-(void)sessionBluetoothStateChanged:(NSInteger)arg0 ;
-(void)sessionError:(id)arg0 ;
-(void)sessionReceivedEvent:(id)arg0 ;
-(void)sessionReceivedFragmentData:(id)arg0 last:(BOOL)arg1 ;
-(void)sessionReceivedFrameType:(unsigned char)arg0 data:(id)arg1 ;
-(void)sessionReceivedRequest:(id)arg0 ;
-(void)sessionReceivedResponse:(id)arg0 ;


@end


#endif