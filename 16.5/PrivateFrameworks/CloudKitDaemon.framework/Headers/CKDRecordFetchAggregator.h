// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDRECORDFETCHAGGREGATOR_H
#define CKDRECORDFETCHAGGREGATOR_H

@class NSDictionary, NSSet, NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;


#import "CKDDatabaseOperation.h"
#import "CKDRecordCache.h"
#import "CKDFetchRecordsOperation.h"

@interface CKDRecordFetchAggregator : CKDDatabaseOperation {
    CKDRecordCache *_recordCache;
}


@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // ivar: _assetTransferOptionsByRecordTypeAndKey
@property NSUInteger curFetchOrder; // ivar: _curFetchOrder
@property (weak, nonatomic) CKDFetchRecordsOperation *currentFetchOp; // ivar: _currentFetchOp
@property (retain, nonatomic) NSSet *desiredKeys; // ivar: _desiredKeys
@property (copy, nonatomic) id *fetchAggregatorCompletionBlock; // ivar: _fetchAggregatorCompletionBlock
@property (nonatomic) BOOL fetchAssetContents; // ivar: _fetchAssetContents
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // ivar: _fetchGroup
@property (retain, nonatomic) NSMutableDictionary *fetchInfosByOrder; // ivar: _fetchInfosByOrder
@property (nonatomic) BOOL fetchMergeableValues; // ivar: _fetchMergeableValues
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // ivar: _fetchQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *fetchSource; // ivar: _fetchSource
@property (nonatomic) BOOL forceDecryptionAttempt; // ivar: _forceDecryptionAttempt
@property NSUInteger highestReturnedOrder; // ivar: _highestReturnedOrder
@property (getter=isMarkedToFinishByParent) BOOL markedToFinishByParent; // ivar: _markedToFinishByParent
@property (nonatomic) BOOL preserveOrdering; // ivar: _preserveOrdering
@property (retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource; // ivar: _recordReadySource
@property BOOL started; // ivar: _started
@property (nonatomic) BOOL useRecordCache; // ivar: _useRecordCache


-(BOOL)supportsClearAssetEncryption;
-(id)CKPropertiesDescription;
-(id)_fetchRecord:(id)arg0 recordReadyHandle:(*BOOL)arg1 withRecordCompletion:(id)arg2 ;
-(id)activityCreate;
-(id)description;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)_addRecordFetchInfos:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_finishRecordFetchAggregator;
-(void)_flushFetchedRecordsToConsumerLocked;
-(void)_flushFetchedRecordsToConsumerNoOrderingLocked;
-(void)_flushFetchedRecordsToConsumerOrderedLocked;
-(void)_lockedSendFetchRequest;
-(void)_performCallbackForFetchInfoLocked:(id)arg0 ;
-(void)_recordFetchesAvailable;
-(void)dealloc;
-(void)fetchRecords:(id)arg0 withPerRecordCompletion:(id)arg1 ;
-(void)finishIfAppropriate;
-(void)main;


@end


#endif