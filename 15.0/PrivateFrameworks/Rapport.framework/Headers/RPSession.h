// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPSESSION_H
#define RPSESSION_H

@class NSXPCConnection, NSArray, NSString;
@protocol NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, RPMessageable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RPConnection.h"
#import "RPEndpoint.h"

@interface RPSession : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, RPMessageable>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSArray *allowedMACAddresses; // ivar: _allowedMACAddresses
@property (copy, nonatomic) id *authCompletionHandler; // ivar: _authCompletionHandler
@property (retain, nonatomic) RPConnection *cnx; // ivar: _cnx
@property (nonatomic) NSUInteger controlFlags; // ivar: _controlFlags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *hidePasswordHandler; // ivar: _hidePasswordHandler
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSArray *pairSetupACL; // ivar: _pairSetupACL
@property (nonatomic) unsigned int pairSetupFlags; // ivar: _pairSetupFlags
@property (nonatomic) unsigned int pairVerifyFlags; // ivar: _pairVerifyFlags
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) int passwordType; // ivar: _passwordType
@property (readonly, nonatomic) int passwordTypeActual; // ivar: _passwordTypeActual
@property (retain, nonatomic) RPEndpoint *peerEndpoint; // ivar: _peerEndpoint
@property (copy, nonatomic) NSString *peerID; // ivar: _peerID
@property (copy, nonatomic) id *promptForPasswordHandler; // ivar: _promptForPasswordHandler
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (nonatomic) NSUInteger sessionID; // ivar: _sessionID
@property (copy, nonatomic) id *showPasswordHandler; // ivar: _showPasswordHandler
@property (nonatomic) NSUInteger startTicks; // ivar: _startTicks


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
// -(void)_activateWithCompletion:(id)arg0 reactivate:(unk)arg1  ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deregisterEventID:(id)arg0 ;
-(void)deregisterRequestID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)registerEventID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)registerRequestID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)sendEventID:(id)arg0 event:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)sendEventID:(id)arg0 event:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 destinationID:(id)arg2 options:(id)arg3 responseHandler:(id)arg4 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)tryPassword:(id)arg0 ;


@end


#endif