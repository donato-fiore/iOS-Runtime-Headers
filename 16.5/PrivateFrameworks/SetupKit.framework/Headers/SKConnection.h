// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKCONNECTION_H
#define SKCONNECTION_H

@class CUPairingStream, CUPairingSession, NSMutableDictionary, NSMutableArray, NSError, CBConnection, NSString, NSData;
@protocol CUActivatable, CUAuthenticatableClient, CUAuthenticatableServer, CULabelable, OS_dispatch_source, CUReadWriteRequestable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKDevice.h"

@interface SKConnection : NSObject <CUActivatable, CUAuthenticatableClient, CUAuthenticatableServer, CULabelable>

 {
    BOOL _activateCalled;
    NSUInteger _authThrottleDeadlineTicks;
    NSObject<OS_dispatch_source> *_authThrottleTimer;
    ? _frameHeader;
    id<CUReadWriteRequestable> *_requestable;
    int _runState;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSUInteger _mainAuthTagLength;
    CUPairingStream *_mainStream;
    CUPairingSession *_pairSetupSession;
    CUPairingSession *_pairVerifySession;
    BOOL _readRequested;
    BOOL _receivingHeader;
    NSMutableDictionary *_requests;
    NSMutableArray *_sendArray;
    BOOL _showPasswordCalled;
    NSObject<OS_dispatch_source> *_startTimer;
    BOOL _stepDone;
    NSError *_stepError;
    *LogCategory _ucat;
    unsigned int _xidLast;
}


@property (copy, nonatomic) id *authCompletionHandler; // ivar: _authCompletionHandler
@property (copy, nonatomic) id *authHidePasswordHandler; // ivar: _authHidePasswordHandler
@property (copy, nonatomic) id *authPromptHandler; // ivar: _authPromptHandler
@property (copy, nonatomic) id *authShowPasswordHandler; // ivar: _authShowPasswordHandler
@property (retain, nonatomic) CBConnection *bleConnection; // ivar: _bleConnection
@property (retain, nonatomic) SKDevice *blePeerDevice; // ivar: _blePeerDevice
@property (nonatomic) unsigned int bluetoothUseCase; // ivar: _bluetoothUseCase
@property (nonatomic) BOOL clientMode; // ivar: _clientMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) int passwordType; // ivar: _passwordType
@property (nonatomic) BOOL persistentPairing; // ivar: _persistentPairing
@property (copy, nonatomic) NSData *pskData; // ivar: _pskData
@property (copy, nonatomic) id *receivedEventHandler; // ivar: _receivedEventHandler
@property (copy, nonatomic) id *receivedRequestHandler; // ivar: _receivedRequestHandler
@property (copy, nonatomic) id *sendDataHandler; // ivar: _sendDataHandler
@property (nonatomic) int state; // ivar: _state
@property (copy, nonatomic) id *stateChangedHandler; // ivar: _stateChangedHandler
@property (readonly) Class superclass;


-(id)deriveKeyWithSaltPtr:(*void)arg0 saltLen:(NSUInteger)arg1 infoPtr:(*void)arg2 infoLen:(NSUInteger)arg3 keyLen:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)init;
-(void)_abortRequestsWithError:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_clientConnectCompleted:(id)arg0 ;
-(void)_clientConnectStart;
-(void)_clientConnectStartBLE;
-(void)_clientError:(id)arg0 ;
-(void)_clientPairSetupCompleted:(id)arg0 ;
-(void)_clientPairSetupContinueWithData:(id)arg0 ;
-(void)_clientPairSetupPromptWithFlags:(unsigned int)arg0 passwordType:(int)arg1 throttleSeconds:(int)arg2 ;
-(void)_clientPairSetupStart;
-(void)_clientPairVerifyCompleted:(id)arg0 ;
-(void)_clientPairVerifyStart;
-(void)_clientPairVerifyWithData:(id)arg0 ;
-(void)_clientRun;
-(void)_invalidateCore:(id)arg0 ;
-(void)_invalidateWithError:(id)arg0 ;
-(void)_invalidated;
-(void)_pairSetupInvalidate;
-(void)_pairVerifyInvalidate;
-(void)_processSends;
-(void)_pskPrepareClientMode:(BOOL)arg0 ;
-(void)_receiveCompletion:(id)arg0 ;
-(void)_receiveStart:(id)arg0 ;
-(void)_receivedEvent:(id)arg0 ;
-(void)_receivedHeader:(struct ? *)arg0 body:(id)arg1 ;
-(void)_receivedHeader:(struct ? *)arg0 encryptedObjectData:(id)arg1 ;
-(void)_receivedObject:(id)arg0 ;
-(void)_receivedRequest:(id)arg0 ;
-(void)_receivedResponse:(id)arg0 ;
-(void)_run;
-(void)_sendEventID:(id)arg0 data:(id)arg1 xid:(unsigned int)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)_sendFrameType:(unsigned char)arg0 body:(id)arg1 ;
-(void)_sendFrameType:(unsigned char)arg0 unencryptedObject:(id)arg1 ;
-(void)_sendHeaderData:(id)arg0 bodyData:(id)arg1 completion:(id)arg2 ;
-(void)_sendRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 sendEntry:(id)arg3 responseHandler:(id)arg4 ;
-(void)_sendResponse:(id)arg0 error:(id)arg1 xid:(id)arg2 requestID:(id)arg3 completion:(id)arg4 ;
-(void)_serverAccept;
-(void)_serverAcceptBLE;
-(void)_serverError:(id)arg0 ;
-(void)_serverPairSetupCompleted:(id)arg0 ;
-(void)_serverPairSetupContinueWithData:(id)arg0 start:(BOOL)arg1 ;
-(void)_serverPairVerifyCompleted:(id)arg0 ;
-(void)_serverPairVerifyContinueWithData:(id)arg0 start:(BOOL)arg1 ;
-(void)_serverRun;
-(void)_timeoutForSendEntry:(id)arg0 ;
-(void)_timeoutForXID:(id)arg0 ;
-(void)_updateExternalState;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)receivedData:(id)arg0 ;
-(void)sendEventID:(id)arg0 data:(id)arg1 xid:(unsigned int)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)sendEventID:(id)arg0 event:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)tryPassword:(id)arg0 ;


@end


#endif