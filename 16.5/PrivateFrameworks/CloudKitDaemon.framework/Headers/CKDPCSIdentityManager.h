// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPCSIDENTITYMANAGER_H
#define CKDPCSIDENTITYMANAGER_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "CKDAccount.h"
#import "CKDLogicalDeviceContext.h"

@interface CKDPCSIdentityManager : NSObject

@property (retain) NSMutableDictionary *PCSIdentityWrappersByServiceName; // ivar: _PCSIdentityWrappersByServiceName
@property (retain) CKDAccount *account; // ivar: _account
@property (retain) NSString *cachedAccountDSID; // ivar: _cachedAccountDSID
@property (nonatomic) unsigned int clientSDKVersion; // ivar: _clientSDKVersion
@property (readonly, nonatomic) BOOL currentServiceIsManatee;
@property (nonatomic) *_PCSIdentityData debugIdentity; // ivar: _debugIdentity
@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext; // ivar: _deviceContext
@property (readonly, nonatomic) BOOL forceEnableReadOnlyManatee; // ivar: _forceEnableReadOnlyManatee
@property (nonatomic) BOOL forceManateeUnavailableForUnitTests; // ivar: _forceManateeUnavailableForUnitTests
@property (nonatomic) BOOL forceSecurityErrorOnIdentityValidation; // ivar: _forceSecurityErrorOnIdentityValidation
@property (nonatomic) BOOL refetchPCSIdentitySet; // ivar: _refetchPCSIdentitySet
@property (nonatomic) BOOL serviceIsManateeForUnitTests; // ivar: _serviceIsManateeForUnitTests
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName


+(BOOL)_rollTestAccountIdentitySetForService:(id)arg0 forBackingExplicitCredentialsAccount:(id)arg1 withError:(*id)arg2 ;
+(BOOL)credentialsAreValidForAccount:(id)arg0 ;
+(id)_generatePCSIdentityOptionsForService:(id)arg0 forBackingExplicitCredentialsAccount:(id)arg1 withError:(*id)arg2 ;
+(id)overrideKeys;
+(id)sharedFakeIdentitySetsByServiceByUsername;
+(id)sharedMockIdentitySetsByServiceByIdentifier;
+(struct _PCSIdentitySetData *)_copyStingrayIdentitiesForOptions:(id)arg0 withError:(*id)arg1 ;
+(struct _PCSIdentitySetData *)_copyStingrayIdentitiesForService:(id)arg0 forBackingExplicitCredentialsAccount:(id)arg1 withError:(*id)arg2 ;
+(struct _PCSIdentitySetData *)_getTestAccountIdentitySetForService:(id)arg0 forBackingExplicitCredentialsAccount:(id)arg1 withError:(*id)arg2 ;
-(BOOL)_checkAndClearPCSTestOverrideForKey:(id)arg0 ;
-(BOOL)_hasCurrentKeyForService:(id)arg0 inIdentitySet:(struct _PCSIdentitySetData *)arg1 withError:(*id)arg2 ;
-(BOOL)_setStingrayIdentitySet:(struct _PCSIdentitySetData *)arg0 forServiceName:(id)arg1 backingMockAccount:(id)arg2 withError:(*id)arg3 ;
-(BOOL)identitySet:(struct _PCSIdentitySetData *)arg0 containsPublicKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)isManateeAvailableWithError:(*id)arg0 ;
-(BOOL)liverpoolServiceOwnsPublicID:(id)arg0 ;
-(BOOL)serviceIsManatee:(id)arg0 ;
-(id)PCSServiceStringFromCKServiceType:(NSUInteger)arg0 ;
-(id)_addIdentitiesFromServiceNamed:(id)arg0 dsid:(id)arg1 toMutableSet:(struct _PCSIdentitySetData *)arg2 ;
-(id)_cacheIdentitySet:(struct _PCSIdentitySetData *)arg0 forService:(id)arg1 ;
-(id)_copyPublicKeyDataForAllIdentitiesInSet:(struct _PCSIdentitySetData *)arg0 withService:(NSUInteger)arg1 ;
-(id)_copyPublicKeyDataForIdentitySet:(struct _PCSIdentitySetData *)arg0 withService:(NSUInteger)arg1 withError:(*id)arg2 ;
-(id)_copyStingrayIdentitiesForBackingMockAccount:(id)arg0 withError:(*id)arg1 ;
-(id)copyAllPublicKeysForService:(NSUInteger)arg0 withError:(*id)arg1 ;
-(id)copyDiversifiedPublicKeyForService:(NSUInteger)arg0 userIDEntropy:(id)arg1 withError:(*id)arg2 ;
-(id)copyPublicKeyForService:(NSUInteger)arg0 withError:(*id)arg1 ;
-(id)dataFromSharingIdentity:(struct _PCSIdentityData *)arg0 error:(*id)arg1 ;
-(id)initWithAccount:(id)arg0 deviceContext:(id)arg1 serviceName:(id)arg2 forceEnableReadOnlyManatee:(BOOL)arg3 clientSDKVersion:(unsigned int)arg4 ;
-(id)internalServicesToCombineWithLiverpoolKey;
-(struct _PCSIdentityData *)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg0 publicSharingIdentity:(id)arg1 ;
-(struct _PCSIdentityData *)createRandomSharingIdentityWithError:(*id)arg0 ;
-(struct _PCSIdentityData *)createSharingIdentityFromData:(id)arg0 error:(*id)arg1 ;
-(struct _PCSIdentityData *)debugSharingIdentity;
-(struct _PCSIdentitySetData *)_copyIdentityForService:(id)arg0 useCache:(BOOL)arg1 validateCurrentKey:(BOOL)arg2 error:(*id)arg3 ;
-(struct _PCSIdentitySetData *)_copyTestAccountIdentitySetForService:(id)arg0 forBackingExplicitCredentialsAccount:(id)arg1 withError:(*id)arg2 ;
-(struct _PCSIdentitySetData *)_copyTestAccountIdentitySetForService:(id)arg0 forBackingMockAccount:(id)arg1 withError:(*id)arg2 ;
-(struct _PCSIdentitySetData *)_createIdentitySetForService:(id)arg0 dsid:(id)arg1 error:(*id)arg2 ;
-(struct _PCSIdentitySetData *)_createSpecialInMemorySetCombiningLiverpoolWithServiceNamed:(id)arg0 dsid:(id)arg1 error:(*id)arg2 ;
-(struct _PCSIdentitySetData *)_getTestAccountIdentitySetForService:(id)arg0 forBackingMockAccount:(id)arg1 withError:(*id)arg2 ;
-(struct _PCSIdentitySetData *)copyIdentitySetWithType:(NSUInteger)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(struct _PCSIdentitySetData *)createFullKeychainIdentitySetWithError:(*id)arg0 ;
-(struct _PCSPublicIdentityData *)copyDiversifiedIdentityForService:(NSUInteger)arg0 userIDEntropy:(id)arg1 withError:(*id)arg2 ;
-(struct _PCSPublicIdentityData *)createPublicSharingIdentityFromPublicKey:(id)arg0 error:(*id)arg1 ;
-(void)clearOverrides;
-(void)dealloc;
-(void)identitiesChanged;
-(void)setOverride:(id)arg0 value:(id)arg1 ;
-(void)setPCSServiceNameOverwrite:(id)arg0 ;
-(void)updateAccount:(id)arg0 ;


@end


#endif