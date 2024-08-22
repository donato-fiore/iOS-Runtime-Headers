// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKLOGICALDEVICECONTEXT_H
#define CKLOGICALDEVICECONTEXT_H

@protocol CKTestDevice, CKTestDeviceReference;

#import <Foundation/Foundation.h>

#import "CKLogicalDeviceScopedDaemonProxy.h"
#import "CKLogicalDeviceScopedStateManager.h"
#import "CKThrottleManager.h"

@interface CKLogicalDeviceContext : NSObject

@property (readonly, nonatomic) CKLogicalDeviceScopedDaemonProxy *deviceScopedDaemonProxy; // ivar: _deviceScopedDaemonProxy
@property (readonly, nonatomic) CKLogicalDeviceScopedStateManager *deviceScopedStateManager; // ivar: _deviceScopedStateManager
@property (readonly, nonatomic) NSInteger pushBehavior;
@property (readonly, nonatomic) NSObject<CKTestDevice> *testDeviceProtocol; // ivar: _testDeviceProtocol
@property (readonly, nonatomic) NSObject<CKTestDeviceReference> *testDeviceReferenceProtocol; // ivar: _testDeviceReferenceProtocol
@property (readonly, nonatomic) CKThrottleManager *throttleManager; // ivar: _throttleManager
@property (readonly, nonatomic) BOOL useLiveServer; // ivar: _useLiveServer


+(id)defaultContext;
+(id)deviceContextForTestDeviceReferenceProtocol:(id)arg0 ;
-(id)_initWithTestDeviceReferenceProtocol:(id)arg0 useLiveServer:(BOOL)arg1 ;
-(id)deviceScopedPushTopic:(id)arg0 ;


@end


#endif