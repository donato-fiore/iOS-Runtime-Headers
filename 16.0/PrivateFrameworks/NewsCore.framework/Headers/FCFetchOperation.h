// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFETCHOPERATION_H
#define FCFETCHOPERATION_H

@protocol OS_dispatch_queue;


#import "FCOperation.h"
#import "FCFetchOperationResult.h"

@interface FCFetchOperation : FCOperation

@property NSUInteger cachePolicy; // ivar: _cachePolicy
@property BOOL canSendFetchCompletionSynchronously; // ivar: _canSendFetchCompletionSynchronously
@property (copy) id *fetchCompletionBlock; // ivar: _fetchCompletionBlock
@property (retain) NSObject<OS_dispatch_queue> *fetchCompletionQueue; // ivar: _fetchCompletionQueue
@property CGFloat maximumCachedAge; // ivar: _maximumCachedAge
@property (readonly) FCFetchOperationResult *result; // ivar: _result
@property BOOL shouldFailOnMissingObjects; // ivar: _shouldFailOnMissingObjects


-(id)init;
-(void)cancel;
-(void)finishExecutingWithError:(id)arg0 ;
-(void)finishExecutingWithFetchedObject:(id)arg0 ;
-(void)finishExecutingWithResult:(id)arg0 ;
-(void)finishExecutingWithStatus:(NSUInteger)arg0 ;
-(void)finishFromEarlyCancellation;
-(void)operationDidFinishWithError:(id)arg0 ;
-(void)takeInputsFromFetchOperation:(id)arg0 ;


@end


#endif