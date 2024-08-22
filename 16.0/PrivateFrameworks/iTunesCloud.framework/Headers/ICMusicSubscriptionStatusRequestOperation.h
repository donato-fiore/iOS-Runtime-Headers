// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMUSICSUBSCRIPTIONSTATUSREQUESTOPERATION_H
#define ICMUSICSUBSCRIPTIONSTATUSREQUESTOPERATION_H



#import "ICAsyncOperation.h"
#import "ICMusicSubscriptionStatusRequest.h"

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation

@property (nonatomic) BOOL allowsFuseHeaderEnrichment; // ivar: _allowsFuseHeaderEnrichment
@property (readonly, copy, nonatomic) ICMusicSubscriptionStatusRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (nonatomic) BOOL shouldRequestLightweightStatus; // ivar: _shouldRequestLightweightStatus


-(BOOL)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)_cacheAccountEligibilityWithStatus:(id)arg0 requestContext:(id)arg1 ;
-(void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg0 subscriptionStatusURL:(id)arg1 allowsAuthentication:(BOOL)arg2 completion:(id)arg3 ;
-(void)execute;


@end


#endif