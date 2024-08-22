// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMODELSTOREPLAYBACKITEMSREQUESTOPERATION_H
#define MPCMODELSTOREPLAYBACKITEMSREQUESTOPERATION_H

@class MPAsyncOperation, NSProgress, NSOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue;


#import "MPCModelStorePlaybackItemsResponse.h"
#import "MPCModelStorePlaybackItemsRequest.h"

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation {
    NSProgress *_activeProgress;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPCModelStorePlaybackItemsResponse *_previousModelResponse;
    BOOL _hasReceivedFinalResponse;
    BOOL _hasCalledResponseHandler;
    NSMutableArray *_errors;
}


@property (readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request; // ivar: _request
@property (readonly, copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)_localStoreAdamIDToEquivalencySourceStoreAdamIDMap:(id)arg0 ;
-(id)initWithRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_executeWithUserIdentity:(id)arg0 useMediaAPILookup:(BOOL)arg1 ;
-(void)_handleItemMetadataBactchRequestCompletedWithAccumulator:(id)arg0 previousResponse:(id)arg1 userIdentity:(id)arg2 error:(id)arg3 isFinalResponse:(BOOL)arg4 ;
-(void)_importMediaAPICollectionItemMetadataResponse:(id)arg0 withError:(id)arg1 usingAccumulator:(id)arg2 userIdentity:(id)arg3 trustID:(id)arg4 previousResponse:(id)arg5 shouldBatchResultsWithPlaceholderObjects:(BOOL)arg6 ;
-(void)_runMediaAPIRequestToLoadMetadataWithAccumulator:(id)arg0 userIdentity:(id)arg1 previousResponse:(id)arg2 shouldBatchResultsWithPlaceholderObjects:(BOOL)arg3 ;
-(void)_runPersonalizationWithSectionCollection:(id)arg0 localEquivalencyMapping:(id)arg1 expirationDate:(id)arg2 userIdentity:(id)arg3 error:(id)arg4 isFinalResponse:(BOOL)arg5 isInvalidForPersonalization:(BOOL)arg6 networkingTime:(CGFloat)arg7 ;
-(void)_runStorePlatformRequestToLoadMetadataWithAccumulator:(id)arg0 userIdentity:(id)arg1 previousResponse:(id)arg2 shouldBatchResultsWithPlaceholderObjects:(BOOL)arg3 ;
-(void)_runSubscriptionStatusWithRequestContext:(id)arg0 completion:(id)arg1 ;
-(void)_validateUserIdentityForRequestWithCompletion:(id)arg0 ;
-(void)cancel;
-(void)execute;


@end


#endif