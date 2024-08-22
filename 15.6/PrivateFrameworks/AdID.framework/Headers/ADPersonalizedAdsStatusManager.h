// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADPERSONALIZEDADSSTATUSMANAGER_H
#define ADPERSONALIZEDADSSTATUSMANAGER_H

@class ADSingleton, NSNumber;



@interface ADPersonalizedAdsStatusManager : ADSingleton

@property (copy, nonatomic) NSNumber *pendingJingleRequestToken; // ivar: _pendingJingleRequestToken
@property (nonatomic) BOOL sendingPersonalizedAdsToAdPlatforms; // ivar: _sendingPersonalizedAdsToAdPlatforms


+(id)sharedInstance;
-(void)sendPersonalizedAdsStatusToAdPlatforms:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif