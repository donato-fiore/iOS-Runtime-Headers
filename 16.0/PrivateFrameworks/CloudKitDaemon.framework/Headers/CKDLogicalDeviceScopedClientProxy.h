// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDLOGICALDEVICESCOPEDCLIENTPROXY_H
#define CKDLOGICALDEVICESCOPEDCLIENTPROXY_H

@protocol CKXPCLogicalDeviceScopedClient;

#import <Foundation/Foundation.h>

#import "CKDXPCConnection.h"
#import "CKDLogicalDeviceContext.h"

@interface CKDLogicalDeviceScopedClientProxy : NSObject

@property (weak, nonatomic) CKDXPCConnection *clientConnection; // ivar: _clientConnection
@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext; // ivar: _deviceContext
@property BOOL hasBeenThrottled; // ivar: _hasBeenThrottled
@property (retain, nonatomic) NSObject<CKXPCLogicalDeviceScopedClient> *logicalDeviceScopedClientProxyCreator; // ivar: _logicalDeviceScopedClientProxyCreator
@property (nonatomic) int pid; // ivar: _pid


-(BOOL)processIsAttached;
-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithClientConnection:(id)arg0 deviceContext:(id)arg1 ;
-(id)openFileWithOpenInfo:(id)arg0 error:(*id)arg1 ;
-(id)readBytesOfInMemoryAssetContentWithUUID:(id)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)_getLogicalDeviceScopedClientProxyCreatorSynchronous:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)addThrottle:(id)arg0 ;
// -(void)getLogicalDeviceScopedClientProxySynchronous:(BOOL)arg0 errorHandler:(id)arg1 clientProxyHandler:(unk)arg2  ;
-(void)resetThrottles;
-(void)tearDown;


@end


#endif