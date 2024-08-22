// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTOREMODELREQUESTOPERATION_H
#define MPSTOREMODELREQUESTOPERATION_H

@class NSOperation;
@protocol OS_dispatch_queue, OS_dispatch_source;


#import "MPAsyncOperation.h"
#import "MPModelResponse.h"
#import "MPStoreModelRequest.h"

@interface MPStoreModelRequestOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSOperation *_childOperation;
    MPModelResponse *_response;
    CGFloat _startExecutingTimeStamp;
    NSObject<OS_dispatch_source> *_timeoutTimerSource;
}


@property (readonly, nonatomic) CGFloat remainingTimeInterval;
@property (copy, nonatomic) MPStoreModelRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(CGFloat)adjustTimeoutInterval:(CGFloat)arg0 ;
-(id)_URLLoadRequestWithRequest:(id)arg0 requestContext:(id)arg1 ;
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg0 error:(*id)arg1 ;
-(id)configurationForLoadingModelDataWithStoreURLBag:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_executeItemMetadataLoadForRequestedItemIdentifiers:(id)arg0 reason:(NSUInteger)arg1 requestContext:(id)arg2 ;
-(void)_executeURLLoadWithRequest:(id)arg0 storeURLBag:(id)arg1 requestContext:(id)arg2 ;
-(void)_executeURLLoadWithRequests:(id)arg0 storeURLBag:(id)arg1 requestContext:(id)arg2 ;
-(void)_finishWithResponse:(id)arg0 error:(id)arg1 ;
-(void)_handleTimeout;
-(void)_tearDownTimeoutTimerSource;
-(void)assertRunningInAccessQueue;
-(void)cancel;
-(void)dealloc;
-(void)dispatchAsync:(id)arg0 ;
-(void)dispatchSync:(id)arg0 ;
-(void)execute;
-(void)finishWithError:(id)arg0 ;
-(void)produceResponseWithLoadedOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif