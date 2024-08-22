// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFETCHMERGEABLEDELTASOPERATION_H
#define CKFETCHMERGEABLEDELTASOPERATION_H

@class NSArray;
@protocol CKFetchMergeableDeltasOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKFetchMergeableDeltasOperationInfo.h"

@interface CKFetchMergeableDeltasOperation : CKDatabaseOperation <CKFetchMergeableDeltasOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKFetchMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *deltasFetchedBlock; // ivar: _deltasFetchedBlock
@property (copy, nonatomic) id *fetchMergeableDeltasCompletionBlock; // ivar: _fetchMergeableDeltasCompletionBlock
@property (copy, nonatomic) NSArray *mergeableValueIDs; // ivar: _mergeableValueIDs
@property (readonly, nonatomic) CKFetchMergeableDeltasOperationInfo *operationInfo;


+(SEL)daemonInvocationSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)initWithMergeableValueIDs:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleFetchForMergeableValueID:(id)arg0 fetchedDeltas:(id)arg1 error:(id)arg2 ;


@end


#endif