// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPREQUESTOPERATION_H
#define CKDPREQUESTOPERATION_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPAnonymousShareAddRequest.h"
#import "CKDPAnonymousShareRemoveRequest.h"
#import "CKDPArchiveRecordsRequest.h"
#import "CKDPAssetUploadTokenRetrieveRequest.h"
#import "CKDPBundlesForContainerRequest.h"
#import "CKDPDeleteContainerRequest.h"
#import "CKDPFetchArchivedRecordsRequest.h"
#import "CKDPCodeFunctionInvokeRequest.h"
#import "CKDPMarkAssetBrokenRequest.h"
#import "CKDPMergeableDeltaMetadataRetrieveRequest.h"
#import "CKDPMergeableDeltaReplaceRequest.h"
#import "CKDPMergeableDeltaRetrieveRequest.h"
#import "CKDPMergeableDeltaSaveRequest.h"
#import "CKDPNotificationMarkReadRequest.h"
#import "CKDPNotificationSyncRequest.h"
#import "CKDPQueryRetrieveRequest.h"
#import "CKDPRecordDeleteRequest.h"
#import "CKDPRecordMoveRequest.h"
#import "CKDPRecordResolveTokenRequest.h"
#import "CKDPRecordRetrieveChangesRequest.h"
#import "CKDPRecordRetrieveRequest.h"
#import "CKDPRecordRetrieveVersionsRequest.h"
#import "CKDPRecordSaveRequest.h"
#import "CKDPSetBadgeCountRequest.h"
#import "CKDPShareAcceptRequest.h"
#import "CKDPShareDeclineRequest.h"
#import "CKDPShareVettingInitiateRequest.h"
#import "CKDPSubscriptionCreateRequest.h"
#import "CKDPSubscriptionDeleteRequest.h"
#import "CKDPSubscriptionRetrieveRequest.h"
#import "CKDPTokenRegistrationRequest.h"
#import "CKDPTokenUnregistrationRequest.h"
#import "CKDPUpdateMissingAssetStatusRequest.h"
#import "CKDPUserAvailableQuotaRequest.h"
#import "CKDPUserPrivacySettingsBatchLookupRequest.h"
#import "CKDPUserPrivacySettingsResetRequest.h"
#import "CKDPUserPrivacySettingsRetrieveRequest.h"
#import "CKDPUserPrivacySettingsUpdateRequest.h"
#import "CKDPUserQueryRequest.h"
#import "CKDPUserRetrieveRequest.h"
#import "CKDPWebAuthTokenRetrieveRequest.h"
#import "CKDPZoneDeleteRequest.h"
#import "CKDPZoneRetrieveChangesRequest.h"
#import "CKDPZoneRetrieveRequest.h"
#import "CKDPZoneSaveRequest.h"
#import "CKDPRequestOperationHeader.h"
#import "CKDPOperation.h"

@interface CKDPRequestOperation : PBCodable <NSCopying>

 {
    CKDPAnonymousShareAddRequest *_anonymousShareAddRequest;
    CKDPAnonymousShareRemoveRequest *_anonymousShareRemoveRequest;
    CKDPArchiveRecordsRequest *_archiveRecordsRequest;
    CKDPAssetUploadTokenRetrieveRequest *_assetUploadTokenRetrieveRequest;
    CKDPBundlesForContainerRequest *_bundlesForContainerRequest;
    CKDPDeleteContainerRequest *_deleteContainerRequest;
    CKDPFetchArchivedRecordsRequest *_fetchArchivedRecordsRequest;
    CKDPCodeFunctionInvokeRequest *_functionInvokeRequest;
    CKDPMarkAssetBrokenRequest *_markAssetBrokenRequest;
    CKDPMergeableDeltaMetadataRetrieveRequest *_mergeableDeltaMetadataRetrieveRequest;
    CKDPMergeableDeltaReplaceRequest *_mergeableDeltaReplaceRequest;
    CKDPMergeableDeltaRetrieveRequest *_mergeableDeltaRetrieveRequest;
    CKDPMergeableDeltaSaveRequest *_mergeableDeltaSaveRequest;
    CKDPNotificationMarkReadRequest *_notificationMarkReadRequest;
    CKDPNotificationSyncRequest *_notificationSyncRequest;
    CKDPQueryRetrieveRequest *_queryRetrieveRequest;
    CKDPRecordDeleteRequest *_recordDeleteRequest;
    CKDPRecordMoveRequest *_recordMoveRequest;
    CKDPRecordResolveTokenRequest *_recordResolveTokenRequest;
    CKDPRecordRetrieveChangesRequest *_recordRetrieveChangesRequest;
    CKDPRecordRetrieveRequest *_recordRetrieveRequest;
    CKDPRecordRetrieveVersionsRequest *_recordRetrieveVersionsRequest;
    CKDPRecordSaveRequest *_recordSaveRequest;
    CKDPSetBadgeCountRequest *_setBadgeCountRequest;
    CKDPShareAcceptRequest *_shareAcceptRequest;
    CKDPShareDeclineRequest *_shareDeclineRequest;
    CKDPShareVettingInitiateRequest *_shareVettingInitiateRequest;
    CKDPSubscriptionCreateRequest *_subscriptionCreateRequest;
    CKDPSubscriptionDeleteRequest *_subscriptionDeleteRequest;
    CKDPSubscriptionRetrieveRequest *_subscriptionRetrieveRequest;
    CKDPTokenRegistrationRequest *_tokenRegistrationRequest;
    CKDPTokenUnregistrationRequest *_tokenUnregistrationRequest;
    CKDPUpdateMissingAssetStatusRequest *_updateMissingAssetStatusRequest;
    CKDPUserAvailableQuotaRequest *_userAvailableQuotaRequest;
    CKDPUserPrivacySettingsBatchLookupRequest *_userPrivacySettingsBatchLookupRequest;
    CKDPUserPrivacySettingsResetRequest *_userPrivacySettingsResetRequest;
    CKDPUserPrivacySettingsRetrieveRequest *_userPrivacySettingsRetrieveRequest;
    CKDPUserPrivacySettingsUpdateRequest *_userPrivacySettingsUpdateRequest;
    CKDPUserQueryRequest *_userQueryRequest;
    CKDPUserRetrieveRequest *_userRetrieveRequest;
    CKDPWebAuthTokenRetrieveRequest *_webAuthTokenRetrieveRequest;
    CKDPZoneDeleteRequest *_zoneDeleteRequest;
    CKDPZoneRetrieveChangesRequest *_zoneRetrieveChangesRequest;
    CKDPZoneRetrieveRequest *_zoneRetrieveRequest;
    CKDPZoneSaveRequest *_zoneSaveRequest;
}


@property (retain, nonatomic) CKDPAnonymousShareAddRequest *anonymousShareAddRequest;
@property (retain, nonatomic) CKDPAnonymousShareRemoveRequest *anonymousShareRemoveRequest;
@property (retain, nonatomic) CKDPArchiveRecordsRequest *archiveRecordsRequest;
@property (retain, nonatomic) CKDPAssetUploadTokenRetrieveRequest *assetUploadTokenRetrieveRequest;
@property (retain, nonatomic) CKDPBundlesForContainerRequest *bundlesForContainerRequest;
@property (retain, nonatomic) CKDPDeleteContainerRequest *deleteContainerRequest;
@property (retain, nonatomic) CKDPFetchArchivedRecordsRequest *fetchArchivedRecordsRequest;
@property (retain, nonatomic) CKDPCodeFunctionInvokeRequest *functionInvokeRequest;
@property (readonly, nonatomic) BOOL hasAnonymousShareAddRequest;
@property (readonly, nonatomic) BOOL hasAnonymousShareRemoveRequest;
@property (readonly, nonatomic) BOOL hasArchiveRecordsRequest;
@property (readonly, nonatomic) BOOL hasAssetUploadTokenRetrieveRequest;
@property (readonly, nonatomic) BOOL hasBundlesForContainerRequest;
@property (readonly, nonatomic) BOOL hasDeleteContainerRequest;
@property (readonly, nonatomic) BOOL hasFetchArchivedRecordsRequest;
@property (readonly, nonatomic) BOOL hasFunctionInvokeRequest;
@property (readonly, nonatomic) BOOL hasHeader;
@property (readonly, nonatomic) BOOL hasMarkAssetBrokenRequest;
@property (readonly, nonatomic) BOOL hasMergeableDeltaMetadataRetrieveRequest;
@property (readonly, nonatomic) BOOL hasMergeableDeltaReplaceRequest;
@property (readonly, nonatomic) BOOL hasMergeableDeltaRetrieveRequest;
@property (readonly, nonatomic) BOOL hasMergeableDeltaSaveRequest;
@property (readonly, nonatomic) BOOL hasNotificationMarkReadRequest;
@property (readonly, nonatomic) BOOL hasNotificationSyncRequest;
@property (readonly, nonatomic) BOOL hasQueryRetrieveRequest;
@property (readonly, nonatomic) BOOL hasRecordDeleteRequest;
@property (readonly, nonatomic) BOOL hasRecordMoveRequest;
@property (readonly, nonatomic) BOOL hasRecordResolveTokenRequest;
@property (readonly, nonatomic) BOOL hasRecordRetrieveChangesRequest;
@property (readonly, nonatomic) BOOL hasRecordRetrieveRequest;
@property (readonly, nonatomic) BOOL hasRecordRetrieveVersionsRequest;
@property (readonly, nonatomic) BOOL hasRecordSaveRequest;
@property (readonly, nonatomic) BOOL hasRequest;
@property (readonly, nonatomic) BOOL hasSetBadgeCountRequest;
@property (readonly, nonatomic) BOOL hasShareAcceptRequest;
@property (readonly, nonatomic) BOOL hasShareDeclineRequest;
@property (readonly, nonatomic) BOOL hasShareVettingInitiateRequest;
@property (readonly, nonatomic) BOOL hasSubscriptionCreateRequest;
@property (readonly, nonatomic) BOOL hasSubscriptionDeleteRequest;
@property (readonly, nonatomic) BOOL hasSubscriptionRetrieveRequest;
@property (readonly, nonatomic) BOOL hasTokenRegistrationRequest;
@property (readonly, nonatomic) BOOL hasTokenUnregistrationRequest;
@property (readonly, nonatomic) BOOL hasUpdateMissingAssetStatusRequest;
@property (readonly, nonatomic) BOOL hasUserAvailableQuotaRequest;
@property (readonly, nonatomic) BOOL hasUserPrivacySettingsBatchLookupRequest;
@property (readonly, nonatomic) BOOL hasUserPrivacySettingsResetRequest;
@property (readonly, nonatomic) BOOL hasUserPrivacySettingsRetrieveRequest;
@property (readonly, nonatomic) BOOL hasUserPrivacySettingsUpdateRequest;
@property (readonly, nonatomic) BOOL hasUserQueryRequest;
@property (readonly, nonatomic) BOOL hasUserRetrieveRequest;
@property (readonly, nonatomic) BOOL hasWebAuthTokenRetrieveRequest;
@property (readonly, nonatomic) BOOL hasZoneDeleteRequest;
@property (readonly, nonatomic) BOOL hasZoneRetrieveChangesRequest;
@property (readonly, nonatomic) BOOL hasZoneRetrieveRequest;
@property (readonly, nonatomic) BOOL hasZoneSaveRequest;
@property (retain, nonatomic) CKDPRequestOperationHeader *header; // ivar: _header
@property (retain, nonatomic) CKDPMarkAssetBrokenRequest *markAssetBrokenRequest;
@property (retain, nonatomic) CKDPMergeableDeltaMetadataRetrieveRequest *mergeableDeltaMetadataRetrieveRequest;
@property (retain, nonatomic) CKDPMergeableDeltaReplaceRequest *mergeableDeltaReplaceRequest;
@property (retain, nonatomic) CKDPMergeableDeltaRetrieveRequest *mergeableDeltaRetrieveRequest;
@property (retain, nonatomic) CKDPMergeableDeltaSaveRequest *mergeableDeltaSaveRequest;
@property (retain, nonatomic) CKDPNotificationMarkReadRequest *notificationMarkReadRequest;
@property (retain, nonatomic) CKDPNotificationSyncRequest *notificationSyncRequest;
@property (retain, nonatomic) CKDPQueryRetrieveRequest *queryRetrieveRequest;
@property (retain, nonatomic) CKDPRecordDeleteRequest *recordDeleteRequest;
@property (retain, nonatomic) CKDPRecordMoveRequest *recordMoveRequest;
@property (retain, nonatomic) CKDPRecordResolveTokenRequest *recordResolveTokenRequest;
@property (retain, nonatomic) CKDPRecordRetrieveChangesRequest *recordRetrieveChangesRequest;
@property (retain, nonatomic) CKDPRecordRetrieveRequest *recordRetrieveRequest;
@property (retain, nonatomic) CKDPRecordRetrieveVersionsRequest *recordRetrieveVersionsRequest;
@property (retain, nonatomic) CKDPRecordSaveRequest *recordSaveRequest;
@property (retain, nonatomic) CKDPOperation *request; // ivar: _request
@property (retain, nonatomic) CKDPSetBadgeCountRequest *setBadgeCountRequest;
@property (retain, nonatomic) CKDPShareAcceptRequest *shareAcceptRequest;
@property (retain, nonatomic) CKDPShareDeclineRequest *shareDeclineRequest;
@property (retain, nonatomic) CKDPShareVettingInitiateRequest *shareVettingInitiateRequest;
@property (retain, nonatomic) CKDPSubscriptionCreateRequest *subscriptionCreateRequest;
@property (retain, nonatomic) CKDPSubscriptionDeleteRequest *subscriptionDeleteRequest;
@property (retain, nonatomic) CKDPSubscriptionRetrieveRequest *subscriptionRetrieveRequest;
@property (retain, nonatomic) CKDPTokenRegistrationRequest *tokenRegistrationRequest;
@property (retain, nonatomic) CKDPTokenUnregistrationRequest *tokenUnregistrationRequest;
@property (retain, nonatomic) CKDPUpdateMissingAssetStatusRequest *updateMissingAssetStatusRequest;
@property (retain, nonatomic) CKDPUserAvailableQuotaRequest *userAvailableQuotaRequest;
@property (retain, nonatomic) CKDPUserPrivacySettingsBatchLookupRequest *userPrivacySettingsBatchLookupRequest;
@property (retain, nonatomic) CKDPUserPrivacySettingsResetRequest *userPrivacySettingsResetRequest;
@property (retain, nonatomic) CKDPUserPrivacySettingsRetrieveRequest *userPrivacySettingsRetrieveRequest;
@property (retain, nonatomic) CKDPUserPrivacySettingsUpdateRequest *userPrivacySettingsUpdateRequest;
@property (retain, nonatomic) CKDPUserQueryRequest *userQueryRequest;
@property (retain, nonatomic) CKDPUserRetrieveRequest *userRetrieveRequest;
@property (retain, nonatomic) CKDPWebAuthTokenRetrieveRequest *webAuthTokenRetrieveRequest;
@property (retain, nonatomic) CKDPZoneDeleteRequest *zoneDeleteRequest;
@property (retain, nonatomic) CKDPZoneRetrieveChangesRequest *zoneRetrieveChangesRequest;
@property (retain, nonatomic) CKDPZoneRetrieveRequest *zoneRetrieveRequest;
@property (retain, nonatomic) CKDPZoneSaveRequest *zoneSaveRequest;


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