// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBASEDEVICE_H
#define MTRBASEDEVICE_H


#import <Foundation/Foundation.h>

#import "MTRDeviceController.h"

@interface MTRBaseDevice : NSObject

@property (readonly, nonatomic) MTRDeviceController *deviceController; // ivar: _deviceController
@property (readonly, nonatomic) BOOL isPASEDevice; // ivar: _isPASEDevice
@property (readonly, nonatomic) NSUInteger nodeID; // ivar: _nodeID
@property (readonly) unsigned char sessionTransportType;


+(id)CHIPEncodeAndDecodeNSObject:(id)arg0 ;
+(id)deviceWithNodeID:(id)arg0 controller:(id)arg1 ;
-(id)initWithNodeID:(id)arg0 controller:(id)arg1 ;
-(id)initWithPASEDevice:(*void)arg0 controller:(id)arg1 ;
-(void)deregisterReportHandlersWithClientQueue:(id)arg0 completion:(id)arg1 ;
-(void)deregisterReportHandlersWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)invalidateCASESession;
-(void)invokeCommandWithEndpointID:(id)arg0 clusterID:(id)arg1 commandID:(id)arg2 commandFields:(id)arg3 timedInvokeTimeout:(id)arg4 queue:(id)arg5 completion:(id)arg6 ;
-(void)invokeCommandWithEndpointId:(id)arg0 clusterId:(id)arg1 commandId:(id)arg2 commandFields:(id)arg3 timedInvokeTimeout:(id)arg4 clientQueue:(id)arg5 completion:(id)arg6 ;
-(void)openCommissioningWindowWithSetupPasscode:(id)arg0 discriminator:(id)arg1 duration:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)readAttributeWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 params:(id)arg3 clientQueue:(id)arg4 completion:(id)arg5 ;
-(void)readAttributesWithEndpointID:(id)arg0 clusterID:(id)arg1 attributeID:(id)arg2 params:(id)arg3 queue:(id)arg4 completion:(id)arg5 ;
-(void)readEventsWithEndpointID:(id)arg0 clusterID:(id)arg1 eventID:(id)arg2 params:(id)arg3 queue:(id)arg4 completion:(id)arg5 ;
// -(void)subscribeAttributeWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 minInterval:(id)arg3 maxInterval:(id)arg4 params:(id)arg5 clientQueue:(id)arg6 reportHandler:(id)arg7 subscriptionEstablished:(unk)arg8  ;
// -(void)subscribeToAttributesWithEndpointID:(id)arg0 clusterID:(id)arg1 attributeID:(id)arg2 params:(id)arg3 queue:(id)arg4 reportHandler:(id)arg5 subscriptionEstablished:(unk)arg6  ;
// -(void)subscribeToEventsWithEndpointID:(id)arg0 clusterID:(id)arg1 eventID:(id)arg2 params:(id)arg3 queue:(id)arg4 reportHandler:(id)arg5 subscriptionEstablished:(unk)arg6  ;
// -(void)subscribeWithQueue:(id)arg0 minInterval:(unsigned short)arg1 maxInterval:(unsigned short)arg2 params:(id)arg3 cacheContainer:(id)arg4 attributeReportHandler:(id)arg5 eventReportHandler:(unk)arg6 errorHandler:(id)arg7 subscriptionEstablished:(unk)arg8 resubscriptionScheduled:(id)arg9  ;
// -(void)subscribeWithQueue:(id)arg0 params:(id)arg1 clusterStateCacheContainer:(id)arg2 attributeReportHandler:(id)arg3 eventReportHandler:(unk)arg4 errorHandler:(id)arg5 subscriptionEstablished:(unk)arg6 resubscriptionScheduled:(id)arg7  ;
-(void)writeAttributeWithEndpointID:(id)arg0 clusterID:(id)arg1 attributeID:(id)arg2 value:(id)arg3 timedWriteTimeout:(id)arg4 queue:(id)arg5 completion:(id)arg6 ;
-(void)writeAttributeWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 value:(id)arg3 timedWriteTimeout:(id)arg4 clientQueue:(id)arg5 completion:(id)arg6 ;


@end


#endif