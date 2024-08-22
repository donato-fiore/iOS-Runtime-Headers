// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXEXTENSIONPROCESSHANDLE_H
#define _EXEXTENSIONPROCESSHANDLE_H

@class BKSProcessAssertion, _EXInternalHostConnection, NSHashTable, RBSProcessIdentity, NSArray, NSXPCListenerEndpoint;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_EXLaunchConfiguration.h"
#import "_EXExtensionProcessMannger.h"

@interface _EXExtensionProcessHandle : NSObject <NSSecureCoding>



@property (readonly) BKSProcessAssertion *assertion; // ivar: _assertion
@property (readonly) ? auditToken; // ivar: _auditToken
@property (weak) _EXInternalHostConnection *internalConnection; // ivar: _internalConnection
@property (readonly) _EXLaunchConfiguration *launchConfiguration; // ivar: _launchConfiguration
@property (weak) _EXExtensionProcessMannger *manager; // ivar: _manager
@property (retain) NSHashTable *observers; // ivar: _observers
@property os_unfair_lock_s observersLock; // ivar: _observersLock
@property (readonly) int pid;
@property (readonly) RBSProcessIdentity *processIdentity; // ivar: _processIdentity
@property (retain) NSArray *sandboxExtensions; // ivar: _sandboxExtensions
@property (readonly) NSXPCListenerEndpoint *serviceListenerEndpoint; // ivar: _serviceListenerEndpoint
@property (readonly, getter=isValid) BOOL valid;
@property os_unfair_lock_s xpcConnectionLock; // ivar: _xpcConnectionLock
@property (retain) NSHashTable *xpcConnections; // ivar: _xpcConnections


+(BOOL)supportsSecureCoding;
-(id)aquireAsertionWithError:(*id)arg0 ;
-(id)configuration;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLaunchConfiguration:(id)arg0 auditToken:(struct ? )arg1 processIdentity:(id)arg2 sandboxExtensions:(id)arg3 ;
-(id)makeSessionXPCConnection;
-(id)makeXPCConnection;
-(id)makeXPCConnectionRetainProcess:(BOOL)arg0 withError:(*id)arg1 ;
-(void)_handleAssertionInvalidation;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;


@end


#endif