// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUSICSUBSCRIPTIONPLAYBACKURLREQUEST_H
#define ICMUSICSUBSCRIPTIONPLAYBACKURLREQUEST_H

@class NSString;


#import "ICStoreURLRequest.h"

@interface ICMusicSubscriptionPlaybackURLRequest : ICStoreURLRequest

@property (copy, nonatomic) NSString *assetSourceStorefrontID; // ivar: _assetSourceStorefrontID
@property (copy, nonatomic) NSString *cloudUniversalLibraryID; // ivar: _cloudUniversalLibraryID
@property (nonatomic, getter=isDelegatedPlayback) BOOL delegatedPlayback; // ivar: _delegatedPlayback
@property (copy, nonatomic) NSString *playbackAuthorizationToken; // ivar: _playbackAuthorizationToken
@property (nonatomic) NSInteger requestType; // ivar: _requestType
@property (nonatomic) NSUInteger storeCloudID; // ivar: _storeCloudID
@property (nonatomic) NSInteger storePurchasedAdamID; // ivar: _storePurchasedAdamID
@property (nonatomic) NSInteger storeSubscriptionAdamID; // ivar: _storeSubscriptionAdamID


-(id)_actionType;
-(id)_signpostRequestInfo;
-(void)buildStoreURLRequestWithURLRequest:(id)arg0 builderProperties:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif