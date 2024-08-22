// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSXPCCONNECTION_H
#define MSXPCCONNECTION_H

@class NSXPCConnection, NSLock, EFPromise, NSXPCInterface, Protocol;
@protocol OS_dispatch_queue;



@interface MSXPCConnection : NSXPCConnection {
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    EFPromise *_connectionPromise;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedInterface;
    id *_exportedObject;
    id *_interruptionHandler;
    id *_invalidationHandler;
    NSInteger _resumeCount;
    uint8_t _locallyInvalidated;
}


@property (readonly, retain, nonatomic) Protocol *protocol; // ivar: _protocol
@property (nonatomic) BOOL shouldLaunchMobileMail; // ivar: _shouldLaunchMobileMail


-(id)_connection;
-(id)_connectionForPromise:(id)arg0 ;
-(id)_nts_wrappedInterruptionHandler:(SEL)arg0 ;
-(id)description;
-(id)exportedInterface;
-(id)exportedObject;
-(id)initWithProtocol:(id)arg0 ;
-(id)interruptionHandler:(SEL)arg0 ;
-(id)invalidationHandler:(SEL)arg0 ;
-(id)remoteObjectInterface;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(int)auditSessionIdentifier;
-(int)processIdentifier;
-(unsigned int)effectiveGroupIdentifier;
-(unsigned int)effectiveUserIdentifier;
-(void)_finishPromise:(id)arg0 withConnection:(id)arg1 error:(id)arg2 ;
-(void)_invalidatePromise:(id)arg0 ;
-(void)_invokeInterruptionHandlerForPromise:(id)arg0 ;
-(void)_queue_invokeInvalidationHandler;
-(void)_sendInvocation:(id)arg0 remoteInterface:(id)arg1 remoteProxy:(id)arg2 errorHandler:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)setExportedInterface:(id)arg0 ;
-(void)setExportedObject:(id)arg0 ;
-(void)setInterruptionHandler:(id)arg0 ;
-(void)setInvalidationHandler:(id)arg0 ;
-(void)setRemoteObjectInterface:(id)arg0 ;
-(void)suspend;


@end


#endif