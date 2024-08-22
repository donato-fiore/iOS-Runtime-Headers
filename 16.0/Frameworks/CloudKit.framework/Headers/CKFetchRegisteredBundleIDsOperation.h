// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFETCHREGISTEREDBUNDLEIDSOPERATION_H
#define CKFETCHREGISTEREDBUNDLEIDSOPERATION_H

@class NSArray;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;


#import "CKOperation.h"

@interface CKFetchRegisteredBundleIDsOperation : CKOperation <CKFetchRegisteredBundleIDsOperationCallbacks>



@property (copy, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property (readonly, nonatomic) NSObject<CKFetchRegisteredBundleIDsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *fetchRegisteredBundleIDsCompletionBlock; // ivar: _fetchRegisteredBundleIDsCompletionBlock


+(SEL)daemonCallbackCompletionSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)handleOperationDidCompleteWithBundleIDs:(id)arg0 metrics:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif