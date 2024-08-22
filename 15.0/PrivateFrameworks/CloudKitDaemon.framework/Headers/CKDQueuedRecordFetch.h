// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDQUEUEDRECORDFETCH_H
#define CKDQUEUEDRECORDFETCH_H



#import "CKDQueuedFetch.h"

@interface CKDQueuedRecordFetch : CKDQueuedFetch



-(void)addRequestForRecordID:(id)arg0 forOperation:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)createFetchOperationForItemIDs:(id)arg0 operationQueue:(id)arg1 operationConfigurationBlock:(id)arg2 ;


@end


#endif