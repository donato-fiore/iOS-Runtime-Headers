// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDLOGICALDEVICECONTEXT_H
#define CKDLOGICALDEVICECONTEXT_H

@class NSURL, CKTestDevice, CKTestDeviceReference, CKTestServer;

#import <Foundation/Foundation.h>

#import "CKDAccountDataSecurityObserver.h"
#import "CKDLogicalDeviceScopedStateManager.h"
#import "CKDMetadataCache.h"
#import "CKDOperationInfoCache.h"
#import "CKDThrottleManager.h"
#import "CKDTokenRegistrationScheduler.h"

@interface CKDLogicalDeviceContext : NSObject

@property (retain, nonatomic) CKDAccountDataSecurityObserver *accountDataSecurityObserver; // ivar: _accountDataSecurityObserver
@property (readonly, nonatomic) NSURL *cacheDirectory;
@property (retain, nonatomic) CKDLogicalDeviceScopedStateManager *deviceScopedStateManager; // ivar: _deviceScopedStateManager
@property (readonly, nonatomic) BOOL hasValidCredentials; // ivar: _hasValidCredentials
@property (readonly, nonatomic) BOOL isLiveDevice;
@property (retain, nonatomic) CKDMetadataCache *metadataCache; // ivar: _metadataCache
@property (retain, nonatomic) CKDOperationInfoCache *operationInfoCache; // ivar: _operationInfoCache
@property (readonly, nonatomic) CKTestDevice *testDevice;
@property (readonly, nonatomic) CKTestDeviceReference *testDeviceReference; // ivar: _testDeviceReference
@property (retain, nonatomic) CKTestServer *testServer; // ivar: _testServer
@property (retain, nonatomic) CKDThrottleManager *throttleManager; // ivar: _throttleManager
@property (retain, nonatomic) CKDTokenRegistrationScheduler *tokenRegistrationScheduler; // ivar: _tokenRegistrationScheduler
@property (readonly, nonatomic) BOOL wantsFlowControl;
@property (readonly, nonatomic) BOOL wantsPushRegistration;


+(id)defaultContext;
+(id)deviceContextForTestDeviceReference:(id)arg0 ;
+(id)existingDefaultContext;
-(id)_initWithTestDeviceReference:(id)arg0 ;


@end


#endif