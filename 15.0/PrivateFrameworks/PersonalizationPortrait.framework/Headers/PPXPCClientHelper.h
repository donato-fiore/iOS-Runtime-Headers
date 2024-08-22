// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPXPCCLIENTHELPER_H
#define PPXPCCLIENTHELPER_H

@class NSXPCConnection, NSString, NSXPCInterface;

#import <Foundation/Foundation.h>


@interface PPXPCClientHelper : NSObject {
    _opaque_pthread_mutex_t _connLock;
    NSXPCConnection *_conn;
    NSString *_serviceName;
    NSXPCInterface *_allowedServerInterface;
    NSXPCInterface *_allowedClientInterface;
    id *_clientExportedObject;
    id *_interruptionHandler;
    id *_invalidationHandler;
}




// -(id)initWithServiceName:(id)arg0 allowedServerInterface:(id)arg1 allowedClientInterface:(id)arg2 clientExportedObject:(id)arg3 interruptionHandler:(id)arg4 invalidationHandler:(unk)arg5  ;
-(id)remoteObjectProxy;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_locked_establishConnection;
-(void)dealloc;


@end


#endif