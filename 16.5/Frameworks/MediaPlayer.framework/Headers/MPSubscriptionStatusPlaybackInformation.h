// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSUBSCRIPTIONSTATUSPLAYBACKINFORMATION_H
#define MPSUBSCRIPTIONSTATUSPLAYBACKINFORMATION_H

@class ICMusicSubscriptionStatus;

#import <Foundation/Foundation.h>


@interface MPSubscriptionStatusPlaybackInformation : NSObject {
    ICMusicSubscriptionStatus *_subscriptionStatusObject;
}


@property (readonly, nonatomic, getter=isDefinitiveInformation) BOOL definitiveInformation; // ivar: _definitiveInformation
@property (readonly, nonatomic) BOOL hasPlaybackCapability; // ivar: _hasPlaybackCapability
@property (readonly, nonatomic) BOOL requiresCarrierManualVerification; // ivar: _requiresCarrierManualVerification
@property (readonly, nonatomic) BOOL shouldRequirePlaybackAuthorizationTokensForPlayback; // ivar: _shouldRequirePlaybackAuthorizationTokensForPlayback
@property (readonly, nonatomic) BOOL shouldUseAccountLessStreaming; // ivar: _shouldUseAccountLessStreaming
@property (readonly, nonatomic) BOOL shouldUseLease; // ivar: _shouldUseLease


-(id)description;
-(id)initWithICSubscriptionStatus:(id)arg0 ;


@end


#endif