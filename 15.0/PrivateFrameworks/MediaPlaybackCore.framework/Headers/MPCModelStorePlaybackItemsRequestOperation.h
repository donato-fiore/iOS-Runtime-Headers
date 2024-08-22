// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMODELSTOREPLAYBACKITEMSREQUESTOPERATION_H
#define MPCMODELSTOREPLAYBACKITEMSREQUESTOPERATION_H

@class MPAsyncOperation, NSProgress, NSOperationQueue;
@protocol OS_dispatch_queue;


#import "MPCModelStorePlaybackItemsRequest.h"

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation {
    NSProgress *_activeProgress;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_activeProgressQueue;
}


@property (readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request; // ivar: _request
@property (readonly, copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)initWithRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_executeWithUserIdentity:(id)arg0 ;
-(void)_validateUserIdentityForRequestWithCompletion:(id)arg0 ;
-(void)cancel;
-(void)execute;


@end


#endif