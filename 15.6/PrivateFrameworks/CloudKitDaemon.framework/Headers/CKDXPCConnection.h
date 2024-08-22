// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDXPCCONNECTION_H
#define CKDXPCCONNECTION_H

@class CKCoalescer, NSPointerArray, NSArray, NSMutableSet, NSString, NSMutableDictionary, NSHashTable, NSOperationQueue, NSXPCConnection;
@protocol CKDSystemAvailabilityWatcher, CKDXPCConnectionMuxer;

#import <Foundation/Foundation.h>

#import "CKDProcessScopedClientProxy.h"

@interface CKDXPCConnection : NSObject <CKDSystemAvailabilityWatcher, CKDXPCConnectionMuxer>



@property (readonly, nonatomic) CKCoalescer *activityCoalescer; // ivar: _activityCoalescer
@property (retain, nonatomic) NSPointerArray *allContainerPointers; // ivar: _allContainerPointers
@property (readonly, nonatomic) NSArray *allContainers;
@property (retain, nonatomic) NSMutableSet *allDeviceContexts; // ivar: _allDeviceContexts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger keepAlive; // ivar: _keepAlive
@property (retain, nonatomic) NSMutableDictionary *logicalDeviceScopedClientProxiesByDeviceReference; // ivar: _logicalDeviceScopedClientProxiesByDeviceReference
@property (retain, nonatomic) CKDProcessScopedClientProxy *processScopedClientProxy; // ivar: _processScopedClientProxy
@property (retain, nonatomic) NSHashTable *sharedContainers; // ivar: _sharedContainers
@property (readonly) Class superclass;
@property (retain, nonatomic) NSOperationQueue *systemAvailableQueue; // ivar: _systemAvailableQueue
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)canRunGivenAvailabilityState:(NSUInteger)arg0 ;
-(BOOL)systemAvailabilityChanged:(NSUInteger)arg0 ;
-(id)containerFromSetupInfo:(id)arg0 containerScopedClientProxy:(id)arg1 outError:(*id)arg2 ;
-(id)initWithXPCConnection:(id)arg0 ;
-(id)logicalDeviceScopedClientProxyForDeviceContext:(id)arg0 ;
-(void)allowToClose;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)dealloc;
-(void)getContainerScopedDaemonProxyCreatorForSetupInfo:(id)arg0 containerScopedClientProxy:(id)arg1 completionHandler:(id)arg2 ;
-(void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)arg0 synchronous:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReference:(id)arg0 completionHandler:(id)arg1 ;
-(void)getProcessScopedClientProxyCreatorSynchronous:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)getProcessScopedDaemonProxyCreatorWithCompletionHandler:(id)arg0 ;
-(void)getTestAdminDaemonProxyCreatorWithCompletionHandler:(id)arg0 ;
-(void)keepOpen;
-(void)noteClientProcessScopedMetadata:(id)arg0 ;
-(void)tearDown;


@end


#endif