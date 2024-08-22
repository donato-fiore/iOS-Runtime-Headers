// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCSHAREDLISTENINGPLAYBACKCONTEXT_H
#define MPCSHAREDLISTENINGPLAYBACKCONTEXT_H

@class MPPlaybackContext, NSString, ICLiveLinkIdentity, ICUserIdentity;
@protocol MPCPlaybackContextUserIdentityConsuming, MPCModelPlaybackRequestEnvironmentConsuming;


#import "MPCPlaybackRequestEnvironment.h"
#import "MPCPlaybackSharedListeningProperties.h"

@interface MPCSharedListeningPlaybackContext : MPPlaybackContext <MPCPlaybackContextUserIdentityConsuming, MPCModelPlaybackRequestEnvironmentConsuming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) ICLiveLinkIdentity *identity; // ivar: _identity
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // ivar: _playbackRequestEnvironment
@property (copy, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties; // ivar: _sharedListeningProperties
@property (readonly) Class superclass;
@property (copy, nonatomic) ICUserIdentity *userIdentity;


+(BOOL)supportsAutoPlay;
+(Class)queueFeederClass;
-(BOOL)isCompatibleWithReplacementContext:(id)arg0 incompatibleReason:(*id)arg1 ;
-(NSInteger)repeatType;
-(NSInteger)shuffleType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getSharedListeningTracklistWithCompletion:(id)arg0 ;
-(id)init;
-(void)getRemotePlaybackQueueRepresentationWithCompletion:(id)arg0 ;


@end


#endif