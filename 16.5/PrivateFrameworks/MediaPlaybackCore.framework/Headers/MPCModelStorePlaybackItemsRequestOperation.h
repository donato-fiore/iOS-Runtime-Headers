// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELSTOREPLAYBACKITEMSREQUESTOPERATION_H
#define MPCMODELSTOREPLAYBACKITEMSREQUESTOPERATION_H

@class MPAsyncOperation, NSProgress, NSOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue;


#import "MPCModelStorePlaybackItemsResponse.h"
#import "MPCPlaybackAccount.h"
#import "MPCModelStorePlaybackItemsRequest.h"

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation {
    NSProgress *_activeProgress;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPCModelStorePlaybackItemsResponse *_previousModelResponse;
    BOOL _hasReceivedFinalResponse;
    BOOL _hasCalledResponseHandler;
    BOOL _requiresFollowupRequest;
    BOOL _useUniversalAccumulator;
    ? _requestOptions;
    MPCPlaybackAccount *_account;
    NSMutableArray *_errors;
}


@property (readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request; // ivar: _request
@property (readonly, copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)_localStoreAdamIDToEquivalencySourceStoreAdamIDMap:(id)arg0 ;
-(id)initWithRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleItemMetadataBatchRequestCompletedWithAccumulator:(id)arg0 previousResponse:(id)arg1 error:(id)arg2 isFinalResponse:(BOOL)arg3 ;
-(void)_importMediaAPICollectionItemMetadataResponse:(id)arg0 withError:(id)arg1 usingAccumulator:(id)arg2 trustID:(id)arg3 previousResponse:(id)arg4 ;
-(void)_runMediaAPIRequestToLoadMetadataWithAccumulator:(id)arg0 previousResponse:(id)arg1 ;
-(void)_runPersonalizationWithSectionCollection:(id)arg0 localEquivalencyMapping:(id)arg1 expirationDate:(id)arg2 error:(id)arg3 isFinalResponse:(BOOL)arg4 isInvalidForPersonalization:(BOOL)arg5 performanceMetrics:(id)arg6 ;
-(void)_runStorePlatformRequestToLoadMetadataWithAccumulator:(id)arg0 previousResponse:(id)arg1 ;
-(void)cancel;
-(void)execute;


@end


#endif