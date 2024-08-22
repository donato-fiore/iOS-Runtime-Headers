// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AACUSTODIANDAEMONCONNECTION_H
#define AACUSTODIANDAEMONCONNECTION_H

@class NSXPCConnection, NSXPCListenerEndpoint;

#import <Foundation/Foundation.h>


@interface AACustodianDaemonConnection : NSObject {
    os_unfair_lock_s _unfairLock;
    NSXPCConnection *_connection;
}


@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint


-(id)_connection;
-(id)init;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_connectionInterruptionHandler;
-(void)_connectionInvalidationHandler;
-(void)dealloc;


@end


#endif