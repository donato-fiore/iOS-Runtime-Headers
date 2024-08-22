// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCOFFLINEARTICLEFETCHOPERATION_H
#define FCOFFLINEARTICLEFETCHOPERATION_H

@class NSString;
@protocol FCOfflineFetchOperationType, FCContentContext, FCFlintHelper, OS_dispatch_queue;


#import "FCOperation.h"
#import "FCThreadSafeMutableArray.h"

@interface FCOfflineArticleFetchOperation : FCOperation <FCOfflineFetchOperationType>

 {
    id<FCContentContext> *_context;
    id<FCFlintHelper> *_flintHelper;
    NSString *_articleID;
    FCThreadSafeMutableArray *_resultInterestTokens;
}


@property (copy, nonatomic) id *archiveHandler; // ivar: archiveHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue; // ivar: archiveQueue
@property (nonatomic) BOOL cachedOnly; // ivar: cachedOnly
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: fetchCompletionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchCompletionQueue; // ivar: fetchCompletionQueue
@property (copy, nonatomic) id *progressHandler; // ivar: progressHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressQueue; // ivar: progressQueue


-(BOOL)validateOperation;
-(id)initWithContext:(id)arg0 flintHelper:(id)arg1 articleID:(id)arg2 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif