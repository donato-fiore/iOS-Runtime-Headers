// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFETCHRECORDVERSIONSOPERATION_H
#define CKFETCHRECORDVERSIONSOPERATION_H

@class NSArray, NSString, NSMutableDictionary;
@protocol CKFetchRecordVersionsOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKFetchRecordVersionsOperationInfo.h"

@interface CKFetchRecordVersionsOperation : CKDatabaseOperation <CKFetchRecordVersionsOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKFetchRecordVersionsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (copy, nonatomic) id *fetchRecordVersionsCompletionBlock; // ivar: _fetchRecordVersionsCompletionBlock
@property (copy, nonatomic) id *fetchRecordVersionsProgressBlock; // ivar: _fetchRecordVersionsProgressBlock
@property (nonatomic) BOOL isDeleted; // ivar: _isDeleted
@property (copy, nonatomic) NSString *minimumVersionETag; // ivar: _minimumVersionETag
@property (readonly, nonatomic) CKFetchRecordVersionsOperationInfo *operationInfo;
@property (retain, nonatomic) NSMutableDictionary *recordErrors; // ivar: _recordErrors
@property (copy, nonatomic) NSArray *recordIDs; // ivar: _recordIDs
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithRecordIDs:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleFetchForRecordID:(id)arg0 isDeleted:(BOOL)arg1 versions:(id)arg2 error:(id)arg3 ;
-(void)performCKOperation;


@end


#endif