// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AACXPCCLIENT_H
#define AACXPCCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AACXPCClient : NSObject {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSXPCConnection *_mainDaemonConnection;
    NSXPCConnection *_endpointConnection;
}




-(id)init;
-(void)_discardEndpointConnection:(id)arg0 ;
-(void)_handleError:(id)arg0 ;
// -(void)_remoteProxy:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_remoteSynchronousProxy:(id)arg0 errorHandler:(unk)arg1  ;
-(void)_resetEndpointConnection;
-(void)_serverQueue_initializeDaemonConnection;
-(void)dealloc;
-(void)sendRequest:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)sendRequest:(NSUInteger)arg0 payload:(id)arg1 completion:(id)arg2 ;
-(void)sendRequest:(NSUInteger)arg0 payloadData:(id)arg1 completion:(id)arg2 ;
-(void)sendSynchronousRequest:(NSUInteger)arg0 payload:(id)arg1 resultHandler:(id)arg2 ;
-(void)sendSynchronousRequest:(NSUInteger)arg0 resultHandler:(id)arg1 ;


@end


#endif