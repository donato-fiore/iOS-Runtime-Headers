// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELRADIOPLAYBACKCONTEXT_H
#define MPCMODELRADIOPLAYBACKCONTEXT_H

@class MPPlaybackContext, NSString, MPModelRadioStation, NSURL;
@protocol MPCModelPlaybackRequestEnvironmentConsuming, MPCContinueListeningRadioQueueProviding;


#import "MPCModelRadioContentReference.h"
#import "MPCPlaybackRequestEnvironment.h"

@interface MPCModelRadioPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming>



@property (nonatomic) NSInteger continueListeningMaxQueueReferences; // ivar: _continueListeningMaxQueueReferences
@property (nonatomic) NSInteger continueListeningPrefetchThreshold; // ivar: _continueListeningPrefetchThreshold
@property (weak, nonatomic) NSObject<MPCContinueListeningRadioQueueProviding> *continueListeningQueueProvider; // ivar: _continueListeningQueueProvider
@property (nonatomic) BOOL continueListeningStation; // ivar: _continueListeningStation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) MPCModelRadioContentReference *nowPlayingContentReference; // ivar: _nowPlayingContentReference
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // ivar: _playbackRequestEnvironment
@property (retain, nonatomic) MPModelRadioStation *radioStation; // ivar: _radioStation
@property (copy, nonatomic) MPCModelRadioContentReference *seedContentReference; // ivar: _seedContentReference
@property (copy, nonatomic) NSString *stationPlaybackAuthorizationToken; // ivar: _stationPlaybackAuthorizationToken
@property (copy, nonatomic) NSURL *stationURL; // ivar: _stationURL
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
-(NSInteger)queueEndAction;
-(NSInteger)repeatType;
-(NSInteger)shuffleType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getSharedListeningTracklistWithCompletion:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)userIdentity;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getRemotePlaybackQueueRepresentationWithCompletion:(id)arg0 ;
-(void)setUserIdentity:(id)arg0 ;


@end


#endif