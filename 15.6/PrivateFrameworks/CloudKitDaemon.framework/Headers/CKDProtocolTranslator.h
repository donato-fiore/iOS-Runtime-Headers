// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPROTOCOLTRANSLATOR_H
#define CKDPROTOCOLTRANSLATOR_H

@class NSString, NSMutableDictionary, CKDPIdentifier;
@protocol CKDProtocolTranslatorIdentityDelegate;

#import <Foundation/Foundation.h>


@interface CKDProtocolTranslator : NSObject

@property (copy, nonatomic) NSString *containerScopedUserID; // ivar: _containerScopedUserID
@property (readonly, nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (nonatomic) BOOL dontCreateValidatingParentReferences; // ivar: _dontCreateValidatingParentReferences
@property (retain, nonatomic) NSMutableDictionary *downloadPreauthorizationMap; // ivar: _downloadPreauthorizationMap
@property (weak, nonatomic) NSObject<CKDProtocolTranslatorIdentityDelegate> *identityDelegate; // ivar: _identityDelegate
@property (copy, nonatomic) NSString *orgAdminUserID; // ivar: _orgAdminUserID
@property (copy, nonatomic) NSString *overriddenContainerScopedUserID; // ivar: _overriddenContainerScopedUserID
@property (readonly, nonatomic) CKDPIdentifier *pUserID;
@property (copy, nonatomic) NSString *packageStagingDirectory; // ivar: _packageStagingDirectory


+(id)translatorIgnoringUserIDsWithPackageStagingDirectory:(id)arg0 databaseScope:(NSInteger)arg1 ;
-(BOOL)_isDefaultUserNameFromClient:(id)arg0 ;
-(BOOL)_isDefaultUserNameFromServer:(id)arg0 ;
-(BOOL)_valueTypeIsAnEncryptedBytesTypeForField:(id)arg0 ;
-(BOOL)objectIsAnEncryptedType:(id)arg0 ;
-(NSUInteger)capabilitiesFromPZoneCapabilities:(id)arg0 ;
-(id)_initWithContainerScopedUserID:(id)arg0 orgAdminUserID:(id)arg1 packageStagingDirectory:(id)arg2 databaseScope:(NSInteger)arg3 ;
-(id)_pRecordFromRecordSansValues:(id)arg0 forCache:(BOOL)arg1 ;
-(id)assetFromPAsset:(id)arg0 error:(*id)arg1 ;
-(id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg0 ;
-(id)deltaPRecordFromRecord:(id)arg0 withAllFields:(BOOL)arg1 outDeletedMergeFields:(*id)arg2 outKeysToSend:(*id)arg3 ;
-(id)encryptedFieldValueOfType:(int)arg0 withObject:(id)arg1 ;
-(id)encryptedObjectRepresentationFromFieldValue:(id)arg0 ;
-(id)fieldValueFromObject:(id)arg0 ;
-(id)fieldValueFromObject:(id)arg0 forCache:(BOOL)arg1 ;
-(id)fieldValueOfType:(int)arg0 withObject:(id)arg1 ;
-(id)fieldValueOfType:(int)arg0 withObject:(id)arg1 forCache:(BOOL)arg2 ;
-(id)identityFromPUser:(id)arg0 ;
-(id)initWithContainerScopedUserID:(id)arg0 orgAdminUserID:(id)arg1 packageStagingDirectory:(id)arg2 databaseScope:(NSInteger)arg3 ;
-(id)initWithPackageStagingDirectory:(id)arg0 databaseScope:(NSInteger)arg1 ;
-(id)locationFieldValueWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
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
-(id)pFieldActionWithLocation:(NSInteger)arg0 length:(NSUInteger)arg1 values:(id)arg2 ;
-(id)pFieldWithKey:(id)arg0 value:(id)arg1 ;
-(id)pFieldWithKey:(id)arg0 value:(id)arg1 forCache:(BOOL)arg2 ;
-(id)pIdentifierFromUserRecordID:(id)arg0 ;
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
-(id)throttleFromPThrottlingConfig:(id)arg0 ;
-(id)userNameFromPIdentifier:(id)arg0 error:(*id)arg1 ;
-(int)fieldValueTypeFromEncryptedDataObject:(id)arg0 isInList:(BOOL)arg1 ;
-(int)fieldValueTypeFromObject:(id)arg0 ;
-(void)consumeResponseHeader:(id)arg0 ;


@end


#endif