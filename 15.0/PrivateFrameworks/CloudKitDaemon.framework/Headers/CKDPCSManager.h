// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPCSMANAGER_H
#define CKDPCSMANAGER_H

@class NSData, CKContainerID, NSString, NSDate, NSMutableSet, NSMutableDictionary;
@protocol CKDPCSTestOverrideProvider, CKDProtocolTranslatorIdentityDelegate, OS_dispatch_queue, CKDContainerScopedUserIDProvider, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CKDAccount.h"
#import "CKDLogicalDeviceContext.h"
#import "CKDPCSIdentityManager.h"

@interface CKDPCSManager : NSObject <CKDPCSTestOverrideProvider, CKDProtocolTranslatorIdentityDelegate>



@property (retain) CKDAccount *account; // ivar: _account
@property (retain, nonatomic) NSData *boundaryKeyData; // ivar: _boundaryKeyData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (readonly, weak, nonatomic) NSObject<CKDContainerScopedUserIDProvider> *containerScopedUserIDProvider; // ivar: _containerScopedUserIDProvider
@property (readonly, nonatomic) BOOL currentServiceIsManatee;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext; // ivar: _deviceContext
@property (readonly, nonatomic) BOOL forceEnableReadOnlyManatee; // ivar: _forceEnableReadOnlyManatee
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKDPCSIdentityManager *identityManager; // ivar: _identityManager
@property (retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDateForCurrentService; // ivar: _lastMissingManateeIdentityErrorDateForCurrentService
@property (retain, nonatomic) NSMutableSet *missingIdentityPublicKeys; // ivar: _missingIdentityPublicKeys
@property (readonly, nonatomic) NSUInteger mmcsEncryptionSupport; // ivar: _mmcsEncryptionSupport
@property (readonly, nonatomic) NSString *pcsServiceName;
@property (retain, nonatomic) NSMutableDictionary *pcsTestOverrides; // ivar: _pcsTestOverrides
@property (retain, nonatomic) NSObject<OS_dispatch_source> *pcsUpdateSource; // ivar: _pcsUpdateSource
@property (readonly, nonatomic) NSString *responsibleBundleID; // ivar: _responsibleBundleID
@property (readonly, nonatomic) NSUInteger serviceTypeForSharing;
@property (retain, nonatomic) NSMutableSet *servicesWithMissingIdentities; // ivar: _servicesWithMissingIdentities
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue; // ivar: _synchronizeQueue
@property (retain, nonatomic) NSMutableSet *undecryptablePCSDataHashes; // ivar: _undecryptablePCSDataHashes
@property (readonly, nonatomic) BOOL useZoneWidePCS; // ivar: _useZoneWidePCS


+(id)_legacyServiceNameForContainerID:(id)arg0 ;
+(id)allProtectionIdentifiersFromShareProtection:(struct _OpaquePCSShareProtection *)arg0 ;
+(id)noMatchingIdentityErrorForPCSError:(struct __CFError *)arg0 withErrorCode:(NSInteger)arg1 description:(id)arg2 ;
+(id)pcsOverrideKeys;
+(id)protectionIdentifierFromShareProtection:(struct _OpaquePCSShareProtection *)arg0 ;
+(id)publicKeyIDFromIdentity:(struct _OpaquePCSShareProtection *)arg0 ;
-(?)_copyShareProtectionFromExportedData:(?)arg0 ofType:(?)arg1 identitieserror;
-(BOOL)_addPublicIdentityForService:(NSUInteger)arg0 toSharePCS:(struct _OpaquePCSShareProtection *)arg1 withError:(*id)arg2 ;
-(BOOL)_checkAndClearPCSTestOverrideForKey:(id)arg0 ;
-(BOOL)_checkPCSTestOverrideForKey:(id)arg0 ;
-(BOOL)_checkUnitTestOverridesForDecryptionFailuresWithState:(BOOL)arg0 shouldRetry:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_isAllowlistedKeyRollingContainerID:(id)arg0 ;
-(BOOL)_isKeyRollingUnitTestContainerID:(id)arg0 ;
-(BOOL)addSharePCS:(struct _OpaquePCSShareProtection *)arg0 toRecordPCS:(struct _OpaquePCSShareProtection *)arg1 error:(*id)arg2 ;
-(BOOL)addSharePCS:(struct _OpaquePCSShareProtection *)arg0 toRecordPCS:(struct _OpaquePCSShareProtection *)arg1 permission:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)availableIdentityForService:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)canDecryptInvitedProtectionData:(id)arg0 participantProtectionInfo:(id)arg1 serviceType:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)canRollShareKeys;
-(BOOL)containerSupportsEnhancedContext;
-(BOOL)decryptSharedZonePCSData:(id)arg0 withInvitedPCS:(struct _OpaquePCSShareProtection *)arg1 error:(*id)arg2 ;
-(BOOL)findSelfParticipantOnShareMetadata:(id)arg0 invitationToken:(id)arg1 ;
-(BOOL)isPreviouslyUndecryptablePCS:(id)arg0 ;
-(BOOL)removePublicKeys:(id)arg0 fromPCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(BOOL)removeSharePCS:(struct _OpaquePCSShareProtection *)arg0 fromRecordPCS:(struct _OpaquePCSShareProtection *)arg1 error:(*id)arg2 ;
-(BOOL)serviceTypeIsManatee:(NSUInteger)arg0 ;
-(BOOL)sharingFingerprintsContainPublicKeyWithData:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateSigningIdentityOnPCS:(struct _OpaquePCSShareProtection *)arg0 usingSignedPCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(BOOL)zonePCSNeedsKeyRolled:(struct _OpaquePCSShareProtection *)arg0 ;
-(BOOL)zonePCSNeedsKeyRolled:(struct _OpaquePCSShareProtection *)arg0 bypassAllowlistedContainers:(BOOL)arg1 ;
-(BOOL)zonePCSNeedsUpdate:(struct _OpaquePCSShareProtection *)arg0 ;
-(NSUInteger)publicKeyVersionForServiceType:(NSUInteger)arg0 ;
-(id)_addIdentity:(struct _PCSIdentitySetData *)arg0 withService:(NSUInteger)arg1 toPCS:(struct _OpaquePCSShareProtection *)arg2 ;
-(id)_pcsObjectKindForCKDPCSBlobType:(NSUInteger)arg0 ;
-(id)_pcsTestOverrideForKey:(id)arg0 ;
-(id)_unwrapEncryptedData:(id)arg0 usingKeyID:(id)arg1 forPCS:(struct _OpaquePCSShareProtection *)arg2 withContextString:(id)arg3 ;
-(id)addIdentityBackToPCS:(struct _OpaquePCSShareProtection *)arg0 ;
-(id)addIdentityForService:(NSUInteger)arg0 toPCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(id)addPublicIdentity:(struct _PCSPublicIdentityData *)arg0 toSharePCS:(struct _OpaquePCSShareProtection *)arg1 permission:(unsigned int)arg2 ;
-(id)addSharingIdentity:(struct _PCSIdentityData *)arg0 toSharePCS:(struct _OpaquePCSShareProtection *)arg1 permission:(NSUInteger)arg2 ;
-(id)copyAllPublicKeysForService:(NSUInteger)arg0 withError:(*id)arg1 ;
-(id)copyDiversifiedPublicKeyForService:(NSUInteger)arg0 withError:(*id)arg1 ;
-(id)copyPublicKeyForService:(NSUInteger)arg0 withError:(*id)arg1 ;
-(id)createNewSharePCSDataForShareWithID:(id)arg0 withPublicSharingKey:(id)arg1 addDebugIdentity:(BOOL)arg2 error:(*id)arg3 ;
-(id)createProtectionInfoFromOONPrivateKey:(id)arg0 privateToken:(id)arg1 OONProtectionInfo:(id)arg2 error:(*id)arg3 ;
-(id)createSignatureWithIdentity:(struct _PCSIdentityData *)arg0 dataToBeSigned:(id)arg1 error:(*id)arg2 ;
-(id)dataFromRecordPCS:(struct _OpaquePCSShareProtection *)arg0 error:(*id)arg1 ;
-(id)dataFromSharePCS:(struct _OpaquePCSShareProtection *)arg0 error:(*id)arg1 ;
-(id)dataFromSharingIdentity:(struct _PCSIdentityData *)arg0 error:(*id)arg1 ;
-(id)dataFromZonePCS:(struct _OpaquePCSShareProtection *)arg0 error:(*id)arg1 ;
-(id)decryptChainPCSForRecordPCS:(id)arg0 ;
-(id)etagFromPCSData:(id)arg0 ;
-(id)etagFromRecordPCS:(struct _OpaquePCSShareProtection *)arg0 error:(*id)arg1 ;
-(id)etagFromSharePCS:(struct _OpaquePCSShareProtection *)arg0 error:(*id)arg1 ;
-(id)etagFromZonePCS:(struct _OpaquePCSShareProtection *)arg0 error:(*id)arg1 ;
-(id)generateAnonymousCKUserIDForCurrentUserInShare:(id)arg0 containerID:(id)arg1 acceptA2AShareUsingVersionOneAnonymousIdentifier:(BOOL)arg2 ;
-(id)generateOctopusAnonymousUserID;
-(id)getAllPublicKeysForExportedData:(id)arg0 error:(*id)arg1 ;
-(id)getCurrentIdentityExportedPrivateKey;
-(id)initWithContainer:(id)arg0 ;
-(id)keyRollForZoneWideShareRecordPCS:(id)arg0 sharedZonePCS:(id)arg1 sharePCS:(id)arg2 ;
-(id)keyRollForZoneWideShareWithZonePCS:(id)arg0 sharePCS:(id)arg1 ;
-(id)keyRollIfNeededForPerRecordPCS:(id)arg0 ;
-(id)newAssetKeyWithType:(NSUInteger)arg0 withError:(*id)arg1 ;
-(id)participantPublicKeyForServiceType:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)publicKeyDataFromPCS:(struct _OpaquePCSShareProtection *)arg0 error:(*id)arg1 ;
-(id)referenceIdentifierStringFromAssetKey:(id)arg0 ;
-(id)referenceSignatureFromAssetKey:(id)arg0 ;
-(id)removeEncryptedPCS:(id)arg0 fromSharePCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(id)removePrivateKeysForKeyIDs:(id)arg0 fromPCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(id)removePublicIdentity:(struct _PCSPublicIdentityData *)arg0 fromSharePCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(id)removePublicKeyID:(id)arg0 fromPCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(id)removeSharingIdentity:(struct _PCSIdentityData *)arg0 fromSharePCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(id)repairZonePCSData:(id)arg0 error:(*id)arg1 ;
-(id)rollIdentityForSharePCS:(struct _OpaquePCSShareProtection *)arg0 removeAllExistingPrivateKeys:(BOOL)arg1 error:(*id)arg2 ;
-(id)rollMasterKeyForRecordPCS:(struct _OpaquePCSShareProtection *)arg0 ;
-(id)rollMasterKeyForRecordPCS:(struct _OpaquePCSShareProtection *)arg0 bypassAllowlistedContainers:(BOOL)arg1 ;
-(id)sharingIdentityDataFromPCS:(struct _OpaquePCSShareProtection *)arg0 error:(*id)arg1 ;
-(id)unwrapAssetKey:(id)arg0 withRecordPCS:(struct _OpaquePCSShareProtection *)arg1 inContext:(id)arg2 withError:(*id)arg3 ;
-(id)unwrapEncryptedData:(id)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1 inContext:(id)arg2 ;
-(id)unwrapEncryptedData:(id)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1 withContextString:(id)arg2 ;
-(id)updateIdentityAndRollKeyForZonePCS:(struct _OpaquePCSShareProtection *)arg0 usingServiceIdentityWithType:(NSUInteger)arg1 ;
-(id)updateServiceIdentityOnZonePCS:(struct _OpaquePCSShareProtection *)arg0 ;
-(id)updateZoneIdentityForPCS:(struct _OpaquePCSShareProtection *)arg0 usingZonePCS:(struct _OpaquePCSShareProtection *)arg1 bypassAllowlistedContainers:(BOOL)arg2 ;
-(id)wrapAssetKey:(id)arg0 withRecordPCS:(struct _OpaquePCSShareProtection *)arg1 inContext:(id)arg2 withError:(*id)arg3 ;
-(id)wrapEncryptedData:(id)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1 inContext:(id)arg2 ;
-(id)wrapEncryptedData:(id)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1 withContextString:(id)arg2 ;
-(struct _OpaquePCSShareProtection *)createChainPCSWithError:(*id)arg0 ;
-(struct _OpaquePCSShareProtection *)createEmptySharePCSOfType:(NSUInteger)arg0 error:(*id)arg1 ;
-(struct _OpaquePCSShareProtection *)createEmptySignedSharePCSOfType:(NSUInteger)arg0 forPCSServiceType:(NSUInteger)arg1 withError:(*id)arg2 ;
-(struct _OpaquePCSShareProtection *)createPCSObjectFromData:(id)arg0 ofType:(NSUInteger)arg1 sharedToPCS:(struct _OpaquePCSShareProtection *)arg2 error:(*id)arg3 ;
-(struct _OpaquePCSShareProtection *)createPCSObjectFromData:(id)arg0 ofType:(NSUInteger)arg1 sharedToPCS:(struct _OpaquePCSShareProtection *)arg2 logFailure:(BOOL)arg3 error:(*id)arg4 ;
-(struct _OpaquePCSShareProtection *)createRecordPCSWithEncryptedZonePCS:(struct __CFData *)arg0 sharePCS:(struct _OpaquePCSShareProtection *)arg1 createLite:(BOOL)arg2 error:(*id)arg3 ;
-(struct _OpaquePCSShareProtection *)createRecordPCSWithZonePCS:(struct _OpaquePCSShareProtection *)arg0 sharePCS:(struct _OpaquePCSShareProtection *)arg1 createLite:(BOOL)arg2 error:(*id)arg3 ;
-(struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg0 ofType:(NSUInteger)arg1 withService:(NSUInteger)arg2 error:(*id)arg3 ;
-(struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg0 ofType:(NSUInteger)arg1 withService:(NSUInteger)arg2 logFailure:(BOOL)arg3 error:(*id)arg4 ;
-(struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg0 sharePrivateKey:(id)arg1 error:(*id)arg2 ;
-(struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg0 sharingIdentity:(struct _PCSIdentityData *)arg1 error:(*id)arg2 ;
-(struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg0 sharingIdentity:(struct _PCSIdentityData *)arg1 logFailure:(BOOL)arg2 error:(*id)arg3 ;
-(struct _OpaquePCSShareProtection *)createSharePCSFromEncryptedData:(id)arg0 error:(*id)arg1 ;
-(struct _OpaquePCSShareProtection *)createSharePCSOfType:(NSUInteger)arg0 forPCSServiceType:(NSUInteger)arg1 error:(*id)arg2 ;
-(struct _OpaquePCSShareProtection *)createSharePublicPCSWithIdentity:(struct _PCSIdentityData *)arg0 error:(*id)arg1 ;
-(struct _OpaquePCSShareProtection *)createZonePCSFromData:(id)arg0 usingServiceIdentityWithType:(NSUInteger)arg1 error:(*id)arg2 ;
-(struct _OpaquePCSShareProtection *)createZonePCSWithError:(*id)arg0 ;
-(struct _PCSIdentityData *)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg0 publicSharingIdentity:(id)arg1 ;
-(struct _PCSIdentityData *)createRandomSharingIdentityWithError:(*id)arg0 ;
-(struct _PCSIdentityData *)createSharingIdentityFromData:(id)arg0 error:(*id)arg1 ;
-(struct _PCSIdentityData *)debugSharingIdentity;
-(struct _PCSPublicIdentityData *)copyDiversifiedIdentityForService:(NSUInteger)arg0 withError:(*id)arg1 ;
-(struct _PCSPublicIdentityData *)copyPublicAuthorshipIdentityFromPCS:(struct _OpaquePCSShareProtection *)arg0 ;
-(struct _PCSPublicIdentityData *)createPublicSharingIdentityFromPublicKey:(id)arg0 error:(*id)arg1 ;
-(void)_createPCSFromData:(id)arg0 ofType:(NSUInteger)arg1 usingPCSServiceType:(NSUInteger)arg2 tryDecryptingWithOtherServices:(BOOL)arg3 withSyncKeyRegistryRetry:(BOOL)arg4 zonePCSModificationDate:(id)arg5 completionHandler:(id)arg6 ;
-(void)_lockedBoundaryKeyDataWithCompletionHandler:(id)arg0 ;
-(void)_locked_createPCSFromData:(id)arg0 ofType:(NSUInteger)arg1 usingPCSServiceType:(NSUInteger)arg2 tryDecryptingWithOtherServices:(BOOL)arg3 withSyncKeyRegistryRetry:(BOOL)arg4 zonePCSModificationDate:(id)arg5 keySyncAnalytics:(id)arg6 completionHandler:(id)arg7 ;
-(void)_locked_createZonePCSWithSyncKeyRegistryRetry:(BOOL)arg0 keySyncAnalytics:(id)arg1 completionHandler:(id)arg2 ;
-(void)_locked_decryptCurrentPerParticipantPCSDataOnSharePCS:(id)arg0 completionHandler:(id)arg1 ;
-(void)_locked_decryptPCSDataOnSharePCS:(id)arg0 withPublicSharingKey:(id)arg1 completionHandler:(id)arg2 ;
-(void)_locked_markMissingIdentitiesFromFailedDecryptError:(struct __CFError *)arg0 serviceName:(id)arg1 ;
-(void)_locked_pcsDataFromFetchedShare:(id)arg0 withPublicSharingKey:(id)arg1 withServiceType:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_locked_preflightIdentitiesForService:(NSUInteger)arg0 withSyncKeyRegistryRetry:(BOOL)arg1 keySyncAnalytics:(id)arg2 completionHandler:(id)arg3 ;
-(void)_onSynchronizeQueue:(id)arg0 ;
-(void)addEntriesForUnitTestOverrides:(id)arg0 ;
-(void)boundaryKeyDataWithCompletionHandler:(id)arg0 ;
-(void)createIngestedPPPCSDataFromInvitationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)createZonePCSFromData:(id)arg0 usingServiceIdentityWithType:(NSUInteger)arg1 zonePCSModificationDate:(id)arg2 completionHandler:(id)arg3 ;
-(void)createZonePCSWithCompletionHandler:(id)arg0 ;
-(void)createZonePCSWithSyncKeyRegistryRetry:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)decryptPCSDataOnSharePCS:(id)arg0 completionHandler:(id)arg1 ;
-(void)markUndecryptablePCS:(id)arg0 ;
-(void)pcsDataFromFetchedShare:(id)arg0 completionHandler:(id)arg1 ;
-(void)pcsDataFromFetchedShare:(id)arg0 withPublicSharingKey:(id)arg1 withServiceType:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)pcsDataFromFetchedShare:(id)arg0 withServiceType:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)preflightIdentitiesForService:(NSUInteger)arg0 withSyncKeyRegistryRetry:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)sendCoreAnalyticsEventForKeySync:(id)arg0 ;
-(void)setOwnerIdentity:(struct _PCSPublicIdentityData *)arg0 onPCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(void)synchronizeUserKeyRegistryForServiceType:(NSUInteger)arg0 shouldThrottle:(BOOL)arg1 context:(id)arg2 completionHandler:(id)arg3 ;
-(void)triggerAutoSysdiagnoseIfNecessaryForError:(id)arg0 encryptedData:(id)arg1 pcs:(struct _OpaquePCSShareProtection *)arg2 ;
-(void)updateAccount:(id)arg0 clearPCSCacheHandler:(id)arg1 ;


@end


#endif