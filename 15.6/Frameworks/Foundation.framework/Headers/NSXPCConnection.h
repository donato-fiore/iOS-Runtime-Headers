// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSXPCCONNECTION_H
#define NSXPCCONNECTION_H

@protocol NSXPCProxyCreating, OS_dispatch_queue, NSObject, OS_xpc_object, _NSXPCTransport;

#import <Foundation/Foundation.h>

#import "_NSXPCConnectionExpectedReplies.h"
#import "_NSXPCConnectionExportedObjectTable.h"
#import "_NSXPCConnectionRequestedReplies.h"
#import "_NSXPCConnectionImportInfo.h"
#import "NSString.h"
#import "NSXPCListenerEndpoint.h"
#import "_NSXPCConnectionClassCache.h"
#import "NSXPCInterface.h"

@interface NSXPCConnection : NSObject <NSXPCProxyCreating>

 {
    NSObject<OS_xpc_object>""remote"@"OS_xpc_remote_connection" _connection;
    _NSXPCConnectionExpectedReplies *_repliesExpected;
    NSObject<OS_dispatch_queue> *_userQueue;
    unsigned int _state;
    uint8_t _state2;
    id *_interruptionHandler;
    id *_invalidationHandler;
    _NSXPCConnectionExportedObjectTable *_exportInfo;
    _NSXPCConnectionRequestedReplies *_repliesRequested;
    _NSXPCConnectionImportInfo *_importInfo;
    id<NSObject> *_otherInfo;
    uint8_t _delegate;
    NSString *_serviceName;
    NSXPCListenerEndpoint *_endpoint;
    _NSXPCConnectionClassCache *_eCache;
    _NSXPCConnectionClassCache *_dCache;
    NSObject<OS_xpc_object> *_bootstrap;
    os_unfair_lock_s _lock;
    id<_NSXPCTransport> *_transport;
}


@property (readonly) int auditSessionIdentifier;
@property (readonly) unsigned int effectiveGroupIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) id *exportedObject;
@property (copy) id *interruptionHandler;
@property (copy) id *invalidationHandler;
@property (readonly) int processIdentifier;
@property (retain) NSXPCInterface *remoteObjectInterface; // ivar: _remoteObjectInterface
@property (readonly, retain) id *remoteObjectProxy;
@property (readonly, copy) NSString *serviceName;


+(id)currentConnection;
+(void)_handoffCurrentReplyToQueue:(id)arg0 block:(id)arg1 ;
+(void)beginTransaction;
+(void)endTransaction;
-(id)_additionalInvalidationHandler:(SEL)arg0 ;
-(id)_errorDescription;
-(id)_initWithCustomTransport:(id)arg0 ;
-(id)_initWithRemoteConnection:(id)arg0 name:(id)arg1 ;
-(id)_initWithRemoteService:(id)arg0 name:(id)arg1 options:(NSUInteger)arg2 ;
-(id)_initWithRemoteService:(id)arg0 name:(id)arg1 options:(NSUInteger)arg2 mode:(NSUInteger)arg3 ;
-(id)_queue;
-(id)_unboostingRemoteObjectProxy;
-(id)_xpcConnection;
-(id)delegate;
-(id)description;
-(id)init;
-(id)initWithEndpoint:(id)arg0 ;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)remoteObjectProxyWithTimeout:(CGFloat)arg0 errorHandler:(id)arg1 ;
-(id)remoteObjectProxyWithUserInfo:(id)arg0 errorHandler:(id)arg1 ;
-(id)replacementObjectForEncoder:(id)arg0 object:(id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)userInfo;
-(id)valueForEntitlement:(id)arg0 ;
-(struct ? )auditToken;
-(void)_cancelProgress:(NSUInteger)arg0 ;
-(void)_decodeAndInvokeMessageWithEvent:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)_decodeAndInvokeReplyBlockWithEvent:(id)arg0 sequence:(NSUInteger)arg1 replyInfo:(id)arg2 ;
-(void)_decodeProgressMessageWithData:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)_killConnection:(int)arg0 ;
-(void)_pauseProgress:(NSUInteger)arg0 ;
-(void)_resumeProgress:(NSUInteger)arg0 ;
-(void)_sendDesistForProxy:(id)arg0 ;
-(void)_sendInvocation:(id)arg0 orArguments:(*id)arg1 count:(NSUInteger)arg2 methodSignature:(id)arg3 selector:(SEL)arg4 withProxy:(id)arg5 ;
-(void)_sendSelector:(SEL)arg0 withProxy:(id)arg1 ;
-(void)_sendSelector:(SEL)arg0 withProxy:(id)arg1 arg1:(id)arg2 ;
-(void)_sendSelector:(SEL)arg0 withProxy:(id)arg1 arg1:(id)arg2 arg2:(id)arg3 ;
-(void)_sendSelector:(SEL)arg0 withProxy:(id)arg1 arg1:(id)arg2 arg2:(id)arg3 arg3:(id)arg4 ;
-(void)_sendSelector:(SEL)arg0 withProxy:(id)arg1 arg1:(id)arg2 arg2:(id)arg3 arg3:(id)arg4 arg4:(id)arg5 ;
-(void)_setBootstrapObject:(id)arg0 forKey:(id)arg1 ;
-(void)_setLanguages:(id)arg0 ;
-(void)_setQueue:(id)arg0 ;
-(void)_setTargetUserIdentifier:(unsigned int)arg0 ;
-(void)_setUUID:(id)arg0 ;
-(void)activate;
-(void)addBarrierBlock:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)scheduleSendBarrierBlock:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setOptions:(NSUInteger)arg0 ;
-(void)setUserInfo:(id)arg0 ;
-(void)set_additionalInvalidationHandler:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)suspend;


@end


#endif