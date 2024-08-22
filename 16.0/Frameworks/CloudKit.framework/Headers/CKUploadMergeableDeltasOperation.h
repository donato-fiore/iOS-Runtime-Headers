// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKUPLOADMERGEABLEDELTASOPERATION_H
#define CKUPLOADMERGEABLEDELTASOPERATION_H

@class NSArray, NSMutableDictionary;
@protocol CKUploadMergeableDeltasOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKUploadMergeableDeltasOperationInfo.h"

@interface CKUploadMergeableDeltasOperation : CKDatabaseOperation <CKUploadMergeableDeltasOperationCallbacks>

 {
    NSArray *_deltas;
    NSArray *_replacementRequests;
    NSMutableDictionary *_perItemErrors;
}


@property (readonly, nonatomic) NSObject<CKUploadMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, nonatomic) CKUploadMergeableDeltasOperationInfo *operationInfo;
@property (copy, nonatomic) id *perDeltaCompletionBlock; // ivar: _perDeltaCompletionBlock
@property (copy, nonatomic) id *perReplacementCompletionBlock; // ivar: _perReplacementCompletionBlock
@property (copy, nonatomic) id *uploadDeltasCompletionBlock; // ivar: _uploadDeltasCompletionBlock


-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)initWithDeltas:(id)arg0 replacementRequests:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleReplacementRequest:(id)arg0 error:(id)arg1 ;
-(void)handleUploadForDeltaIdentifier:(id)arg0 error:(id)arg1 ;
-(void)performCKOperation;


@end


#endif