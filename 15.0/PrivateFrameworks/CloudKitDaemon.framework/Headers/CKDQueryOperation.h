// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDQUERYOPERATION_H
#define CKDQUERYOPERATION_H

@class NSDictionary, CKQueryCursor, NSString, NSSet, CKQuery, NSMutableArray, CKRecordZoneID;
@protocol CKDOperationPipelining, OS_dispatch_queue, CKQueryOperationCallbacks, OS_dispatch_group;


#import "CKDDatabaseOperation.h"
#import "CKDRecordFetchAggregator.h"

@interface CKDQueryOperation : CKDDatabaseOperation <CKDOperationPipelining>



@property (retain, nonatomic) NSDictionary *assetTransferOptionsByKey; // ivar: _assetTransferOptionsByKey
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<CKQueryOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, nonatomic) CKQueryCursor *cursor; // ivar: _cursor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *desiredKeySet; // ivar: _desiredKeySet
@property (nonatomic) BOOL fetchAllResults; // ivar: _fetchAllResults
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // ivar: _fetchRecordsGroup
@property (nonatomic) BOOL hasCalledQueryCursorUpdatedBlock; // ivar: _hasCalledQueryCursorUpdatedBlock
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numRequestsSent; // ivar: _numRequestsSent
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (readonly, nonatomic) CKQuery *query; // ivar: _query
@property (copy, nonatomic) id *queryCursorUpdatedBlock; // ivar: _queryCursorUpdatedBlock
@property (copy, nonatomic) id *recordFetchCompletionBlock; // ivar: _recordFetchCompletionBlock
@property (retain, nonatomic) CKDRecordFetchAggregator *recordFetcher; // ivar: _recordFetcher
@property (retain, nonatomic) NSMutableArray *requestInfos; // ivar: _requestInfos
@property (retain, nonatomic) CKQueryCursor *resultsCursor; // ivar: _resultsCursor
@property (readonly, nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent
@property (readonly) Class superclass;
@property (retain, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


-(id)_wrapError:(id)arg0 format:(id)arg1 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)relevantZoneIDs;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleQueryRequestFinishedWithSchedulerInfo:(id)arg0 ;
-(void)_handleRecordResponses:(id)arg0 perRequestSchedulerInfo:(id)arg1 ;
-(void)_sendQueryRequestWithCursor:(id)arg0 previousRequestSchedulerInfo:(id)arg1 ;
-(void)main;


@end


#endif