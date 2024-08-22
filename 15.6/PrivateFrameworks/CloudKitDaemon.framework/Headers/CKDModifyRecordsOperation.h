// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDMODIFYRECORDSOPERATION_H
#define CKDMODIFYRECORDSOPERATION_H

@class NSDictionary, NSData, NSMapTable, NSMutableDictionary, NSArray, C2RequestOptions;
@protocol CKModifyRecordsOperationCallbacks, OS_dispatch_queue;


#import "CKDDatabaseOperation.h"
#import "CKDDecryptRecordsOperation.h"
#import "CKDRecordCache.h"
#import "CKDProtocolTranslator.h"

@interface CKDModifyRecordsOperation : CKDDatabaseOperation {
    CKDDecryptRecordsOperation *_decryptOperation;
}


@property (nonatomic) BOOL alwaysFetchPCSFromServer; // ivar: _alwaysFetchPCSFromServer
@property (retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // ivar: _assetUUIDToExpectedProperties
@property (nonatomic) BOOL atomic; // ivar: _atomic
@property (retain, nonatomic) CKDRecordCache *cache; // ivar: _cache
@property (copy, nonatomic) NSData *cachedUserBoundaryKeyData; // ivar: _cachedUserBoundaryKeyData
@property (nonatomic) BOOL canSetPreviousProtectionEtag; // ivar: _canSetPreviousProtectionEtag
@property (copy, nonatomic) NSData *clientChangeTokenData; // ivar: _clientChangeTokenData
@property (retain, nonatomic) NSObject<CKModifyRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // ivar: _conflictLosersToResolveByRecordID
@property (copy, nonatomic) id *deleteCompletionBlock; // ivar: _deleteCompletionBlock
@property (retain, nonatomic) NSMapTable *handlersByAsset; // ivar: _handlersByAsset
@property (retain, nonatomic) NSMapTable *handlersByAssetNeedingRecordFetch; // ivar: _handlersByAssetNeedingRecordFetch
@property (retain, nonatomic) NSDictionary *handlersByRecordID; // ivar: _handlersByRecordID
@property (readonly, nonatomic) BOOL hasDecryptOperation;
@property (nonatomic) BOOL haveOutstandingHandlers; // ivar: _haveOutstandingHandlers
@property (nonatomic) BOOL markAsParticipantNeedsNewInvitationToken; // ivar: _markAsParticipantNeedsNewInvitationToken
@property (retain, nonatomic) NSMutableDictionary *modifyHandlersByZoneID; // ivar: _modifyHandlersByZoneID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modifyRecordsQueue; // ivar: _modifyRecordsQueue
@property (nonatomic) BOOL originatingFromDaemon; // ivar: _originatingFromDaemon
@property (retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties; // ivar: _packageUUIDToExpectedProperties
@property (retain, nonatomic) NSDictionary *parentsByRecordID; // ivar: _parentsByRecordID
@property (retain, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID; // ivar: _pluginFieldsForRecordDeletesByID
@property (readonly, nonatomic) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (retain, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // ivar: _recordIDsToDeleteToEtags
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToSigningPCSIdentity; // ivar: _recordIDsToDeleteToSigningPCSIdentity
@property (copy, nonatomic) id *recordsInFlightBlock; // ivar: _recordsInFlightBlock
@property (retain, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave
@property (nonatomic) BOOL requestNeedsUserPublicKeys; // ivar: _requestNeedsUserPublicKeys
@property (nonatomic) BOOL retriedRecords; // ivar: _retriedRecords
@property (nonatomic) BOOL retryPCSFailures; // ivar: _retryPCSFailures
@property (nonatomic) int saveAttempts; // ivar: _saveAttempts
@property (copy, nonatomic) id *saveCompletionBlock; // ivar: _saveCompletionBlock
@property (nonatomic) NSInteger savePolicy; // ivar: _savePolicy
@property (copy, nonatomic) id *saveProgressBlock; // ivar: _saveProgressBlock
@property (nonatomic) BOOL shouldModifyRecordsInDatabase; // ivar: _shouldModifyRecordsInDatabase
@property (nonatomic) BOOL shouldOnlySaveAssetContent; // ivar: _shouldOnlySaveAssetContent
@property (nonatomic) BOOL shouldReportRecordsInFlight; // ivar: _shouldReportRecordsInFlight
@property (nonatomic) NSUInteger state;
@property (copy, nonatomic) C2RequestOptions *streamingAssetRequestOptions; // ivar: _streamingAssetRequestOptions
@property (retain, nonatomic) CKDProtocolTranslator *translator; // ivar: _translator
@property (nonatomic) BOOL trustProtectionData; // ivar: _trustProtectionData
@property (copy, nonatomic) id *uploadCompletionBlock; // ivar: _uploadCompletionBlock
@property (retain, nonatomic) NSArray *userPublicKeys; // ivar: _userPublicKeys


+(BOOL)_claimPackagesInRecord:(id)arg0 error:(*id)arg1 ;
+(NSInteger)isPredominatelyDownload;
-(BOOL)_hasHandlerInState:(NSUInteger)arg0 ;
-(BOOL)_needsSigningPCS;
-(BOOL)_prepareRecordsForSave;
-(BOOL)_shouldToposortInContainerID:(id)arg0 ;
-(BOOL)_topoSortRecords;
-(BOOL)isOperationType:(int)arg0 ;
-(BOOL)makeStateTransition;
-(BOOL)supportsClearAssetEncryption;
-(BOOL)validateAgainstLiveContainer:(id)arg0 error:(*id)arg1 ;
-(id)_createModifyRequestWithRecordsToSave:(id)arg0 recordsToDelete:(id)arg1 recordsToDeleteToEtags:(id)arg2 recordIDsToDeleteToSigningPCSIdentity:(id)arg3 handlersByRecordID:(id)arg4 ;
-(id)_prepareAssetsForUpload;
-(id)_topoSortRecordsForHandlers:(id)arg0 ;
-(id)activityCreate;
-(id)analyticsPayload;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(id)relevantZoneIDs;
-(id)requestedFieldsByRecordIDForRecords:(id)arg0 ;
-(int)operationType;
-(void)_applySideEffects;
-(void)_clearProtectionDataIfNotEntitled;
-(void)_continueRecordsModify;
-(void)_determineEnvironment;
-(void)_didCompleteRecordFetchOperation:(id)arg0 assetArrayByRecordID:(id)arg1 ;
-(void)_enumerateHandlersInState:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)_fetchAssetRecordsForRereferencing;
-(void)_fetchContainerScopedUserID;
-(void)_fetchRecordPCSData;
-(void)_fetchSharePCSData;
-(void)_fetchShareParticipants;
-(void)_fetchUserBoundaryKey;
-(void)_fetchUserPublicKeys;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleDecryptionFailure:(id)arg0 forRecordID:(id)arg1 ;
-(void)_handleRecordDeleted:(id)arg0 handler:(id)arg1 responseCode:(id)arg2 ;
-(void)_handleRecordSaved:(id)arg0 handler:(id)arg1 etag:(id)arg2 dateStatistics:(id)arg3 expirationDate:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 serverRecord:(id)arg8 ;
-(void)_markRecordHandlersAsUploaded;
-(void)_performCallbacksForAtomicZoneHandlers:(id)arg0 ;
-(void)_performCallbacksForNonAtomicZoneHandlers:(id)arg0 ;
-(void)_performHandlerCallbacks;
-(void)_prepareForUpload;
-(void)_prepareParentPCS;
-(void)_reallyHandleRecordSaved:(id)arg0 handler:(id)arg1 etag:(id)arg2 dateStatistics:(id)arg3 expirationDate:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 decryptedServerRecord:(id)arg8 ;
-(void)_reportRecordsInFlight;
-(void)_setBoundaryKeyOnAssetsToUpload:(id)arg0 ;
-(void)_uploadAssets;
-(void)_verifyRecordEncryption;
-(void)assetArrayByRecordID:(id)arg0 didFetchRecord:(id)arg1 recordID:(id)arg2 error:(id)arg3 ;
-(void)callbackWithMetadata:(id)arg0 error:(id)arg1 ;
-(void)deleteCallbackWithMetadata:(id)arg0 error:(id)arg1 ;
-(void)finishWithError:(id)arg0 ;
-(void)main;
-(void)saveCallbackWithMetadata:(id)arg0 error:(id)arg1 ;


@end


#endif