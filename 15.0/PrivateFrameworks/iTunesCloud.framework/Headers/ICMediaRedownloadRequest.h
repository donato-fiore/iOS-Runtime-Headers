// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMEDIAREDOWNLOADREQUEST_H
#define ICMEDIAREDOWNLOADREQUEST_H

@class NSDictionary, NSString;


#import "ICRequestOperation.h"
#import "ICMediaRedownloadResponse.h"
#import "ICStoreURLRequest.h"
#import "ICStoreRequestContext.h"

@interface ICMediaRedownloadRequest : ICRequestOperation {
    ICMediaRedownloadResponse *_redownloadResponse;
    ICStoreURLRequest *_storeURLRequest;
}


@property (nonatomic) BOOL includeKeybagSyncData; // ivar: _includeKeybagSyncData
@property (nonatomic) BOOL includeSubscriptionKeybagSyncData; // ivar: _includeSubscriptionKeybagSyncData
@property (nonatomic, getter=isPlaybackRequest) BOOL playbackRequest; // ivar: _playbackRequest
@property (copy, nonatomic) NSDictionary *redownloadParameters; // ivar: _redownloadParameters
@property (copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (copy, nonatomic) NSString *requestURLBagKey; // ivar: _requestURLBagKey
@property (nonatomic, getter=isStreamingRental) BOOL streamingRental; // ivar: _streamingRental
@property (nonatomic) BOOL usePrioritizedURLSession; // ivar: _usePrioritizedURLSession


-(id)init;
-(id)initWithRequestContext:(id)arg0 redownloadParameters:(id)arg1 ;
-(id)initWithRequestContext:(id)arg0 redownloadParametersString:(id)arg1 ;
-(void)_executeWithActiveICloudAccountProperties:(id)arg0 ;
-(void)cancel;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif