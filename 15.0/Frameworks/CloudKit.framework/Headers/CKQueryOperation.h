// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKQUERYOPERATION_H
#define CKQUERYOPERATION_H

@class NSDictionary, NSArray, NSMutableDictionary;
@protocol CKQueryOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKQueryCursor.h"
#import "CKQueryOperationInfo.h"
#import "CKQuery.h"
#import "CKRecordZoneID.h"

@interface CKQueryOperation : CKDatabaseOperation <CKQueryOperationCallbacks>



@property (copy, nonatomic) NSDictionary *assetTransferOptionsByKey; // ivar: _assetTransferOptionsByKey
@property (readonly, nonatomic) NSObject<CKQueryOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) CKQueryCursor *cursor; // ivar: _cursor
@property (copy, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (nonatomic) BOOL fetchAllResults; // ivar: _fetchAllResults
@property (readonly, nonatomic) CKQueryOperationInfo *operationInfo;
@property (copy, nonatomic) CKQuery *query; // ivar: _query
@property (copy, nonatomic) id *queryCompletionBlock; // ivar: _queryCompletionBlock
@property (copy, nonatomic) id *queryCursorFetchedBlock; // ivar: _queryCursorFetchedBlock
@property (retain, nonatomic) NSMutableDictionary *recordErrors; // ivar: _recordErrors
@property (copy, nonatomic) id *recordFetchedBlock; // ivar: _recordFetchedBlock
@property (copy, nonatomic) id *recordMatchedBlock; // ivar: _recordMatchedBlock
@property (copy, nonatomic) CKQueryCursor *resultsCursor; // ivar: _resultsCursor
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent
@property (copy, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


+(SEL)daemonCallbackCompletionSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithCursor:(id)arg0 ;
-(id)initWithQuery:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleOperationDidCompleteWithCursor:(id)arg0 metrics:(id)arg1 error:(id)arg2 ;
-(void)handleQueryDidFetchCursor:(id)arg0 reply:(id)arg1 ;
-(void)handleQueryDidFetchForRecordID:(id)arg0 record:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif