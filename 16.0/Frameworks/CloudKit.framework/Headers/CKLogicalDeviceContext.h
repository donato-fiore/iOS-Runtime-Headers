// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKLOGICALDEVICECONTEXT_H
#define CKLOGICALDEVICECONTEXT_H

@class CKTestDeviceReference;
@protocol CKTestDevice, CKTestDeviceReference;

#import <Foundation/Foundation.h>

#import "CKLogicalDeviceScopedDaemonProxy.h"
#import "CKLogicalDeviceScopedStateManager.h"
#import "CKThrottleManager.h"

@interface CKLogicalDeviceContext : NSObject

@property (retain, nonatomic) CKLogicalDeviceScopedDaemonProxy *deviceScopedDaemonProxy; // ivar: _deviceScopedDaemonProxy
@property (retain, nonatomic) CKLogicalDeviceScopedStateManager *deviceScopedStateManager; // ivar: _deviceScopedStateManager
@property (readonly, nonatomic) NSInteger pushBehavior;
@property (retain, nonatomic) NSObject<CKTestDevice> *testDeviceProtocol; // ivar: _testDeviceProtocol
@property (readonly, nonatomic) CKTestDeviceReference *testDeviceReference;
@property (readonly, nonatomic) NSObject<CKTestDeviceReference> *testDeviceReferenceProtocol; // ivar: _testDeviceReferenceProtocol
@property (retain, nonatomic) CKThrottleManager *throttleManager; // ivar: _throttleManager


+(id)defaultContext;
+(id)deviceContextForTestDeviceReference:(id)arg0 ;
+(id)deviceContextForTestDeviceReferenceProtocol:(id)arg0 ;
-(id)_initWithTestDeviceReferenceProtocol:(id)arg0 ;
-(id)deviceScopedPushTopic:(id)arg0 ;


@end


#endif