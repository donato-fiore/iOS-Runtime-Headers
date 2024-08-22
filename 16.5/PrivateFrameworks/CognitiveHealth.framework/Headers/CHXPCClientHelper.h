// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHXPCCLIENTHELPER_H
#define CHXPCCLIENTHELPER_H

@class NSXPCConnection, NSString, NSXPCInterface;

#import <Foundation/Foundation.h>


@interface CHXPCClientHelper : NSObject {
    _opaque_pthread_mutex_t _connLock;
    NSXPCConnection *_conn;
    NSString *_serviceName;
    NSXPCInterface *_whitelistedServerInterface;
    id *_clientExportedObject;
    id *_interruptionHandler;
    id *_invalidationHandler;
}




// -(id)initWithServiceName:(id)arg0 whitelistedServerInterface:(id)arg1 clientExportedObject:(id)arg2 interruptionHandler:(id)arg3 invalidationHandler:(unk)arg4  ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_locked_establishConnection;
-(void)dealloc;


@end


#endif