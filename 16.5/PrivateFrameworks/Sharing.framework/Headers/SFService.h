// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSERVICE_H
#define SFSERVICE_H

@class NSMutableDictionary, NSXPCConnection, NSData, NSString, CUAppleIDClient, NSDictionary, NSUUID, NSXPCListenerEndpoint;
@protocol NSSecureCoding, SFXPCInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFService : NSObject <NSSecureCoding, SFXPCInterface>

 {
    BOOL _activateCalled;
    BOOL _activateInProgress;
    BOOL _activateCompleted;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_requestQueue;
    NSMutableDictionary *_sessions;
    *LogCategory _ucatCore;
    *LogCategory _ucatCrypto;
    id *_pairSetupCompletion;
    BOOL _pairSetupEnded;
    unsigned int _pairSetupFlags;
    *PairingSessionPrivate _pairSetupSession;
    unsigned int _pairSetupXID;
    NSXPCConnection *_xpcCnx;
}


@property (nonatomic) NSInteger advertiseRate; // ivar: _advertiseRate
@property (copy, nonatomic) NSData *authTagOverride; // ivar: _authTagOverride
@property (nonatomic) BOOL autoUnlockEnabled; // ivar: _autoUnlockEnabled
@property (nonatomic) BOOL autoUnlockWatch; // ivar: _autoUnlockWatch
@property (nonatomic) unsigned char deviceActionType; // ivar: _deviceActionType
@property (nonatomic) unsigned char deviceClassCode; // ivar: _deviceClassCode
@property (nonatomic) unsigned char deviceColorCode; // ivar: _deviceColorCode
@property (nonatomic) unsigned char deviceModelCode; // ivar: _deviceModelCode
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) BOOL duetSync; // ivar: _duetSync
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *eventMessageHandler; // ivar: _eventMessageHandler
@property (copy, nonatomic) NSString *fixedPIN; // ivar: _fixedPIN
@property (nonatomic) NSString *forcedPin; // ivar: _forcedPin
@property (nonatomic) BOOL hasProblem; // ivar: _hasProblem
@property (copy, nonatomic) id *hidePINHandler; // ivar: _hidePINHandler
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) BOOL isCLIMode; // ivar: _isCLIMode
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *myAppleID; // ivar: _myAppleID
@property (retain, nonatomic) CUAppleIDClient *myAppleIDInfoClient; // ivar: _myAppleIDInfoClient
@property (nonatomic) BOOL needsAWDL; // ivar: _needsAWDL
@property (nonatomic) BOOL needsKeyboard; // ivar: _needsKeyboard
@property (nonatomic) BOOL needsSetup; // ivar: _needsSetup
@property (nonatomic) BOOL overrideScreenOff; // ivar: _overrideScreenOff
@property (copy, nonatomic) NSDictionary *pairSetupACL; // ivar: _pairSetupACL
@property (copy, nonatomic) id *pairSetupCompletionHandler; // ivar: _pairSetupCompletionHandler
@property (nonatomic) BOOL pairSetupDisabled; // ivar: _pairSetupDisabled
@property (copy, nonatomic) NSDictionary *pairVerifyACL; // ivar: _pairVerifyACL
@property (copy, nonatomic) NSString *peerAppleID; // ivar: _peerAppleID
@property (copy, nonatomic) id *peerDisconnectedHandler; // ivar: _peerDisconnectedHandler
@property (nonatomic) unsigned int pinType; // ivar: _pinType
@property (nonatomic) NSUInteger problemFlags; // ivar: _problemFlags
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (copy, nonatomic) id *receivedFramePeerHandler; // ivar: _receivedFramePeerHandler
@property (copy, nonatomic) id *receivedObjectHandler; // ivar: _receivedObjectHandler
@property (copy, nonatomic) id *receivedRequestHandler; // ivar: _receivedRequestHandler
@property (copy, nonatomic) id *requestMessageHandler; // ivar: _requestMessageHandler
@property (copy, nonatomic) NSString *requestSSID; // ivar: _requestSSID
@property (copy, nonatomic) id *responseMessageInternalHandler; // ivar: _responseMessageInternalHandler
@property (copy, nonatomic) id *sendFramePeerHandler; // ivar: _sendFramePeerHandler
@property (nonatomic) unsigned char serviceType; // ivar: _serviceType
@property (copy, nonatomic) NSUUID *serviceUUID; // ivar: _serviceUUID
@property (copy, nonatomic) id *sessionEndedHandler; // ivar: _sessionEndedHandler
@property (nonatomic) unsigned int sessionFlags; // ivar: _sessionFlags
@property (copy, nonatomic) id *sessionSecuredHandler; // ivar: _sessionSecuredHandler
@property (copy, nonatomic) id *sessionStartedHandler; // ivar: _sessionStartedHandler
@property (copy, nonatomic) id *showPINHandler; // ivar: _showPINHandler
@property (copy, nonatomic) id *showPINHandlerEx; // ivar: _showPINHandlerEx
@property (nonatomic) BOOL supportsAirPlayReceiver; // ivar: _supportsAirPlayReceiver
@property (retain, nonatomic) NSData *targetAuthTag; // ivar: _targetAuthTag
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // ivar: _testListenerEndpoint
@property (nonatomic) BOOL touchRemoteEnabled; // ivar: _touchRemoteEnabled
@property (nonatomic) BOOL wakeDevice; // ivar: _wakeDevice
@property (nonatomic) BOOL watchLocked; // ivar: _watchLocked
@property (nonatomic) BOOL wifiP2P; // ivar: _wifiP2P


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(int)setEncryptionReadKey:(char *)arg0 readKeyLen:(NSUInteger)arg1 writeKey:(char *)arg2 writeKeyLen:(NSUInteger)arg3 peer:(id)arg4 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_activated;
-(void)_cleanup;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)_performActivateSafeChange:(id)arg0 ;
-(void)_sendToPeer:(id)arg0 type:(unsigned char)arg1 data:(id)arg2 ;
-(void)_sendToPeer:(id)arg0 type:(unsigned char)arg1 unencryptedObject:(id)arg2 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)clearEncryptionInfoForPeer:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)pairSetupTryPIN:(id)arg0 peer:(id)arg1 ;
-(void)pairSetupWithFlags:(unsigned int)arg0 peer:(id)arg1 ;
-(void)sendEvent:(id)arg0 ;
-(void)sendRequest:(id)arg0 ;
-(void)sendResponse:(id)arg0 ;
-(void)sendToPeer:(id)arg0 flags:(unsigned int)arg1 object:(id)arg2 ;
-(void)sendToPeer:(id)arg0 type:(unsigned char)arg1 data:(id)arg2 ;
-(void)serviceError:(id)arg0 ;
-(void)servicePeerDisconnected:(id)arg0 error:(id)arg1 ;
-(void)serviceReceivedEvent:(id)arg0 ;
-(void)serviceReceivedFrameType:(unsigned char)arg0 data:(id)arg1 peer:(id)arg2 ;
-(void)serviceReceivedRequest:(id)arg0 ;
-(void)serviceReceivedResponse:(id)arg0 ;
-(void)serviceSessionFailed:(id)arg0 error:(id)arg1 ;
-(void)updateWithService:(id)arg0 ;


@end


#endif