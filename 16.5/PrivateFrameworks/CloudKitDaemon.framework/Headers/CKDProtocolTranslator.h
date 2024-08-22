// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPROTOCOLTRANSLATOR_H
#define CKDPROTOCOLTRANSLATOR_H

@class NSString, NSMutableDictionary, CKDPIdentifier;
@protocol CKDProtocolTranslatorIdentityDelegate;

#import <Foundation/Foundation.h>


@interface CKDProtocolTranslator : NSObject

@property (readonly, nonatomic) BOOL addDatabaseScopeToZoneIDs; // ivar: _addDatabaseScopeToZoneIDs
@property (readonly, copy, nonatomic) NSString *containerScopedUserID; // ivar: _containerScopedUserID
@property (readonly, nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property BOOL dontCreateValidatingParentReferences; // ivar: _dontCreateValidatingParentReferences
@property (readonly, nonatomic) NSMutableDictionary *downloadPreauthorizationMap; // ivar: _downloadPreauthorizationMap
@property (weak) NSObject<CKDProtocolTranslatorIdentityDelegate> *identityDelegate; // ivar: _identityDelegate
@property (readonly, copy, nonatomic) NSString *orgAdminUserID; // ivar: _orgAdminUserID
@property (copy) NSString *overriddenContainerScopedUserID; // ivar: _overriddenContainerScopedUserID
@property NSInteger overriddenDatabaseScope; // ivar: _overriddenDatabaseScope
@property (readonly, nonatomic) CKDPIdentifier *pUserID;
@property (readonly, copy, nonatomic) NSString *packageStagingDirectory; // ivar: _packageStagingDirectory


+(id)standaloneTranslatorWithPackageStagingDirectory:(id)arg0 databaseScope:(NSInteger)arg1 ;
-(BOOL)_isDefaultUserNameFromClient:(id)arg0 ;
-(BOOL)_isDefaultUserNameFromServer:(id)arg0 ;
-(BOOL)_valueTypeIsAnEncryptedBytesTypeForField:(id)arg0 ;
-(BOOL)haveDownloadPreauthorizations;
-(BOOL)mergeTimestamps:(id)arg0 intoDeltaMetadata:(id)arg1 error:(*id)arg2 ;
-(BOOL)objectIsAnEncryptedType:(id)arg0 ;
-(NSUInteger)capabilitiesFromPZoneCapabilities:(id)arg0 ;
-(id)_initWithContainerScopedUserID:(id)arg0 orgAdminUserID:(id)arg1 packageStagingDirectory:(id)arg2 databaseScope:(NSInteger)arg3 addDatabaseScopeToZoneIDs:(BOOL)arg4 ;
-(id)_pRecordFromRecordSansValues:(id)arg0 forCache:(BOOL)arg1 ;
-(id)assetFromPAsset:(id)arg0 error:(*id)arg1 ;
-(id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg0 ;
-(id)deltaPRecordFromRecord:(id)arg0 withAllFields:(BOOL)arg1 outDeletedMergeFields:(*id)arg2 outKeysToSend:(*id)arg3 ;
-(id)downloadPreauthorizationForResponseUUID:(id)arg0 ;
-(id)encryptedFieldValueOfType:(int)arg0 withObject:(id)arg1 ;
-(id)encryptedObjectRepresentationFromFieldValue:(id)arg0 ;
-(id)fieldValueFromObject:(id)arg0 ;
-(id)fieldValueFromObject:(id)arg0 forCache:(BOOL)arg1 ;
-(id)fieldValueOfType:(int)arg0 withObject:(id)arg1 ;
-(id)fieldValueOfType:(int)arg0 withObject:(id)arg1 forCache:(BOOL)arg2 ;
-(id)identityFromPUser:(id)arg0 ;
-(id)initWithContainer:(id)arg0 databaseScope:(NSInteger)arg1 ;
-(id)initWithContainer:(id)arg0 databaseScope:(NSInteger)arg1 requireContainerScopedUserID:(BOOL)arg2 ;
-(id)locationFieldValueWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
-(id)mergeableDeltaFromPDelta:(id)arg0 valueID:(id)arg1 error:(*id)arg2 ;
-(id)mergeableDeltaMetadataFromPMetadata:(id)arg0 mergeableValueID:(id)arg1 error:(*id)arg2 ;
-(id)mergeableRecordValueFromPRecordField:(id)arg0 inPRecordIdentifier:(id)arg1 asAnonymousCKUserID:(id)arg2 error:(*id)arg3 ;
-(id)mergeableValueIDFromPMergeableValueIdentifier:(id)arg0 recordName:(id)arg1 fieldName:(id)arg2 encrypted:(BOOL)arg3 error:(*id)arg4 ;
-(id)notificationFromPPushMessage:(id)arg0 ;
-(id)objectRepresentationFromField:(id)arg0 inRecord:(id)arg1 asAnonymousCKUserID:(id)arg2 ;
-(id)objectRepresentationFromFieldValue:(id)arg0 ;
-(id)pAliasWithEmailAddress:(id)arg0 ;
-(id)pAliasWithHashedStringID:(id)arg0 type:(int)arg1 ;
-(id)pAliasWithIdentityLookupInfo:(id)arg0 ;
-(id)pAliasWithPhoneNumber:(id)arg0 ;
-(id)pAliasWithUserRecordID:(id)arg0 ;
-(id)pAssetFromAsset:(id)arg0 ;
-(id)pContainerScopedRecordIdentifierWithPRecordIdentifier:(id)arg0 ;
-(id)pContainerScopedRecordZoneIdentifierFromFromPRecordZoneIdentifier:(id)arg0 ;
-(id)pContainerScopedUserIdentifierFromPUserIdentifier:(id)arg0 ;
-(id)pEncryptedMergeableValueFromRecordValue:(id)arg0 ;
-(id)pFieldActionWithLocation:(NSInteger)arg0 length:(NSUInteger)arg1 values:(id)arg2 ;
-(id)pFieldWithKey:(id)arg0 value:(id)arg1 ;
-(id)pFieldWithKey:(id)arg0 value:(id)arg1 forCache:(BOOL)arg2 ;
-(id)pIdentifierFromUserRecordID:(id)arg0 ;
-(id)pMergeableDeltaFromDelta:(id)arg0 error:(*id)arg1 ;
-(id)pMergeableDeltaMetadataFromMetadata:(id)arg0 mergeableValueID:(id)arg1 error:(*id)arg2 ;
-(id)pMergeableValueFromMergeableValueID:(id)arg0 ;
-(id)pMergeableValueIdentifierFromMergeableValueID:(id)arg0 ;
-(id)pPackageFromPackage:(id)arg0 ;
-(id)pParticipantFromShareParticipant:(id)arg0 forCache:(BOOL)arg1 ;
-(id)pQueryFromQuery:(id)arg0 error:(*id)arg1 ;
-(id)pRecordFromRecord:(id)arg0 ;
-(id)pRecordFromRecord:(id)arg0 forCache:(BOOL)arg1 ;
-(id)pRecordIdentifierFromRecordID:(id)arg0 ;
-(id)pRecordIdentifierFromUserRecordName:(id)arg0 ;
-(id)pRecordZoneFromRecordZone:(id)arg0 ;
-(id)pRecordZoneIdentifierFromRecordZoneID:(id)arg0 ;
-(id)pReferenceFromReference:(id)arg0 error:(*id)arg1 ;
-(id)pShareFromShare:(id)arg0 forCache:(BOOL)arg1 ;
-(id)pShareIdentifierFromRecordID:(id)arg0 ;
-(id)pStreamingAssetFromStreamingAsset:(id)arg0 forCache:(BOOL)arg1 ;
-(id)pSubscriptionFromSubscription:(id)arg0 error:(*id)arg1 ;
-(id)pUserIdentifierFromUserRecordName:(id)arg0 ;
-(id)packageFromPPackage:(id)arg0 error:(*id)arg1 ;
-(id)recordFromPRecord:(id)arg0 asAnonymousCKUserID:(id)arg1 error:(*id)arg2 ;
-(id)recordFromPRecord:(id)arg0 error:(*id)arg1 ;
-(id)recordIDFromPRecordIdentifier:(id)arg0 asAnonymousCKUserID:(id)arg1 error:(*id)arg2 ;
-(id)recordIDFromPRecordIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)recordIDFromPShareIdentifier:(id)arg0 asAnonymousCKUserID:(id)arg1 error:(*id)arg2 ;
-(id)recordIDFromPShareIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)recordIDFromPUserName:(id)arg0 error:(*id)arg1 ;
-(id)recordZoneFromPRecordZone:(id)arg0 asAnonymousCKUserID:(id)arg1 error:(*id)arg2 ;
-(id)recordZoneFromPRecordZone:(id)arg0 error:(*id)arg1 ;
-(id)recordZoneIDFromPRecordZoneIdentifier:(id)arg0 asAnonymousCKUserID:(id)arg1 error:(*id)arg2 ;
-(id)recordZoneIDFromPRecordZoneIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)referenceFromPReference:(id)arg0 asAnonymousCKUserID:(id)arg1 error:(*id)arg2 ;
-(id)referenceFromPReference:(id)arg0 error:(*id)arg1 ;
-(id)shareFromPShare:(id)arg0 asAnonymousCKUserID:(id)arg1 error:(*id)arg2 ;
-(id)shareFromPShare:(id)arg0 error:(*id)arg1 ;
-(id)shareParticipantFromPParticipant:(id)arg0 error:(*id)arg1 ;
-(id)streamingAssetFromPStreamingAsset:(id)arg0 error:(*id)arg1 ;
-(id)subscriptionFromPSubscription:(id)arg0 error:(*id)arg1 ;
-(id)userNameFromPIdentifier:(id)arg0 error:(*id)arg1 ;
-(int)fieldValueTypeFromEncryptedDataObject:(id)arg0 isInList:(BOOL)arg1 ;
-(int)fieldValueTypeFromObject:(id)arg0 ;
-(void)consumeResponseHeader:(id)arg0 ;
-(void)setDownloadPreauthorization:(id)arg0 forResponseUUID:(id)arg1 ;


@end


#endif