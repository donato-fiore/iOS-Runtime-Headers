// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKLOGICALDEVICECONTEXT_H
#define CKLOGICALDEVICECONTEXT_H

@class CKTestDevice, CKTestDeviceReference;

#import <Foundation/Foundation.h>

#import "CKLogicalDeviceScopedDaemonProxy.h"
#import "CKLogicalDeviceScopedStateManager.h"
#import "CKThrottleManager.h"

@interface CKLogicalDeviceContext : NSObject

@property (retain, nonatomic) CKLogicalDeviceScopedDaemonProxy *deviceScopedDaemonProxy; // ivar: _deviceScopedDaemonProxy
@property (retain, nonatomic) CKLogicalDeviceScopedStateManager *deviceScopedStateManager; // ivar: _deviceScopedStateManager
@property (retain, nonatomic) CKTestDevice *testDevice; // ivar: _testDevice
@property (readonly, nonatomic) CKTestDeviceReference *testDeviceReference; // ivar: _testDeviceReference
@property (retain, nonatomic) CKThrottleManager *throttleManager; // ivar: _throttleManager
@property (readonly, nonatomic) BOOL wantsFlowControl;


+(id)defaultContext;
+(id)deviceContextForTestDeviceReference:(id)arg0 ;
-(id)_initWithTestDeviceReference:(id)arg0 ;


@end


#endif