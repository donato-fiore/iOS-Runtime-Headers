// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMREMOTECONNECTION_H
#define EMREMOTECONNECTION_H

@class NSMutableArray, NSString, Protocol;
@protocol EFLoggable, EMRemoteConnectionRecoveryAssertionDelegate, EMXPCProxyCreating, OS_dispatch_queue, NSXPCProxyCreating, EMRemoteProxyGenerator;

#import <Foundation/Foundation.h>


@interface EMRemoteConnection : NSObject <EFLoggable, EMRemoteConnectionRecoveryAssertionDelegate, EMXPCProxyCreating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    *__CFDictionary _knownSelectors;
    NSMutableArray *_resetHandlers;
    NSMutableArray *_recoveryHandlers;
    NSMutableArray *_pendingReattempts;
    id<NSXPCProxyCreating> *_currentProxy;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _proxyLock;
    BOOL _waitingForRecovery;
    uint8_t _activeVouchers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<EMRemoteProxyGenerator> *generator; // ivar: _generator
@property (readonly) NSUInteger hash;
@property (readonly) BOOL prefersImmediateActivity;
@property (readonly) Protocol *protocol; // ivar: _protocol
@property (readonly) id *reattemptingRemoteObjectProxy;
@property (readonly) id *remoteObjectProxy;
@property (readonly) Class superclass;


+(id)log;
-(BOOL)_respondsToRemoteSelector:(SEL)arg0 ;
-(id)_methodSignatureForRemoteSelector:(SEL)arg0 ;
-(id)initWithProtocol:(id)arg0 proxyGenerator:(id)arg1 ;
-(id)proxy;
-(id)proxyCreator:(*id)arg0 ;
-(id)reattemptingRemoteObjectProxyWithReattemptHandler:(id)arg0 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)requestRecoveryAssertion;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_reattemptInvocation:(id)arg0 withProxy:(id)arg1 originalError:(id)arg2 ;
-(void)_sendInvocation:(id)arg0 withProxy:(id)arg1 ;
-(void)addRecoveryHandler:(id)arg0 ;
-(void)addResetHandler:(id)arg0 ;
-(void)dealloc;
-(void)recover;
-(void)reset;
-(void)voucherInitialized;
-(void)voucherInvalidated;


@end


#endif