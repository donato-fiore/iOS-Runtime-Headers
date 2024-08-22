// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHMERGEABLEDELTASOPERATION_H
#define CKDFETCHMERGEABLEDELTASOPERATION_H

@class NSArray;
@protocol CKFetchMergeableDeltasOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDFetchMergeableDeltasOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKFetchMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *deltasFetchedBlock; // ivar: _deltasFetchedBlock
@property (retain, nonatomic) NSArray *mergeableValueIDs; // ivar: _mergeableValueIDs
@property (nonatomic) NSUInteger state;


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)fetchMergeableDeltas;
-(void)fetchMergeableDeltasRecursivelyForValueIDs:(id)arg0 continuationTokens:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleMergeableDeltasFetchedForValueID:(id)arg0 fetchedDeltas:(id)arg1 result:(id)arg2 ;
-(void)main;


@end


#endif