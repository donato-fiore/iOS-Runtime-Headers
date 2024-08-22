// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCOFFLINEISSUEFETCHOPERATION_H
#define FCOFFLINEISSUEFETCHOPERATION_H

@class NSString;
@protocol FCOfflineFetchOperationType, FCContentContext, FCFlintHelper, OS_dispatch_queue;


#import "FCOperation.h"
#import "FCThreadSafeMutableArray.h"
#import "FCCachePolicy.h"

@interface FCOfflineIssueFetchOperation : FCOperation <FCOfflineFetchOperationType>

 {
    id<FCContentContext> *_context;
    id<FCFlintHelper> *_flintHelper;
    NSString *_issueID;
    FCThreadSafeMutableArray *_resultInterestTokens;
    CGFloat _progress;
    FCCachePolicy *_issueRecordCachePolicy;
}


@property (copy, nonatomic) id *archiveHandler; // ivar: archiveHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue; // ivar: archiveQueue
@property (nonatomic) BOOL cachedOnly; // ivar: cachedOnly
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: fetchCompletionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchCompletionQueue; // ivar: fetchCompletionQueue
@property (copy, nonatomic) id *progressHandler; // ivar: progressHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressQueue; // ivar: progressQueue


-(BOOL)canRetryWithError:(id)arg0 retryAfter:(*id)arg1 ;
-(BOOL)validateOperation;
-(NSUInteger)maxRetries;
-(id)init;
-(id)initWithContext:(id)arg0 flintHelper:(id)arg1 issue:(id)arg2 ;
-(id)initWithContext:(id)arg0 flintHelper:(id)arg1 issueID:(id)arg2 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)resetForRetry;


@end


#endif