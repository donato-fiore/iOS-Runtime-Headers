// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRBASEDEVICE_H
#define MTRBASEDEVICE_H

@class NSRecursiveLock, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MTRBaseDevice : NSObject

@property (readonly) *void cppDevice; // ivar: _cppDevice
@property (readonly, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (retain, nonatomic) NSMutableDictionary *reportHandlerBridges; // ivar: _reportHandlerBridges


+(id)CHIPEncodeAndDecodeNSObject:(id)arg0 ;
-(*void)internalDevice;
-(id)init;
-(id)initWithDevice:(*void)arg0 ;
-(void)deregisterReportHandlersWithClientQueue:(id)arg0 completion:(id)arg1 ;
-(void)invalidateCASESession;
-(void)invokeCommandWithEndpointId:(id)arg0 clusterId:(id)arg1 commandId:(id)arg2 commandFields:(id)arg3 timedInvokeTimeout:(id)arg4 clientQueue:(id)arg5 completion:(id)arg6 ;
-(void)readAttributeWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 params:(id)arg3 clientQueue:(id)arg4 completion:(id)arg5 ;
// -(void)subscribeAttributeWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 minInterval:(id)arg3 maxInterval:(id)arg4 params:(id)arg5 clientQueue:(id)arg6 reportHandler:(id)arg7 subscriptionEstablished:(unk)arg8  ;
// -(void)subscribeWithQueue:(id)arg0 minInterval:(unsigned short)arg1 maxInterval:(unsigned short)arg2 params:(id)arg3 cacheContainer:(id)arg4 attributeReportHandler:(id)arg5 eventReportHandler:(unk)arg6 errorHandler:(id)arg7 subscriptionEstablished:(unk)arg8  ;
-(void)writeAttributeWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 value:(id)arg3 timedWriteTimeout:(id)arg4 clientQueue:(id)arg5 completion:(id)arg6 ;


@end


#endif