// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMODIFYRECORDSOPERATION_H
#define CKMODIFYRECORDSOPERATION_H

@class NSDictionary, NSMutableDictionary, NSData, NSMutableArray, NSMutableSet, NSArray;
@protocol CKModifyRecordsOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKModifyRecordsOperationInfo.h"

@interface CKModifyRecordsOperation : CKDatabaseOperation <CKModifyRecordsOperationCallbacks>



@property (copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // ivar: _assetUUIDToExpectedProperties
@property (retain, nonatomic) NSMutableDictionary *assetsByRecordIDAndRecordKey; // ivar: _assetsByRecordIDAndRecordKey
@property (nonatomic) BOOL atomic; // ivar: _atomic
@property (copy, nonatomic) NSData *clientChangeTokenData; // ivar: _clientChangeTokenData
@property (readonly, nonatomic) NSObject<CKModifyRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // ivar: _conflictLosersToResolveByRecordID
@property (retain, nonatomic) NSMutableArray *deletedRecordIDs; // ivar: _deletedRecordIDs
@property (nonatomic) BOOL markAsParticipantNeedsNewInvitationToken; // ivar: _markAsParticipantNeedsNewInvitationToken
@property (copy, nonatomic) id *modifyRecordsCompletionBlock; // ivar: _modifyRecordsCompletionBlock
@property (readonly, nonatomic) CKModifyRecordsOperationInfo *operationInfo;
@property (copy, nonatomic) NSDictionary *packageUUIDToExpectedProperties; // ivar: _packageUUIDToExpectedProperties
@property (retain, nonatomic) NSMutableSet *packagesToDestroy; // ivar: _packagesToDestroy
@property (copy, nonatomic) id *perRecordCompletionBlock; // ivar: _perRecordCompletionBlock
@property (copy, nonatomic) id *perRecordDeleteBlock; // ivar: _perRecordDeleteBlock
@property (copy, nonatomic) id *perRecordProgressBlock; // ivar: _perRecordProgressBlock
@property (copy, nonatomic) id *perRecordSaveBlock; // ivar: _perRecordSaveBlock
@property (copy, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID; // ivar: _pluginFieldsForRecordDeletesByID
@property (retain, nonatomic) NSMutableDictionary *recordErrors; // ivar: _recordErrors
@property (copy, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // ivar: _recordIDsToDeleteToEtags
@property (retain, nonatomic) NSMutableDictionary *recordsByRecordIDs; // ivar: _recordsByRecordIDs
@property (copy, nonatomic) id *recordsInFlightBlock; // ivar: _recordsInFlightBlock
@property (copy, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave
@property (nonatomic) NSInteger savePolicy; // ivar: _savePolicy
@property (retain, nonatomic) NSMutableArray *savedRecords; // ivar: _savedRecords
@property (nonatomic) BOOL shouldOnlySaveAssetContent; // ivar: _shouldOnlySaveAssetContent
@property (nonatomic) BOOL shouldReportRecordsInFlight; // ivar: _shouldReportRecordsInFlight


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)claimPackagesInRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithRecordsToSave:(id)arg0 recordIDsToDelete:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_trackAssetsToUpload;
-(void)copyStreamingAssetServerFieldsFromServerRecord:(id)arg0 toRecord:(id)arg1 ;
-(void)destroyPackages:(id)arg0 ;
-(void)destroyPackagesInRecords:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleDeleteForRecordID:(id)arg0 error:(id)arg1 ;
-(void)handleRecordIDsInFlight:(id)arg0 reply:(id)arg1 ;
-(void)handleRecordModificationForRecordID:(id)arg0 didProgress:(CGFloat)arg1 ;
-(void)handleRecordUploadForRecordID:(id)arg0 recordKey:(id)arg1 arrayIndex:(NSInteger)arg2 signature:(id)arg3 size:(NSUInteger)arg4 paddedFileSize:(NSUInteger)arg5 uploaded:(BOOL)arg6 uploadReceipt:(id)arg7 uploadReceiptExpiration:(CGFloat)arg8 wrappedAssetKey:(id)arg9 clearAssetKey:(id)arg10 referenceSignature:(id)arg11 ;
-(void)handleSaveForRecordID:(id)arg0 etag:(id)arg1 creationDate:(id)arg2 modificationDate:(id)arg3 expirationDate:(id)arg4 serverRecord:(id)arg5 protectionData:(id)arg6 pcsKeyID:(id)arg7 allPCSKeyIDs:(id)arg8 zoneishKeyID:(id)arg9 error:(id)arg10 ;
-(void)performCKOperation;


@end


#endif