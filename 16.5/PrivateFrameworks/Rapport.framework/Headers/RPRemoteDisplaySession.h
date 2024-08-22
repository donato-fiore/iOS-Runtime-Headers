// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPREMOTEDISPLAYSESSION_H
#define RPREMOTEDISPLAYSESSION_H

@class NSMutableDictionary, NSArray, CUBonjourDevice, NSString, NSNumber, NSXPCConnection;
@protocol NSSecureCoding, RPRemoteDisplayXPCClientInterface, RPAuthenticatable, RPMessageable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RPRemoteDisplayDevice.h"
#import "RPRemoteDisplayServer.h"

@interface RPRemoteDisplaySession : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface, RPAuthenticatable, RPMessageable>

 {
    BOOL _activateCalled;
    NSMutableDictionary *_eventRegistrations;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_requestRegistrations;
}


@property (retain, nonatomic) NSArray *allowedMACAddresses; // ivar: _allowedMACAddresses
@property (copy, nonatomic) id *authCompletionHandler; // ivar: _authCompletionHandler
@property (retain, nonatomic) CUBonjourDevice *bonjourDevice; // ivar: _bonjourDevice
@property (nonatomic) NSUInteger controlFlags; // ivar: _controlFlags
@property (retain, nonatomic) RPRemoteDisplayDevice *daemonDevice; // ivar: _daemonDevice
@property (retain, nonatomic) RPRemoteDisplayDevice *destinationDevice; // ivar: _destinationDevice
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *hidePasswordHandler; // ivar: _hidePasswordHandler
@property (readonly, nonatomic) unsigned int internalAuthFlags; // ivar: _internalAuthFlags
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) BOOL needsAWDL; // ivar: _needsAWDL
@property (retain, nonatomic) NSArray *pairSetupACL; // ivar: _pairSetupACL
@property (nonatomic) unsigned int pairSetupFlags; // ivar: _pairSetupFlags
@property (nonatomic) unsigned int pairVerifyFlags; // ivar: _pairVerifyFlags
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) int passwordType; // ivar: _passwordType
@property (readonly, nonatomic) int passwordTypeActual; // ivar: _passwordTypeActual
@property (copy, nonatomic) id *promptForPasswordHandler; // ivar: _promptForPasswordHandler
@property (retain, nonatomic) RPRemoteDisplayServer *server; // ivar: _server
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (copy, nonatomic) NSNumber *sessionID; // ivar: _sessionID
@property (copy, nonatomic) id *showPasswordHandler; // ivar: _showPasswordHandler
@property (retain, nonatomic) NSXPCConnection *xpcCnx; // ivar: _xpcCnx


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
// -(void)_activateWithCompletion:(id)arg0 reactivate:(unk)arg1  ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)_sendEventID:(id)arg0 event:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)_sendRequestID:(id)arg0 request:(id)arg1 destinationID:(id)arg2 options:(id)arg3 responseHandler:(id)arg4 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)deregisterEventID:(id)arg0 ;
-(void)deregisterRequestID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)registerEventID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)registerRequestID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)remoteDisplayAuthCompleted:(id)arg0 ;
-(void)remoteDisplayPromptForPasswordWithFlags:(unsigned int)arg0 throttleSeconds:(int)arg1 ;
-(void)remoteDisplayReceivedEventID:(id)arg0 event:(id)arg1 options:(id)arg2 ;
-(void)remoteDisplayReceivedRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)remoteDisplaySessionError:(id)arg0 ;
-(void)sendEventID:(id)arg0 event:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)sendEventID:(id)arg0 event:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 destinationID:(id)arg2 options:(id)arg3 responseHandler:(id)arg4 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)tryPassword:(id)arg0 ;


@end


#endif