// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLINKLINKAVPLAYBACKCOORDINATORMEDIUM_H
#define ICLINKLINKAVPLAYBACKCOORDINATORMEDIUM_H

@class NSString, AVPlayerPlaybackCoordinator;
@protocol AVPlaybackCoordinationMediumDelegate;


#import "ICLiveLinkPlaybackCoordinatorMedium.h"

@interface ICLinkLinkAVPlaybackCoordinatorMedium : ICLiveLinkPlaybackCoordinatorMedium <AVPlaybackCoordinationMediumDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVPlayerPlaybackCoordinator *playbackCoordinator; // ivar: _playbackCoordinator
@property (readonly) Class superclass;


-(BOOL)isCoordinatorSuspended;
-(id)initWithPlaybackCoordinator:(id)arg0 liveLink:(id)arg1 ;
-(id)localParticipantUUIDForPlaybackCoordinator:(id)arg0 ;
-(void)_playbackCoordinatorDidIssueCommandToPlaybackObjectNotification:(id)arg0 ;
-(void)clearCoordinationMediumDelegate;
-(void)handleNewParticipantStateDictionary:(id)arg0 ;
-(void)handleNewTransportControlStateDictionary:(id)arg0 ;
-(void)playbackCoordinator:(id)arg0 broadcastLocalParticipantStateDictionary:(id)arg1 ;
-(void)playbackCoordinator:(id)arg0 broadcastTransportControlStateDictionary:(id)arg1 forItemWithIdentifier:(id)arg2 ;
-(void)playbackCoordinator:(id)arg0 reloadTransportControlStateForItemWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeParticipant:(id)arg0 ;


@end


#endif