// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPCONNECTION_H
#define RPCONNECTION_H

@class NSString, NSError, CUPairingStream, NSData, CUPairingSession, NSMutableDictionary, NSMutableArray, NSArray, NSDictionary, CUBLEConnection, NSUUID, CUBonjourDevice, CUBluetoothScalablePipe, CUHomeKitManager, RPIdentityDaemon, CUNetLinkManager, CUTCPConnection;
@protocol RPAuthenticatable, OS_dispatch_source, CUReadWriteRequestable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RPIdentity.h"
#import "RPCompanionLinkDevice.h"

@interface RPConnection : NSObject <RPAuthenticatable>

 {
    BOOL _activateCalled;
    NSString *_selfAddrString;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_source> *_probeTimer;
    BOOL _retryFired;
    NSUInteger _retryTicks;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_source> *_startTimer;
    int _internalState;
    BOOL _stepDone;
    NSError *_stepError;
    NSUInteger _highPriorityAuthTagLength;
    CUPairingStream *_highPriorityStream;
    NSString *_homeKitIdentityIdentifier;
    NSData *_homeKitIdentitySignature;
    NSUInteger _mainAuthTagLength;
    CUPairingStream *_mainStream;
    int _pairSetupAuthType;
    CUPairingSession *_pairSetupSession;
    int _pairVerifyAuthType;
    BOOL _pairVerifyCompleted;
    BOOL _pairVerifyFailed;
    int _pairVerifyIdentityType;
    CUPairingSession *_pairVerifySession;
    BOOL _pairVerifyUsedIdentity;
    ? _readFrame;
    ? _readFrameBTPipeHighPriority;
    id<CUReadWriteRequestable> *_requestable;
    NSMutableDictionary *_requests;
    int _retryCount;
    NSMutableArray *_sendArray;
    BOOL _showPasswordCalled;
    *LogCategory _ucat;
    unsigned int _xidLast;
    NSUInteger _receivedFrameCountCurrent;
    NSUInteger _receivedFrameCountLast;
}


@property (retain, nonatomic) NSArray *allowedMACAddresses; // ivar: _allowedMACAddresses
@property (copy, nonatomic) NSString *appID; // ivar: _appID
@property (readonly, copy, nonatomic) NSDictionary *appInfoPeer; // ivar: _appInfoPeer
@property (copy, nonatomic) NSDictionary *appInfoSelf; // ivar: _appInfoSelf
@property (copy, nonatomic) id *authCompletionHandler; // ivar: _authCompletionHandler
@property (nonatomic) NSInteger bleClientUseCase; // ivar: _bleClientUseCase
@property (retain, nonatomic) CUBLEConnection *bleConnection; // ivar: _bleConnection
@property (copy, nonatomic) NSUUID *blePeerIdentifier; // ivar: _blePeerIdentifier
@property (retain, nonatomic) CUBonjourDevice *bonjourPeerDevice; // ivar: _bonjourPeerDevice
@property (retain, nonatomic) CUBluetoothScalablePipe *btPipe; // ivar: _btPipe
@property (retain, nonatomic) CUBluetoothScalablePipe *btPipeHighPriority; // ivar: _btPipeHighPriority
@property (retain, nonatomic) id *client; // ivar: _client
@property (nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (nonatomic) BOOL clientMode; // ivar: _clientMode
@property (nonatomic) NSUInteger controlFlags; // ivar: _controlFlags
@property (copy, nonatomic) NSString *destinationString; // ivar: _destinationString
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) BOOL flowControlReadEnabled; // ivar: _flowControlReadEnabled
@property (copy, nonatomic) id *flowControlWriteChangedHandler; // ivar: _flowControlWriteChangedHandler
@property (readonly, nonatomic) int flowControlWriteState;
@property (retain, nonatomic) RPIdentity *forcedPeerIdentity; // ivar: _forcedPeerIdentity
@property (retain, nonatomic) RPIdentity *forcedSelfIdentity; // ivar: _forcedSelfIdentity
@property (copy, nonatomic) id *hidePasswordHandler; // ivar: _hidePasswordHandler
@property (retain, nonatomic) CUHomeKitManager *homeKitManager; // ivar: _homeKitManager
@property (copy, nonatomic) id *homeKitUserIdentifierHandler; // ivar: _homeKitUserIdentifierHandler
@property (copy, nonatomic) NSString *identifierOverride; // ivar: _identifierOverride
@property (retain, nonatomic) RPIdentityDaemon *identityDaemon; // ivar: _identityDaemon
@property (retain, nonatomic) RPIdentity *identityResolved; // ivar: _identityResolved
@property (readonly, nonatomic) RPIdentity *identityVerified; // ivar: _identityVerified
@property (nonatomic) BOOL invalidationHandled; // ivar: _invalidationHandled
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) int keepAliveSeconds; // ivar: _keepAliveSeconds
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) int linkType; // ivar: _linkType
@property (retain, nonatomic) RPCompanionLinkDevice *localDeviceInfo; // ivar: _localDeviceInfo
@property (retain, nonatomic) CUNetLinkManager *netLinkManager; // ivar: _netLinkManager
@property (retain, nonatomic) NSArray *pairSetupACL; // ivar: _pairSetupACL
@property (nonatomic) unsigned int pairSetupFlags; // ivar: _pairSetupFlags
@property (copy, nonatomic) id *pairVerifyCompletion; // ivar: _pairVerifyCompletion
@property (nonatomic) unsigned int pairVerifyFlags; // ivar: _pairVerifyFlags
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) int passwordType; // ivar: _passwordType
@property (readonly, nonatomic) int passwordTypeActual; // ivar: _passwordTypeActual
@property (readonly, nonatomic) NSString *peerAddrString; // ivar: _peerAddrString
@property (readonly, nonatomic) RPCompanionLinkDevice *peerDeviceInfo; // ivar: _peerDeviceInfo
@property (readonly, nonatomic) NSString *peerHomeKitUserIdentifier; // ivar: _peerHomeKitUserIdentifier
@property (copy, nonatomic) NSString *peerIdentifier; // ivar: _peerIdentifier
@property (copy, nonatomic) id *peerUpdatedHandler; // ivar: _peerUpdatedHandler
@property (nonatomic) BOOL preAuthEnabled; // ivar: _preAuthEnabled
@property (nonatomic) int preferredIdentityType; // ivar: _preferredIdentityType
@property (nonatomic) BOOL present; // ivar: _present
@property (copy, nonatomic) id *promptForPasswordHandler; // ivar: _promptForPasswordHandler
@property (copy, nonatomic) id *proxyDeviceUpdateHandler; // ivar: _proxyDeviceUpdateHandler
@property (retain, nonatomic) NSMutableArray *proxyDevices; // ivar: _proxyDevices
@property (copy, nonatomic) NSData *pskData; // ivar: _pskData
@property (copy, nonatomic) id *readErrorHandler; // ivar: _readErrorHandler
@property (copy, nonatomic) id *receivedEventHandler; // ivar: _receivedEventHandler
@property (copy, nonatomic) id *receivedRequestHandler; // ivar: _receivedRequestHandler
@property (copy, nonatomic) id *sessionStartHandler; // ivar: _sessionStartHandler
@property (copy, nonatomic) id *showPasswordHandler; // ivar: _showPasswordHandler
@property (nonatomic) int state; // ivar: _state
@property (copy, nonatomic) id *stateChangedHandler; // ivar: _stateChangedHandler
@property (readonly, nonatomic) NSUInteger statusFlags; // ivar: _statusFlags
@property (retain, nonatomic) CUTCPConnection *tcpConnection; // ivar: _tcpConnection
@property (nonatomic) unsigned int trafficFlags; // ivar: _trafficFlags


-(BOOL)_clientError:(id)arg0 ;
-(BOOL)_pairVerifyVerifySignature:(id)arg0 data:(id)arg1 flags:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)_serverPairingAllowed;
-(id)_allowedMACAddressesForMCFeature:(id)arg0 ;
-(id)_identityProofDataClient;
-(id)_identityProofDataServer;
-(id)_pairVerifySignData:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)_systeminfo;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_abortRequestsWithError:(id)arg0 ;
-(void)_clientConnectCompleted:(id)arg0 ;
-(void)_clientNetworkError:(id)arg0 label:(char *)arg1 ;
-(void)_clientPairSetupCompleted:(id)arg0 ;
-(void)_clientPairSetupPromptWithFlags:(unsigned int)arg0 throttleSeconds:(int)arg1 handler:(id)arg2 ;
-(void)_clientPairSetupWithData:(id)arg0 ;
-(void)_clientPairVerifyCompleted:(id)arg0 ;
-(void)_clientPairVerifyWithData:(id)arg0 ;
-(void)_clientPreAuthResponseWithData:(id)arg0 ;
-(void)_identityProofsAdd:(id)arg0 update:(BOOL)arg1 ;
-(void)_identityProofsVerify:(id)arg0 ;
-(void)_identityProofsVerifyHomeKitSignature:(id)arg0 identifier:(id)arg1 ;
-(void)_idleTimerFired;
-(void)_idleTimerStart:(unsigned int)arg0 repeat:(unsigned int)arg1 ;
-(void)_invalidate;
-(void)_invalidateCore:(id)arg0 ;
-(void)_invalidateWithError:(id)arg0 ;
-(void)_invalidated;
-(void)_pairSetupInvalidate;
-(void)_pairVerifyInvalidate;
-(void)_processSends;
-(void)_pskPrepare:(BOOL)arg0 ;
-(void)_receiveCompletion:(id)arg0 readFrame:(struct ? *)arg1 requestable:(id)arg2 ;
-(void)_receiveStart:(id)arg0 readFrame:(struct ? *)arg1 requestable:(id)arg2 ;
-(void)_receivedEvent:(id)arg0 ctx:(struct ? *)arg1 ;
-(void)_receivedHeader:(struct ? *)arg0 body:(id)arg1 ctx:(struct ? *)arg2 ;
-(void)_receivedHeader:(struct ? *)arg0 encryptedObjectData:(id)arg1 ctx:(struct ? *)arg2 ;
-(void)_receivedObject:(id)arg0 ctx:(struct ? *)arg1 ;
-(void)_receivedRequest:(id)arg0 ctx:(struct ? *)arg1 ;
-(void)_receivedResponse:(id)arg0 ctx:(struct ? *)arg1 ;
-(void)_receivedSystemInfo:(id)arg0 xid:(id)arg1 ;
-(void)_run;
-(void)_sendEncryptedEventID:(id)arg0 data:(id)arg1 xid:(unsigned int)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)_sendEncryptedRequestID:(id)arg0 request:(id)arg1 xpcID:(unsigned int)arg2 options:(id)arg3 sendEntry:(id)arg4 responseHandler:(id)arg5 ;
-(void)_sendEncryptedResponse:(id)arg0 error:(id)arg1 xid:(id)arg2 requestID:(id)arg3 highPriority:(BOOL)arg4 isChatty:(BOOL)arg5 ;
-(void)_sendFrameType:(unsigned char)arg0 body:(id)arg1 ;
-(void)_sendFrameType:(unsigned char)arg0 unencryptedObject:(id)arg1 ;
-(void)_serverAccept;
-(void)_serverAcceptBLE;
-(void)_serverAcceptBTPipe;
-(void)_serverAcceptTCP;
-(void)_serverError:(id)arg0 ;
-(void)_serverNetworkError:(id)arg0 label:(char *)arg1 ;
-(void)_serverPairSetupCompleted:(id)arg0 ;
-(void)_serverPairSetupWithData:(id)arg0 start:(BOOL)arg1 ;
-(void)_serverPairVerifyCompleted:(id)arg0 ;
-(void)_serverPairVerifyWithData:(id)arg0 start:(BOOL)arg1 ;
-(void)_serverPreAuthRequestWithData:(id)arg0 ;
-(void)_serverRun;
-(void)_serverStarted;
-(void)_timeoutForSendEntry:(id)arg0 ;
-(void)_timeoutForXID:(id)arg0 ;
-(void)_updateExternalState;
-(void)_updateLinkInfo;
-(void)activate;
-(void)dealloc;
-(void)homeKitIdentityUpdated;
-(void)invalidate;
-(void)invalidateWithError:(id)arg0 ;
-(void)processSendsUsingConnection:(id)arg0 ;
-(void)sendEncryptedEventID:(id)arg0 data:(id)arg1 xid:(unsigned int)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)sendEncryptedEventID:(id)arg0 event:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)sendEncryptedRequestID:(id)arg0 request:(id)arg1 xpcID:(unsigned int)arg2 options:(id)arg3 responseHandler:(id)arg4 ;
-(void)sendReachabilityProbe:(char *)arg0 ;
-(void)sessionStopped:(id)arg0 ;
-(void)tryPassword:(id)arg0 ;


@end


#endif