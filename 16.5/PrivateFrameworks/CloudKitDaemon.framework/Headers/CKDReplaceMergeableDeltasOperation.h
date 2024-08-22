// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDREPLACEMERGEABLEDELTASOPERATION_H
#define CKDREPLACEMERGEABLEDELTASOPERATION_H

@class NSArray;
@protocol CKReplaceMergeableDeltasOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDReplaceMergeableDeltasOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKReplaceMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *perReplacementCompletionBlock; // ivar: _perReplacementCompletionBlock
@property (retain, nonatomic) NSArray *replaceDeltasRequests; // ivar: _replaceDeltasRequests
@property (nonatomic) NSUInteger state;


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)_encryptMergeableDeltas;
-(void)_replaceMergeableDeltas;
-(void)handleReplaceDeltasRequest:(id)arg0 result:(id)arg1 ;
-(void)main;


@end


#endif