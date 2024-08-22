// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPREMOTEDISPLAYSERVER_H
#define RPREMOTEDISPLAYSERVER_H

@class NSMutableDictionary, NSXPCConnection, NSArray, NSString;
@protocol NSSecureCoding, RPAuthenticatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPRemoteDisplayServer : NSObject <NSSecureCoding, RPAuthenticatable>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_sessions;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSArray *allowedMACAddresses; // ivar: _allowedMACAddresses
@property (copy, nonatomic) id *authCompletionHandler; // ivar: _authCompletionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *hidePasswordHandler; // ivar: _hidePasswordHandler
@property (readonly, nonatomic) unsigned int internalAuthFlags; // ivar: _internalAuthFlags
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSArray *pairSetupACL; // ivar: _pairSetupACL
@property (nonatomic) unsigned int pairSetupFlags; // ivar: _pairSetupFlags
@property (nonatomic) unsigned int pairVerifyFlags; // ivar: _pairVerifyFlags
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) int passwordType; // ivar: _passwordType
@property (readonly, nonatomic) int passwordTypeActual; // ivar: _passwordTypeActual
@property (copy, nonatomic) id *promptForPasswordHandler; // ivar: _promptForPasswordHandler
@property (copy, nonatomic) id *sessionEndedHandler; // ivar: _sessionEndedHandler
@property (copy, nonatomic) id *sessionStartHandler; // ivar: _sessionStartHandler
@property (copy, nonatomic) id *showPasswordHandler; // ivar: _showPasswordHandler


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
// -(void)_activateWithCompletion:(id)arg0 reactivate:(unk)arg1  ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)remoteDisplayHidePasswordWithFlags:(unsigned int)arg0 ;
-(void)remoteDisplayReceivedEventID:(id)arg0 event:(id)arg1 options:(id)arg2 sessionID:(id)arg3 ;
// -(void)remoteDisplayReceivedRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 sessionID:(unk)arg4  ;
-(void)remoteDisplaySessionEndedWithID:(id)arg0 ;
-(void)remoteDisplayShowPassword:(id)arg0 flags:(unsigned int)arg1 ;
-(void)remoteDisplayStartServerSessionID:(id)arg0 device:(id)arg1 completion:(id)arg2 ;
-(void)tryPassword:(id)arg0 ;


@end


#endif