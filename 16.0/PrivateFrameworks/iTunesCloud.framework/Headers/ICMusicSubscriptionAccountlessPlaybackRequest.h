// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMUSICSUBSCRIPTIONACCOUNTLESSPLAYBACKREQUEST_H
#define ICMUSICSUBSCRIPTIONACCOUNTLESSPLAYBACKREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ICStoreRequestContext.h"

@interface ICMusicSubscriptionAccountlessPlaybackRequest : NSObject

@property (copy, nonatomic) NSString *assetSourceStorefrontID; // ivar: _assetSourceStorefrontID
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (readonly, nonatomic) NSInteger storeSubscriptionAdamID; // ivar: _storeSubscriptionAdamID


-(id)initWithRequestContext:(id)arg0 storeSubscriptionAdamID:(NSInteger)arg1 ;
-(id)performWithResponseHandler:(id)arg0 ;


@end


#endif