// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMODELRADIOPLAYBACKCONTEXT_H
#define MPCMODELRADIOPLAYBACKCONTEXT_H

@class MPPlaybackContext, NSString, NSNumber, MPModelRadioStation, NSURL, ICUserIdentity;
@protocol MPCPlaybackContextUserIdentityConsuming, MPCPlaybackContextPrivateListeningOverridable, MPCModelPlaybackRequestEnvironmentConsuming, MPCContinueListeningRadioQueueProviding;


#import "MPCModelRadioContentReference.h"
#import "MPCPlaybackRequestEnvironment.h"

@interface MPCModelRadioPlaybackContext : MPPlaybackContext <MPCPlaybackContextUserIdentityConsuming, MPCPlaybackContextPrivateListeningOverridable, MPCModelPlaybackRequestEnvironmentConsuming>



@property (nonatomic) NSInteger continueListeningMaxQueueReferences; // ivar: _continueListeningMaxQueueReferences
@property (nonatomic) NSInteger continueListeningPrefetchThreshold; // ivar: _continueListeningPrefetchThreshold
@property (weak, nonatomic) NSObject<MPCContinueListeningRadioQueueProviding> *continueListeningQueueProvider; // ivar: _continueListeningQueueProvider
@property (nonatomic) BOOL continueListeningStation; // ivar: _continueListeningStation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) MPCModelRadioContentReference *nowPlayingContentReference; // ivar: _nowPlayingContentReference
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // ivar: _playbackRequestEnvironment
@property (copy, nonatomic) NSNumber *privateListeningOverride;
@property (retain, nonatomic) MPModelRadioStation *radioStation; // ivar: _radioStation
@property (copy, nonatomic) MPCModelRadioContentReference *seedContentReference; // ivar: _seedContentReference
@property (copy, nonatomic) NSURL *stationURL; // ivar: _stationURL
@property (readonly) Class superclass;
@property (copy, nonatomic) ICUserIdentity *userIdentity;


+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
-(NSInteger)queueEndAction;
-(NSInteger)repeatType;
-(NSInteger)shuffleType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getSharedListeningTracklistWithCompletion:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getRemotePlaybackQueueRepresentationWithCompletion:(id)arg0 ;


@end


#endif