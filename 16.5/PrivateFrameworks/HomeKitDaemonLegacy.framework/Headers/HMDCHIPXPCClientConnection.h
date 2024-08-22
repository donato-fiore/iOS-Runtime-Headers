// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHIPXPCCLIENTCONNECTION_H
#define HMDCHIPXPCCLIENTCONNECTION_H

@class HMFObject, NSString, NSMutableSet;
@protocol HMFLogging, MTRDeviceControllerClientProtocol, OS_dispatch_queue;


#import "HMDHomeManager.h"

@interface HMDCHIPXPCClientConnection : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSObject<MTRDeviceControllerClientProtocol> *remoteObjectProxy; // ivar: _remoteObjectProxy
@property (readonly, nonatomic) NSMutableSet *subscribedHomeUUIDs; // ivar: _subscribedHomeUUIDs
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithRemoteObjectProxy:(id)arg0 homeManager:(id)arg1 pid:(int)arg2 workQueue:(id)arg3 ;
-(id)logIdentifier;
-(void)_getDeviceControllerWithFabricId:(NSUInteger)arg0 accessories:(id)arg1 home:(id)arg2 remainingHomes:(id)arg3 completion:(id)arg4 ;
-(void)_registerReportHandlerWithHomeWithUUID:(id)arg0 ;
-(void)_sendRemoteMessageUsingHomeUUID:(id)arg0 nodeId:(NSUInteger)arg1 payload:(id)arg2 completion:(id)arg3 ;
-(void)deregisterReportHandlers;
-(void)getAnyDeviceControllerWithCompletion:(id)arg0 ;
-(void)getDeviceControllerWithFabricId:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)invokeCommandWithController:(id)arg0 nodeId:(NSUInteger)arg1 endpointId:(id)arg2 clusterId:(id)arg3 commandId:(id)arg4 fields:(id)arg5 timedInvokeTimeout:(id)arg6 completion:(id)arg7 ;
-(void)readAttributeCacheWithController:(id)arg0 nodeId:(NSUInteger)arg1 endpointId:(id)arg2 clusterId:(id)arg3 attributeId:(id)arg4 completion:(id)arg5 ;
-(void)readAttributeWithController:(id)arg0 nodeId:(NSUInteger)arg1 endpointId:(id)arg2 clusterId:(id)arg3 attributeId:(id)arg4 params:(id)arg5 completion:(id)arg6 ;
-(void)stopReportsWithController:(id)arg0 nodeId:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)subscribeAttributeWithController:(id)arg0 nodeId:(NSUInteger)arg1 endpointId:(id)arg2 clusterId:(id)arg3 attributeId:(id)arg4 minInterval:(id)arg5 maxInterval:(id)arg6 params:(id)arg7 establishedHandler:(id)arg8 ;
-(void)subscribeWithController:(id)arg0 nodeId:(NSUInteger)arg1 minInterval:(id)arg2 maxInterval:(id)arg3 params:(id)arg4 shouldCache:(BOOL)arg5 completion:(id)arg6 ;
-(void)writeAttributeWithController:(id)arg0 nodeId:(NSUInteger)arg1 endpointId:(id)arg2 clusterId:(id)arg3 attributeId:(id)arg4 value:(id)arg5 timedWriteTimeout:(id)arg6 completion:(id)arg7 ;


@end


#endif