// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKREPLACEMERGEABLEDELTASOPERATION_H
#define CKREPLACEMERGEABLEDELTASOPERATION_H

@class NSMutableDictionary, NSArray;
@protocol CKReplaceMergeableDeltasOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKReplaceMergeableDeltasOperationInfo.h"

@interface CKReplaceMergeableDeltasOperation : CKDatabaseOperation <CKReplaceMergeableDeltasOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKReplaceMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, nonatomic) CKReplaceMergeableDeltasOperationInfo *operationInfo;
@property (copy, nonatomic) id *perReplacementBlock; // ivar: _perReplacementBlock
@property (retain, nonatomic) NSMutableDictionary *perValueErrors; // ivar: _perValueErrors
@property (copy, nonatomic) NSArray *replaceDeltasRequests; // ivar: _replaceDeltasRequests
@property (copy, nonatomic) id *replaceMergeableDeltasCompletionBlock; // ivar: _replaceMergeableDeltasCompletionBlock


-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)initWithReplaceDeltasRequests:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleCompletedReplaceDeltasRequest:(id)arg0 error:(id)arg1 ;
-(void)performCKOperation;


@end


#endif