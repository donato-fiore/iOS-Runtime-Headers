// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMUSICSUBSCRIPTIONSTATUS_H
#define SHMUSICSUBSCRIPTIONSTATUS_H


#import <Foundation/Foundation.h>


@interface SHMusicSubscriptionStatus : NSObject

@property (readonly, nonatomic) NSInteger appleMusicSubscriptionStatus; // ivar: _appleMusicSubscriptionStatus
@property (readonly, nonatomic) BOOL hasActiveAppleMusicSubscription;
@property (readonly, nonatomic) NSInteger shazamMusicSubscriptionStatus; // ivar: _shazamMusicSubscriptionStatus


-(id)initWithSubscriptionStatus:(NSInteger)arg0 ;


@end


#endif