// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAUTHORIZATIONDAEMONCONNECTION_H
#define AKAUTHORIZATIONDAEMONCONNECTION_H

@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol AKAuthorizationClientProtocol;

#import <Foundation/Foundation.h>


@interface AKAuthorizationDaemonConnection : NSObject {
    os_unfair_lock_s _unfairLock;
    NSXPCConnection *_connection;
    id<AKAuthorizationClientProtocol> *_contextManager;
}


@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint


-(id)_connection;
-(id)init;
-(id)initWithListenerEndpoint:(id)arg0 exportedInterface:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_connectionInterruptionHandler;
-(void)_connectionInvalidationHandler;
-(void)dealloc;


@end


#endif