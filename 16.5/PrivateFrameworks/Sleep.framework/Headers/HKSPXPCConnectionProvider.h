// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPXPCCONNECTIONPROVIDER_H
#define HKSPXPCCONNECTIONPROVIDER_H

@class NSXPCConnection, NSString, NSMutableDictionary;
@protocol BSDescriptionProviding, HKSPXPCConnectionProviderDelegate;

#import <Foundation/Foundation.h>

#import "HKSPXPCConnectionInfo.h"

@interface HKSPXPCConnectionProvider : NSObject <BSDescriptionProviding>



@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) HKSPXPCConnectionInfo *connectionInfo; // ivar: _connectionInfo
@property (readonly, nonatomic) os_unfair_lock_s connectionLock; // ivar: _connectionLock
@property (readonly, copy, nonatomic) id *connectionProvider; // ivar: _connectionProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKSPXPCConnectionProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic) NSMutableDictionary *pendingMessages; // ivar: _pendingMessages
@property (readonly, nonatomic) os_unfair_lock_s pendingMessagesLock; // ivar: _pendingMessagesLock
@property (readonly) Class superclass;


+(id)providerWithConnectionInfo:(id)arg0 ;
-(BOOL)isInvalidated;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithConnectionInfo:(id)arg0 ;
-(id)initWithConnectionInfo:(id)arg0 connectionProvider:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addPendingMessage:(id)arg0 ;
-(void)_didInterruptConnection;
-(void)_didInvalidateConnection;
-(void)_removePendingMessage:(id)arg0 ;
-(void)_retryPendingMessages;
-(void)_withLock:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveLifecycleNotification;
-(void)invalidate;
// -(void)performRemoteBlock:(id)arg0 withErrorHandler:(unk)arg1  ;
// -(void)performRemoteBlock:(id)arg0 withErrorHandler:(unk)arg1 doSynchronously:(id)arg2  ;
-(void)sendMessage:(id)arg0 ;


@end


#endif