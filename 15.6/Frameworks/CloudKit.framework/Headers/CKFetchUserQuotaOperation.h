// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKFETCHUSERQUOTAOPERATION_H
#define CKFETCHUSERQUOTAOPERATION_H

@protocol CKFetchUserQuotaOperationCallbacks;


#import "CKDatabaseOperation.h"

@interface CKFetchUserQuotaOperation : CKDatabaseOperation <CKFetchUserQuotaOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKFetchUserQuotaOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *fetchUserQuotaCompletionBlock; // ivar: _fetchUserQuotaCompletionBlock
@property (nonatomic) NSUInteger quotaAvailable; // ivar: _quotaAvailable


+(SEL)daemonCallbackCompletionSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)handleOperationDidCompleteWithQuotaAvailable:(NSUInteger)arg0 metrics:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif