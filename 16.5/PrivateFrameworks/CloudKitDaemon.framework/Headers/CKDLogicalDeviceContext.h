// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDLOGICALDEVICECONTEXT_H
#define CKDLOGICALDEVICECONTEXT_H

@class NSURL, CKSQLiteDatabase, NSHashTable;
@protocol CKDTestDevice, CKTestDeviceReference, CKDTestServer;

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
@property (retain, nonatomic) CKSQLiteDatabase *deviceScopedDatabase; // ivar: _deviceScopedDatabase
@property (readonly, weak, nonatomic) CKDLogicalDeviceScopedStateManager *deviceScopedStateManager; // ivar: _deviceScopedStateManager
@property (readonly, nonatomic) BOOL isLiveDevice;
@property (readonly, nonatomic) CKDMetadataCache *metadataCache; // ivar: _metadataCache
@property (readonly, nonatomic) CKDOperationInfoCache *operationInfoCache; // ivar: _operationInfoCache
@property (readonly, nonatomic) NSInteger pushBehavior;
@property (retain, nonatomic) NSHashTable *sharedPcsCaches; // ivar: _sharedPcsCaches
@property (readonly, nonatomic) NSObject<CKDTestDevice> *testDevice;
@property (readonly, nonatomic) NSObject<CKTestDeviceReference> *testDeviceReference; // ivar: _testDeviceReference
@property (readonly, nonatomic) NSObject<CKDTestServer> *testServer; // ivar: _testServer
@property (readonly, nonatomic) CKDThrottleManager *throttleManager; // ivar: _throttleManager
@property (readonly, nonatomic) CKDTokenRegistrationScheduler *tokenRegistrationScheduler; // ivar: _tokenRegistrationScheduler


+(id)defaultContext;
+(id)deviceContextForTestDeviceReference:(id)arg0 ;
+(id)existingDefaultContext;
-(id)_initWithTestDeviceReference:(id)arg0 ;
-(id)deviceScopedPushTopic:(id)arg0 ;
-(id)pcsCacheForContainerID:(id)arg0 accountOverrideInfo:(id)arg1 accountID:(id)arg2 encryptionServiceName:(id)arg3 ;
-(void)clearPCSMemoryCaches;


@end


#endif