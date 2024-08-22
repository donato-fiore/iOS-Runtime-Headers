// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDEVICECONTROLLERXPCCONNECTION_H
#define MTRDEVICECONTROLLERXPCCONNECTION_H

@class NSXPCInterface, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MTRDeviceControllerXPCProxyHandle.h"

@interface MTRDeviceControllerXPCConnection : NSObject

@property (readonly, nonatomic) id *connectBlock; // ivar: _connectBlock
@property (weak, nonatomic) MTRDeviceControllerXPCProxyHandle *proxyHandle; // ivar: _proxyHandle
@property (retain, nonatomic) MTRDeviceControllerXPCProxyHandle *proxyRetainerForReports; // ivar: _proxyRetainerForReports
@property (readonly, nonatomic) NSXPCInterface *remoteDeviceClientProtocol; // ivar: _remoteDeviceClientProtocol
@property (readonly, nonatomic) NSXPCInterface *remoteDeviceServerProtocol; // ivar: _remoteDeviceServerProtocol
@property (readonly, nonatomic) NSMutableDictionary *reportRegistry; // ivar: _reportRegistry
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)connectionWithWorkQueue:(id)arg0 connectBlock:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 connectBlock:(id)arg1 ;
-(void)deregisterReportHandlersWithController:(id)arg0 nodeId:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)getProxyHandleWithCompletion:(id)arg0 ;
-(void)handleReportWithController:(id)arg0 nodeId:(NSUInteger)arg1 values:(id)arg2 error:(id)arg3 ;
-(void)registerReportHandlerWithController:(id)arg0 nodeId:(NSUInteger)arg1 handler:(id)arg2 ;


@end


#endif