// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCALLOBSERVERXPCCLIENT_H
#define CXCALLOBSERVERXPCCLIENT_H

@class NSDictionary, NSXPCConnection, NSString, NSHashTable, NSMutableDictionary;
@protocol CXCallObserverDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXCallObserverXPCClient : NSObject <CXCallObserverDataSource>



@property (readonly, copy, nonatomic) NSDictionary *callUUIDToCallMap;
@property (nonatomic) BOOL clientsShouldConnect; // ivar: _clientsShouldConnect
@property (nonatomic) int clientsShouldConnectToken; // ivar: _clientsShouldConnectToken
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // ivar: _concurrentQueue
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *mutableCallUUIDToCallMap; // ivar: _mutableCallUUIDToCallMap
@property (readonly) Class superclass;


+(id)sharedXPCClient;
+(id)sharedXPCClientSemaphore;
+(void)releaseSharedXPCClient;
-(id)_init;
// -(id)_remoteObjectProxyWithErrorHandler:(id)arg0 isSynchronous:(unk)arg1  ;
-(id)init;
-(void)_addOrUpdateCall:(id)arg0 ;
-(void)_invalidate;
-(void)_markAllCallsAsEnded;
-(void)_removeCall:(id)arg0 ;
-(void)_requestCalls;
-(void)addDelegate:(id)arg0 ;
-(void)addOrUpdateCall:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeCall:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)requestTransaction:(id)arg0 completion:(id)arg1 ;


@end


#endif