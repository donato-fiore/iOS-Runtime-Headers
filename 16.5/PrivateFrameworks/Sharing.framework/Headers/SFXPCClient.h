// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFXPCCLIENT_H
#define SFXPCCLIENT_H

@class NSXPCConnection, NSString;
@protocol NSXPCConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFXPCClient : NSObject <NSXPCConnectionDelegate>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldEscapeXpcTryCatch;
-(id)exportedInterface;
-(id)init;
-(id)machServiceName;
-(id)remoteObjectInterface;
-(void)_activate;
-(void)_invalidate;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)dealloc;
-(void)getRemoteObjectProxyOnQueue:(id)arg0 ;
-(void)interrupted;
-(void)invalidated;
-(void)onqueue_activate;
-(void)onqueue_ensureConnectionEstablished;
-(void)onqueue_ensureXPCStarted;
-(void)onqueue_getRemoteObjectProxyOnQueue:(id)arg0 ;
-(void)onqueue_interrupted;
-(void)onqueue_invalidate;
-(void)onqueue_invalidated;


@end


#endif