// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKADDFAVORITEREQUEST_H
#define WLKADDFAVORITEREQUEST_H

@class NSString;


#import "WLKRequest.h"
#import "WLKWatchListModificationResponse.h"

@interface WLKAddFavoriteRequest : WLKRequest {
    NSString *_channelID;
}


@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (readonly, copy, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly, nonatomic) WLKWatchListModificationResponse *response; // ivar: _response
@property (readonly, copy, nonatomic) NSString *statsID; // ivar: _statsID


-(id)initWithBundleID:(id)arg0 externalID:(id)arg1 ;
-(id)initWithCanonicalID:(id)arg0 ;
-(id)initWithStatsID:(id)arg0 ;
-(void)makeRequestWithCompletion:(id)arg0 ;


@end


#endif