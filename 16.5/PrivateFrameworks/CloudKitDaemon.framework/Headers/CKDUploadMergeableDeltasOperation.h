// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDUPLOADMERGEABLEDELTASOPERATION_H
#define CKDUPLOADMERGEABLEDELTASOPERATION_H

@class NSArray, NSMutableArray;
@protocol CKUploadMergeableDeltasOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDUploadMergeableDeltasOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKUploadMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) NSArray *deltas; // ivar: _deltas
@property (retain, nonatomic) NSMutableArray *pendingDeltaUploads; // ivar: _pendingDeltaUploads
@property (retain, nonatomic) NSMutableArray *pendingReplacementRequests; // ivar: _pendingReplacementRequests
@property (copy, nonatomic) id *replaceDeltasRequestCompletionBlock; // ivar: _replaceDeltasRequestCompletionBlock
@property (copy, nonatomic) NSArray *replacementRequests; // ivar: _replacementRequests
@property (nonatomic) NSUInteger state;
@property (copy, nonatomic) id *uploadDeltaCompletionBlock; // ivar: _uploadDeltaCompletionBlock


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)_encryptMergeableDeltas;
-(void)_uploadAndReplaceDeltas;
-(void)_uploadAndReplaceDeltas:(id)arg0 ;
-(void)handleDeltaUploaded:(id)arg0 result:(id)arg1 ;
-(void)handleReplaceDeltasRequest:(id)arg0 result:(id)arg1 ;
-(void)main;


@end


#endif