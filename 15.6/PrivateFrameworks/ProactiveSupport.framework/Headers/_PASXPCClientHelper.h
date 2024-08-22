// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASXPCCLIENTHELPER_H
#define _PASXPCCLIENTHELPER_H

@class NSXPCConnection, NSString, NSXPCInterface;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface _PASXPCClientHelper : NSObject {
    _opaque_pthread_mutex_t _connLock;
    NSXPCConnection *_conn;
    NSString *_serviceName;
    NSXPCInterface *_whitelistedServerInterface;
    NSXPCInterface *_whitelistedClientInterface;
    id *_serverInitiatedRequestHandler;
    id *_interruptionHandler;
    id *_invalidationHandler;
    NSObject<OS_os_log> *_logHandle;
}




// -(id)initWithServiceName:(id)arg0 whitelistedServerInterface:(id)arg1 whitelistedClientInterface:(id)arg2 serverInitiatedRequestHandler:(id)arg3 interruptionHandler:(id)arg4 invalidationHandler:(unk)arg5 logHandle:(id)arg6  ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_locked_establishConnection;
-(void)dealloc;


@end


#endif