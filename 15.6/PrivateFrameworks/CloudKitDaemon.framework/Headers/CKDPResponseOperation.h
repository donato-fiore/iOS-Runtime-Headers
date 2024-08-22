// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPRESPONSEOPERATION_H
#define CKDPRESPONSEOPERATION_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPAnonymousShareAddResponse.h"
#import "CKDPAnonymousShareRemoveResponse.h"
#import "CKDPArchiveRecordsResponse.h"
#import "CKDPAssetUploadTokenRetrieveResponse.h"
#import "CKDPAtomBatchMetadataRetrieveResponse.h"
#import "CKDPAtomBatchReplaceResponse.h"
#import "CKDPAtomBatchSaveResponse.h"
#import "CKDPAtomSyncResponse.h"
#import "CKDPBundlesForContainerResponse.h"
#import "CKDPDeleteContainerResponse.h"
#import "CKDPFetchArchivedRecordsResponse.h"
#import "CKDPCodeFunctionInvokeResponse.h"
#import "CKDPMarkAssetBrokenResponse.h"
#import "CKDPNotificationMarkReadResponse.h"
#import "CKDPNotificationSyncResponse.h"
#import "CKDPQueryRetrieveResponse.h"
#import "CKDPRecordDeleteResponse.h"
#import "CKDPRecordResolveTokenResponse.h"
#import "CKDPRecordRetrieveChangesResponse.h"
#import "CKDPRecordRetrieveResponse.h"
#import "CKDPRecordRetrieveVersionsResponse.h"
#import "CKDPRecordSaveResponse.h"
#import "CKDPSetBadgeCountResponse.h"
#import "CKDPShareAcceptResponse.h"
#import "CKDPShareVettingInitiateResponse.h"
#import "CKDPSubscriptionCreateResponse.h"
#import "CKDPSubscriptionDeleteResponse.h"
#import "CKDPSubscriptionRetrieveResponse.h"
#import "CKDPTokenRegistrationResponse.h"
#import "CKDPTokenUnregistrationResponse.h"
#import "CKDPUpdateMissingAssetStatusResponse.h"
#import "CKDPUserAvailableQuotaResponse.h"
#import "CKDPUserPrivacySettingsBatchLookupResponse.h"
#import "CKDPUserPrivacySettingsResetResponse.h"
#import "CKDPUserPrivacySettingsRetrieveResponse.h"
#import "CKDPUserPrivacySettingsUpdateResponse.h"
#import "CKDPUserQueryResponse.h"
#import "CKDPUserRetrieveResponse.h"
#import "CKDPWebAuthTokenRetrieveResponse.h"
#import "CKDPZoneDeleteResponse.h"
#import "CKDPZoneRetrieveChangesResponse.h"
#import "CKDPZoneRetrieveResponse.h"
#import "CKDPZoneSaveResponse.h"
#import "CKDPResponseOperationHeader.h"
#import "CKDPOperation.h"
#import "CKDPResponseOperationResult.h"

@interface CKDPResponseOperation : PBCodable <NSCopying>

 {
    CKDPAnonymousShareAddResponse *_anonymousShareAddResponse;
    CKDPAnonymousShareRemoveResponse *_anonymousShareRemoveResponse;
    CKDPArchiveRecordsResponse *_archiveRecordsResponse;
    CKDPAssetUploadTokenRetrieveResponse *_assetUploadTokenRetrieveResponse;
    CKDPAtomBatchMetadataRetrieveResponse *_atomBatchMetadataRetrieveResponse;
    CKDPAtomBatchReplaceResponse *_atomBatchReplaceResponse;
    CKDPAtomBatchSaveResponse *_atomBatchSaveResponse;
    CKDPAtomSyncResponse *_atomSyncResponse;
    CKDPBundlesForContainerResponse *_bundlesForContainerResponse;
    CKDPDeleteContainerResponse *_deleteContainerResponse;
    CKDPFetchArchivedRecordsResponse *_fetchArchivedRecordsResponse;
    CKDPCodeFunctionInvokeResponse *_functionInvokeResponse;
    CKDPMarkAssetBrokenResponse *_markAssetBrokenResponse;
    CKDPNotificationMarkReadResponse *_notificationMarkReadResponse;
    CKDPNotificationSyncResponse *_notificationSyncResponse;
    CKDPQueryRetrieveResponse *_queryRetrieveResponse;
    CKDPRecordDeleteResponse *_recordDeleteResponse;
    CKDPRecordResolveTokenResponse *_recordResolveTokenResponse;
    CKDPRecordRetrieveChangesResponse *_recordRetrieveChangesResponse;
    CKDPRecordRetrieveResponse *_recordRetrieveResponse;
    CKDPRecordRetrieveVersionsResponse *_recordRetrieveVersionsResponse;
    CKDPRecordSaveResponse *_recordSaveResponse;
    CKDPSetBadgeCountResponse *_setBadgeCountResponse;
    CKDPShareAcceptResponse *_shareAcceptResponse;
    CKDPShareVettingInitiateResponse *_shareVettingInitiateResponse;
    CKDPSubscriptionCreateResponse *_subscriptionCreateResponse;
    CKDPSubscriptionDeleteResponse *_subscriptionDeleteResponse;
    CKDPSubscriptionRetrieveResponse *_subscriptionRetrieveResponse;
    CKDPTokenRegistrationResponse *_tokenRegistrationResponse;
    CKDPTokenUnregistrationResponse *_tokenUnregistrationResponse;
    CKDPUpdateMissingAssetStatusResponse *_updateMissingAssetStatusResponse;
    CKDPUserAvailableQuotaResponse *_userAvailableQuotaResponse;
    CKDPUserPrivacySettingsBatchLookupResponse *_userPrivacySettingsBatchLookupResponse;
    CKDPUserPrivacySettingsResetResponse *_userPrivacySettingsResetResponse;
    CKDPUserPrivacySettingsRetrieveResponse *_userPrivacySettingsRetrieveResponse;
    CKDPUserPrivacySettingsUpdateResponse *_userPrivacySettingsUpdateResponse;
    CKDPUserQueryResponse *_userQueryResponse;
    CKDPUserRetrieveResponse *_userRetrieveResponse;
    CKDPWebAuthTokenRetrieveResponse *_webAuthTokenRetrieveResponse;
    CKDPZoneDeleteResponse *_zoneDeleteResponse;
    CKDPZoneRetrieveChangesResponse *_zoneRetrieveChangesResponse;
    CKDPZoneRetrieveResponse *_zoneRetrieveResponse;
    CKDPZoneSaveResponse *_zoneSaveResponse;
    ? _has;
}


@property (retain, nonatomic) CKDPAnonymousShareAddResponse *anonymousShareAddResponse;
@property (retain, nonatomic) CKDPAnonymousShareRemoveResponse *anonymousShareRemoveResponse;
@property (retain, nonatomic) CKDPArchiveRecordsResponse *archiveRecordsResponse;
@property (retain, nonatomic) CKDPAssetUploadTokenRetrieveResponse *assetUploadTokenRetrieveResponse;
@property (retain, nonatomic) CKDPAtomBatchMetadataRetrieveResponse *atomBatchMetadataRetrieveResponse;
@property (retain, nonatomic) CKDPAtomBatchReplaceResponse *atomBatchReplaceResponse;
@property (retain, nonatomic) CKDPAtomBatchSaveResponse *atomBatchSaveResponse;
@property (retain, nonatomic) CKDPAtomSyncResponse *atomSyncResponse;
@property (retain, nonatomic) CKDPBundlesForContainerResponse *bundlesForContainerResponse;
@property (retain, nonatomic) CKDPDeleteContainerResponse *deleteContainerResponse;
@property (retain, nonatomic) CKDPFetchArchivedRecordsResponse *fetchArchivedRecordsResponse;
@property (retain, nonatomic) CKDPCodeFunctionInvokeResponse *functionInvokeResponse;
@property (readonly, nonatomic) BOOL hasAnonymousShareAddResponse;
@property (readonly, nonatomic) BOOL hasAnonymousShareRemoveResponse;
@property (readonly, nonatomic) BOOL hasArchiveRecordsResponse;
@property (readonly, nonatomic) BOOL hasAssetUploadTokenRetrieveResponse;
@property (readonly, nonatomic) BOOL hasAtomBatchMetadataRetrieveResponse;
@property (readonly, nonatomic) BOOL hasAtomBatchReplaceResponse;
@property (readonly, nonatomic) BOOL hasAtomBatchSaveResponse;
@property (readonly, nonatomic) BOOL hasAtomSyncResponse;
@property (readonly, nonatomic) BOOL hasBundlesForContainerResponse;
@property (readonly, nonatomic) BOOL hasDeleteContainerResponse;
@property (readonly, nonatomic) BOOL hasFetchArchivedRecordsResponse;
@property (readonly, nonatomic) BOOL hasFunctionInvokeResponse;
@property (readonly, nonatomic) BOOL hasHeader;
@property (readonly, nonatomic) BOOL hasMarkAssetBrokenResponse;
@property (readonly, nonatomic) BOOL hasNotificationMarkReadResponse;
@property (readonly, nonatomic) BOOL hasNotificationSyncResponse;
@property (nonatomic) BOOL hasOperationCost;
@property (readonly, nonatomic) BOOL hasQueryRetrieveResponse;
@property (readonly, nonatomic) BOOL hasRecordDeleteResponse;
@property (readonly, nonatomic) BOOL hasRecordResolveTokenResponse;
@property (readonly, nonatomic) BOOL hasRecordRetrieveChangesResponse;
@property (readonly, nonatomic) BOOL hasRecordRetrieveResponse;
@property (readonly, nonatomic) BOOL hasRecordRetrieveVersionsResponse;
@property (readonly, nonatomic) BOOL hasRecordSaveResponse;
@property (readonly, nonatomic) BOOL hasResponse;
@property (readonly, nonatomic) BOOL hasResult;
@property (readonly, nonatomic) BOOL hasSetBadgeCountResponse;
@property (readonly, nonatomic) BOOL hasShareAcceptResponse;
@property (readonly, nonatomic) BOOL hasShareVettingInitiateResponse;
@property (readonly, nonatomic) BOOL hasSubscriptionCreateResponse;
@property (readonly, nonatomic) BOOL hasSubscriptionDeleteResponse;
@property (readonly, nonatomic) BOOL hasSubscriptionRetrieveResponse;
@property (readonly, nonatomic) BOOL hasTokenRegistrationResponse;
@property (readonly, nonatomic) BOOL hasTokenUnregistrationResponse;
@property (readonly, nonatomic) BOOL hasUpdateMissingAssetStatusResponse;
@property (readonly, nonatomic) BOOL hasUserAvailableQuotaResponse;
@property (readonly, nonatomic) BOOL hasUserPrivacySettingsBatchLookupResponse;
@property (readonly, nonatomic) BOOL hasUserPrivacySettingsResetResponse;
@property (readonly, nonatomic) BOOL hasUserPrivacySettingsRetrieveResponse;
@property (readonly, nonatomic) BOOL hasUserPrivacySettingsUpdateResponse;
@property (readonly, nonatomic) BOOL hasUserQueryResponse;
@property (readonly, nonatomic) BOOL hasUserRetrieveResponse;
@property (readonly, nonatomic) BOOL hasWebAuthTokenRetrieveResponse;
@property (readonly, nonatomic) BOOL hasZoneDeleteResponse;
@property (readonly, nonatomic) BOOL hasZoneRetrieveChangesResponse;
@property (readonly, nonatomic) BOOL hasZoneRetrieveResponse;
@property (readonly, nonatomic) BOOL hasZoneSaveResponse;
@property (retain, nonatomic) CKDPResponseOperationHeader *header; // ivar: _header
@property (retain, nonatomic) CKDPMarkAssetBrokenResponse *markAssetBrokenResponse;
@property (retain, nonatomic) CKDPNotificationMarkReadResponse *notificationMarkReadResponse;
@property (retain, nonatomic) CKDPNotificationSyncResponse *notificationSyncResponse;
@property (nonatomic) unsigned int operationCost; // ivar: _operationCost
@property (retain, nonatomic) CKDPQueryRetrieveResponse *queryRetrieveResponse;
@property (retain, nonatomic) CKDPRecordDeleteResponse *recordDeleteResponse;
@property (retain, nonatomic) CKDPRecordResolveTokenResponse *recordResolveTokenResponse;
@property (retain, nonatomic) CKDPRecordRetrieveChangesResponse *recordRetrieveChangesResponse;
@property (retain, nonatomic) CKDPRecordRetrieveResponse *recordRetrieveResponse;
@property (retain, nonatomic) CKDPRecordRetrieveVersionsResponse *recordRetrieveVersionsResponse;
@property (retain, nonatomic) CKDPRecordSaveResponse *recordSaveResponse;
@property (retain, nonatomic) CKDPOperation *response; // ivar: _response
@property (retain, nonatomic) CKDPResponseOperationResult *result; // ivar: _result
@property (retain, nonatomic) CKDPSetBadgeCountResponse *setBadgeCountResponse;
@property (retain, nonatomic) CKDPShareAcceptResponse *shareAcceptResponse;
@property (retain, nonatomic) CKDPShareVettingInitiateResponse *shareVettingInitiateResponse;
@property (retain, nonatomic) CKDPSubscriptionCreateResponse *subscriptionCreateResponse;
@property (retain, nonatomic) CKDPSubscriptionDeleteResponse *subscriptionDeleteResponse;
@property (retain, nonatomic) CKDPSubscriptionRetrieveResponse *subscriptionRetrieveResponse;
@property (retain, nonatomic) CKDPTokenRegistrationResponse *tokenRegistrationResponse;
@property (retain, nonatomic) CKDPTokenUnregistrationResponse *tokenUnregistrationResponse;
@property (retain, nonatomic) CKDPUpdateMissingAssetStatusResponse *updateMissingAssetStatusResponse;
@property (retain, nonatomic) CKDPUserAvailableQuotaResponse *userAvailableQuotaResponse;
@property (retain, nonatomic) CKDPUserPrivacySettingsBatchLookupResponse *userPrivacySettingsBatchLookupResponse;
@property (retain, nonatomic) CKDPUserPrivacySettingsResetResponse *userPrivacySettingsResetResponse;
@property (retain, nonatomic) CKDPUserPrivacySettingsRetrieveResponse *userPrivacySettingsRetrieveResponse;
@property (retain, nonatomic) CKDPUserPrivacySettingsUpdateResponse *userPrivacySettingsUpdateResponse;
@property (retain, nonatomic) CKDPUserQueryResponse *userQueryResponse;
@property (retain, nonatomic) CKDPUserRetrieveResponse *userRetrieveResponse;
@property (retain, nonatomic) CKDPWebAuthTokenRetrieveResponse *webAuthTokenRetrieveResponse;
@property (retain, nonatomic) CKDPZoneDeleteResponse *zoneDeleteResponse;
@property (retain, nonatomic) CKDPZoneRetrieveChangesResponse *zoneRetrieveChangesResponse;
@property (retain, nonatomic) CKDPZoneRetrieveResponse *zoneRetrieveResponse;
@property (retain, nonatomic) CKDPZoneSaveResponse *zoneSaveResponse;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif