// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKLOGICALDEVICESCOPEDDAEMONPROXY_H
#define CKLOGICALDEVICESCOPEDDAEMONPROXY_H

@protocol NSObject, CKXPCLogicalDeviceScopedDaemon;

#import <Foundation/Foundation.h>

#import "CKLogicalDeviceContext.h"

@interface CKLogicalDeviceScopedDaemonProxy : NSObject

@property (retain, nonatomic) NSObject<NSObject> *connectionInterruptedObserver; // ivar: _connectionInterruptedObserver
@property (weak, nonatomic) CKLogicalDeviceContext *deviceContext; // ivar: _deviceContext
@property BOOL hasValidLogicalDeviceScopedDaemonProxyCreator; // ivar: _hasValidLogicalDeviceScopedDaemonProxyCreator
@property (retain, nonatomic) NSObject<CKXPCLogicalDeviceScopedDaemon> *logicalDeviceScopedDaemonProxyCreator; // ivar: _logicalDeviceScopedDaemonProxyCreator


+(id)CKXPCClientToDaemonLogicalDeviceScopedInterface;
+(id)CKXPCDaemonToClientLogicalDeviceScopedInterface;
-(id)initWithDeviceContext:(id)arg0 ;
-(void)_getLogicalDeviceScopedDaemonProxyCreatorSynchronous:(BOOL)arg0 completionHandler:(id)arg1 ;
// -(void)_getLogicalDeviceScopedDaemonProxySynchronous:(BOOL)arg0 errorHandler:(id)arg1 daemonProxyHandler:(unk)arg2  ;
-(void)addClouddThrottle:(id)arg0 ;
-(void)allClouddThrottlesWithCompletionHandler:(id)arg0 ;
-(void)clearAllClouddThrottles;
-(void)dealloc;


@end


#endif