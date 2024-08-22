// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLIGHTWEIGHTMUSICSUBSCRIPTIONSTATUSREQUEST_H
#define ICLIGHTWEIGHTMUSICSUBSCRIPTIONSTATUSREQUEST_H



#import "ICRequestOperation.h"
#import "ICLightweightMusicSubscriptionStatusResponse.h"
#import "ICStoreRequestContext.h"

@interface ICLightweightMusicSubscriptionStatusRequest : ICRequestOperation {
    ICLightweightMusicSubscriptionStatusResponse *_response;
}


@property (copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext


-(id)initWithRequestContext:(id)arg0 ;
-(void)_finishWithExtendedSubscriptionStatusResponse:(id)arg0 error:(id)arg1 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif