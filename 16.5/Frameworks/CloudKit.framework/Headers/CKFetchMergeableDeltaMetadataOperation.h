// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFETCHMERGEABLEDELTAMETADATAOPERATION_H
#define CKFETCHMERGEABLEDELTAMETADATAOPERATION_H

@class NSArray, NSMutableDictionary;
@protocol CKFetchMergeableDeltaMetadataOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKFetchMergeableDeltaMetadataOperationInfo.h"

@interface CKFetchMergeableDeltaMetadataOperation : CKDatabaseOperation <CKFetchMergeableDeltaMetadataOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKFetchMergeableDeltaMetadataOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *fetchMergeableDeltaMetadataCompletionBlock; // ivar: _fetchMergeableDeltaMetadataCompletionBlock
@property (copy, nonatomic) NSArray *mergeableValueIDs; // ivar: _mergeableValueIDs
@property (copy, nonatomic) id *metadataFetchedBlock; // ivar: _metadataFetchedBlock
@property (readonly, nonatomic) CKFetchMergeableDeltaMetadataOperationInfo *operationInfo;
@property (retain, nonatomic) NSMutableDictionary *perValueErrors; // ivar: _perValueErrors


+(SEL)daemonInvocationSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)initWithMergeableValueIDs:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleFetchForMergeableValueID:(id)arg0 metadatas:(id)arg1 error:(id)arg2 ;


@end


#endif