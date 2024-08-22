// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFETCHWEBAUTHTOKENOPERATION_H
#define CKFETCHWEBAUTHTOKENOPERATION_H

@class NSString;
@protocol CKFetchWebAuthTokenOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKFetchWebAuthTokenOperationInfo.h"

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation <CKFetchWebAuthTokenOperationCallbacks>



@property (copy, nonatomic) NSString *APIToken; // ivar: _APIToken
@property (readonly, nonatomic) NSObject<CKFetchWebAuthTokenOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *fetchWebAuthTokenCompletionBlock; // ivar: _fetchWebAuthTokenCompletionBlock
@property (readonly, nonatomic) CKFetchWebAuthTokenOperationInfo *operationInfo;
@property (copy, nonatomic) NSString *webAuthToken; // ivar: _webAuthToken


+(SEL)daemonCallbackCompletionSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithAPIToken:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleOperationDidCompleteWithWebAuthToken:(id)arg0 metrics:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif