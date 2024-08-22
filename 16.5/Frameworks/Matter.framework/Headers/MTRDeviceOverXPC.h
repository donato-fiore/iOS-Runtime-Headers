// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDEVICEOVERXPC_H
#define MTRDEVICEOVERXPC_H

@class NSNumber;
@protocol NSCopying;


#import "MTRBaseDevice.h"
#import "MTRDeviceControllerOverXPC.h"
#import "MTRDeviceControllerXPCConnection.h"

@interface MTRDeviceOverXPC : MTRBaseDevice

@property (readonly, nonatomic) MTRDeviceControllerOverXPC *controller; // ivar: _controller
@property (readonly, nonatomic) NSObject<NSCopying> *controllerID; // ivar: _controllerID
@property (readonly, nonatomic) NSNumber *nodeID; // ivar: _nodeID
@property (readonly, nonatomic) MTRDeviceControllerXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)initWithControllerOverXPC:(id)arg0 deviceID:(id)arg1 xpcConnection:(id)arg2 ;
-(void)deregisterReportHandlersWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)fetchProxyHandleWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)invokeCommandWithEndpointID:(id)arg0 clusterID:(id)arg1 commandID:(id)arg2 commandFields:(id)arg3 timedInvokeTimeout:(id)arg4 queue:(id)arg5 completion:(id)arg6 ;
-(void)openCommissioningWindowWithSetupPasscode:(id)arg0 discriminator:(id)arg1 duration:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)readAttributesWithEndpointID:(id)arg0 clusterID:(id)arg1 attributeID:(id)arg2 params:(id)arg3 queue:(id)arg4 completion:(id)arg5 ;
// -(void)subscribeToAttributesWithEndpointID:(id)arg0 clusterID:(id)arg1 attributeID:(id)arg2 params:(id)arg3 queue:(id)arg4 reportHandler:(id)arg5 subscriptionEstablished:(unk)arg6  ;
// -(void)subscribeWithQueue:(id)arg0 params:(id)arg1 clusterStateCacheContainer:(id)arg2 attributeReportHandler:(id)arg3 eventReportHandler:(unk)arg4 errorHandler:(id)arg5 subscriptionEstablished:(unk)arg6 resubscriptionScheduled:(id)arg7  ;
-(void)writeAttributeWithEndpointID:(id)arg0 clusterID:(id)arg1 attributeID:(id)arg2 value:(id)arg3 timedWriteTimeout:(id)arg4 queue:(id)arg5 completion:(id)arg6 ;


@end


#endif