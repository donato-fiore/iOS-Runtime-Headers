// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDEVICEOVERXPC_H
#define MTRDEVICEOVERXPC_H

@protocol NSCopying;


#import "MTRBaseDevice.h"
#import "MTRDeviceControllerXPCConnection.h"

@interface MTRDeviceOverXPC : MTRBaseDevice

@property (readonly, nonatomic) NSObject<NSCopying> *controller; // ivar: _controller
@property (readonly, nonatomic) NSUInteger nodeId; // ivar: _nodeId
@property (readonly, nonatomic) MTRDeviceControllerXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)initWithController:(id)arg0 deviceId:(NSUInteger)arg1 xpcConnection:(id)arg2 ;
-(void)deregisterReportHandlersWithClientQueue:(id)arg0 completion:(id)arg1 ;
-(void)invokeCommandWithEndpointId:(id)arg0 clusterId:(id)arg1 commandId:(id)arg2 commandFields:(id)arg3 timedInvokeTimeout:(id)arg4 clientQueue:(id)arg5 completion:(id)arg6 ;
-(void)readAttributeWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 params:(id)arg3 clientQueue:(id)arg4 completion:(id)arg5 ;
// -(void)subscribeAttributeWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 minInterval:(id)arg3 maxInterval:(id)arg4 params:(id)arg5 clientQueue:(id)arg6 reportHandler:(id)arg7 subscriptionEstablished:(unk)arg8  ;
// -(void)subscribeWithQueue:(id)arg0 minInterval:(unsigned short)arg1 maxInterval:(unsigned short)arg2 params:(id)arg3 cacheContainer:(id)arg4 attributeReportHandler:(id)arg5 eventReportHandler:(unk)arg6 errorHandler:(id)arg7 subscriptionEstablished:(unk)arg8  ;
-(void)writeAttributeWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 value:(id)arg3 timedWriteTimeout:(id)arg4 clientQueue:(id)arg5 completion:(id)arg6 ;


@end


#endif