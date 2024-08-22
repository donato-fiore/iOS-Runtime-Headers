// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPSERVER_H
#define RPSERVER_H

@class NSXPCConnection, NSArray, NSString;
@protocol NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPServer : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable>

 {
    BOOL _activateCalled;
    BOOL _changesPending;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
}


@property (copy, nonatomic) id *acceptHandler; // ivar: _acceptHandler
@property (retain, nonatomic) NSArray *allowedMACAddresses; // ivar: _allowedMACAddresses
@property (copy, nonatomic) id *authCompletionHandler; // ivar: _authCompletionHandler
@property (nonatomic) NSUInteger controlFlags; // ivar: _controlFlags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *hidePasswordHandler; // ivar: _hidePasswordHandler
@property (readonly, nonatomic) unsigned int internalAuthFlags; // ivar: _internalAuthFlags
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSArray *pairSetupACL; // ivar: _pairSetupACL
@property (nonatomic) unsigned int pairSetupFlags; // ivar: _pairSetupFlags
@property (nonatomic) unsigned int pairVerifyFlags; // ivar: _pairVerifyFlags
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) int passwordType; // ivar: _passwordType
@property (readonly, nonatomic) int passwordTypeActual; // ivar: _passwordTypeActual
@property (copy, nonatomic) id *promptForPasswordHandler; // ivar: _promptForPasswordHandler
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (copy, nonatomic) id *showPasswordHandler; // ivar: _showPasswordHandler


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_activateWithReactivate:(BOOL)arg0 ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)_update;
-(void)_updateIfNeededWithBlock:(id)arg0 ;
-(void)activate;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)tryPassword:(id)arg0 ;
-(void)xpcServerAcceptSession:(id)arg0 completion:(id)arg1 ;
-(void)xpcServerHidePassword:(unsigned int)arg0 ;
-(void)xpcServerShowPassword:(id)arg0 flags:(unsigned int)arg1 ;


@end


#endif