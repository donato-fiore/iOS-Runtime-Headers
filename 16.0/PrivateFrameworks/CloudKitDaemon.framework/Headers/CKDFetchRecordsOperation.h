// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHRECORDSOPERATION_H
#define CKDFETCHRECORDSOPERATION_H

@class NSSet, NSDictionary, NSMutableDictionary, NSMapTable, NSArray, NSMutableArray;
@protocol CKFetchRecordsOperationCallbacks, OS_dispatch_group;


#import "CKDDatabaseOperation.h"
#import "CKDDecryptRecordsOperation.h"

@interface CKDFetchRecordsOperation : CKDDatabaseOperation {
    CKDDecryptRecordsOperation *_decryptOperation;
}


@property (nonatomic) NSUInteger URLOptions; // ivar: _URLOptions
@property (retain, nonatomic) NSSet *assetFieldNamesToPublishURLs; // ivar: _assetFieldNamesToPublishURLs
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // ivar: _assetTransferOptionsByRecordTypeAndKey
@property (retain, nonatomic) NSMutableDictionary *cachedRecords; // ivar: _cachedRecords
@property (retain, nonatomic) NSObject<CKFetchRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSSet *desiredKeySet; // ivar: _desiredKeySet
@property (retain, nonatomic) NSDictionary *desiredPackageFileIndices; // ivar: _desiredPackageFileIndices
@property (retain, nonatomic) NSMapTable *downloadTasksByRecordID; // ivar: _downloadTasksByRecordID
@property (retain, nonatomic) NSMutableDictionary *errorsByRecordID; // ivar: _errorsByRecordID
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // ivar: _fetchRecordsGroup
@property (nonatomic) BOOL forcePCSDecrypt; // ivar: _forcePCSDecrypt
@property (retain, nonatomic) NSArray *fullRecordsToFetch; // ivar: _fullRecordsToFetch
@property (readonly, nonatomic) BOOL hasRecordDecryptOperation;
@property (retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname; // ivar: _keyOrErrorForHostname
@property (retain, nonatomic) NSMutableDictionary *mergeableValueDownloadTasks; // ivar: _mergeableValueDownloadTasks
@property (readonly, nonatomic) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (copy, nonatomic) id *recordFetchCommandBlock; // ivar: _recordFetchCommandBlock
@property (copy, nonatomic) id *recordFetchCompletionBlock; // ivar: _recordFetchCompletionBlock
@property (copy, nonatomic) id *recordFetchProgressBlock; // ivar: _recordFetchProgressBlock
@property (retain, nonatomic) NSDictionary *recordIDsToETags; // ivar: _recordIDsToETags
@property (retain, nonatomic) NSArray *recordIDsToFetch; // ivar: _recordIDsToFetch
@property (retain, nonatomic) NSMutableArray *recordIDsToRefetch; // ivar: _recordIDsToRefetch
@property (retain, nonatomic) NSDictionary *recordIDsToVersionETags; // ivar: _recordIDsToVersionETags
@property (nonatomic) NSUInteger requestedTTL; // ivar: _requestedTTL
@property (retain, nonatomic) NSMutableDictionary *shareRecordsToUpdateByRecordID; // ivar: _shareRecordsToUpdateByRecordID
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // ivar: _shouldFetchAssetContentInMemory
@property (nonatomic) BOOL shouldFetchMergeableValues; // ivar: _shouldFetchMergeableValues
@property (nonatomic) BOOL shouldRollSharePCSOnFetch; // ivar: _shouldRollSharePCSOnFetch
@property (nonatomic) BOOL shouldUpdateTimestampsForFetchedMergeableValues; // ivar: _shouldUpdateTimestampsForFetchedMergeableValues
@property (nonatomic) BOOL skipDecryption; // ivar: _skipDecryption
@property (nonatomic) NSUInteger state;
@property (nonatomic) BOOL useCachedEtags; // ivar: _useCachedEtags
@property (nonatomic) BOOL useRecordCache; // ivar: _useRecordCache
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // ivar: _webSharingIdentityDataByRecordID


-(BOOL)makeStateTransition;
-(BOOL)supportsClearAssetEncryption;
-(id)activityCreate;
-(id)desiredIndexedListKeys;
-(id)errorForRecordID:(id)arg0 ;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(id)relevantZoneIDs;
-(int)_prepareAsset:(id)arg0 record:(id)arg1 recordKey:(id)arg2 assetTransferOptions:(id)arg3 ;
-(int)operationType;
-(void)_addAssetDownloadTaskForRecord:(id)arg0 completionBlock:(id)arg1 ;
-(void)_addDownloadTasksForRecord:(id)arg0 completionBlock:(id)arg1 ;
-(void)_addMergeableValueDownloadTasksForRecord:(id)arg0 completionBlock:(id)arg1 ;
-(void)_continueHandleFetchedRecord:(id)arg0 recordID:(id)arg1 ;
-(void)_decryptPropertiesIfNeededForRecord:(id)arg0 record:(id)arg1 ;
-(void)_decryptPropertiesOnRecord:(id)arg0 recordID:(id)arg1 ;
-(void)_didDownloadAssetsWithError:(id)arg0 ;
-(void)_downloadAssets;
-(void)_downloadMergeableValues;
-(void)_fetchCloudCerts;
-(void)_fetchPCSForMergeableValueDeltaRecord:(id)arg0 recordID:(id)arg1 ;
-(void)_findSpecialParticipantsOnShare:(id)arg0 identityDelegate:(id)arg1 ;
-(void)_finishAllDownloadTasksWithError:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleRecordFetch:(id)arg0 recordID:(id)arg1 etagMatched:(BOOL)arg2 responseCode:(id)arg3 ;
-(void)_handleSharePCSPrepForShare:(id)arg0 recordID:(id)arg1 ;
-(void)_reallyDecryptPropertiesOnRecord:(id)arg0 recordID:(id)arg1 ;
-(void)_saveUpdatedShareRecords;
-(void)fetchRecordsWithIDs:(id)arg0 andFullRecords:(id)arg1 ;
-(void)finishWithError:(id)arg0 ;
-(void)main;
-(void)setError:(id)arg0 forRecordID:(id)arg1 ;


@end


#endif