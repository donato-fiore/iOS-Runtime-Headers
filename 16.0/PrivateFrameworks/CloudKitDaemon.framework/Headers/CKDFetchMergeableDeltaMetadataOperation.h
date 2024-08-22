// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHMERGEABLEDELTAMETADATAOPERATION_H
#define CKDFETCHMERGEABLEDELTAMETADATAOPERATION_H

@class NSArray;
@protocol CKFetchMergeableDeltaMetadataOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDFetchMergeableDeltaMetadataOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKFetchMergeableDeltaMetadataOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSArray *mergeableValueIDs; // ivar: _mergeableValueIDs
@property (copy, nonatomic) id *metadataFetchedBlock; // ivar: _metadataFetchedBlock
@property (nonatomic) NSUInteger state;


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)fetchMetadata;
-(void)fetchMetadataRecursivelyForMergeableValueIDs:(id)arg0 continuationTokens:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleFetchedMetadatasForMergeableValueID:(id)arg0 metadatas:(id)arg1 result:(id)arg2 ;
-(void)main;


@end


#endif