// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGDAEMONCONNECTION_H
#define SGDAEMONCONNECTION_H

@class NSString, NSXPCInterface, NSMutableArray, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SGDaemonConnection : NSObject {
    NSString *_machServiceName;
    NSXPCInterface *_xpcInterface;
    NSObject<OS_dispatch_queue> *_connectLock;
    NSMutableArray *_abortBlocks;
    _opaque_pthread_mutex_t _abortLock;
    NSXPCConnection *_xpcConnection;
}




+(BOOL)usingSyncXPC;
+(void)_useSyncXPCWithBlock:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 xpcInterface:(id)arg1 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
// -(id)waitUntilReturn:(id)arg0 withTimeout:(unk)arg1 error:(CGFloat)arg2  ;
-(id)xpcConnection;
-(void)_callAbortBlocks;
-(void)_connectToServer;
-(void)addConnectionInterruptedHandler:(id)arg0 ;
-(void)dealloc;
-(void)disconnect;


@end


#endif