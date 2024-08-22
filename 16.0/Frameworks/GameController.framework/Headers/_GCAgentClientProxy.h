// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCAGENTCLIENTPROXY_H
#define _GCAGENTCLIENTPROXY_H

@class NSArray;
@protocol GCUserDefaultsXPCProxyServiceRemoteServerInterface, _GCAgentServerInterface, _GCIPCIncomingConnection;

#import <Foundation/Foundation.h>

#import "_GCControllerManagerServer.h"
#import "GCRemoteUserDefaultsProxy.h"

@interface _GCAgentClientProxy : NSObject <GCUserDefaultsXPCProxyServiceRemoteServerInterface, _GCAgentServerInterface>

 {
    _GCControllerManagerServer *_server;
    uint8_t _invalid;
    id<_GCIPCIncomingConnection> *_connection;
    id *_connectionInvalidationRegistration;
    id *_connectionInterruptedRegistration;
    GCRemoteUserDefaultsProxy *_userDefaultsProxy;
}


@property (copy) NSArray *invalidationHandlers; // ivar: _invalidationHandlers
@property (readonly, weak, nonatomic) GCRemoteUserDefaultsProxy *userDefaultsProxy;


+(id)clientProxyWithConnection:(id)arg0 server:(id)arg1 userDefaultsProxy:(id)arg2 ;
-(id)_initWithConnection:(id)arg0 server:(id)arg1 userDefaultsProxy:(id)arg2 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)redactedDescription;
-(void)_invalidate;
-(void)connectToUserDefaultsXPCProxyServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)connectToVideoRelocationXPCProxyServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)getTheLastGeneratedURLWithReply:(id)arg0 ;
-(void)observeUserDefaultsValueForKeyPath:(id)arg0 change:(id)arg1 ;
-(void)pingWithReply:(id)arg0 ;
-(void)userDefaultsCheckIn:(id)arg0 ;


@end


#endif