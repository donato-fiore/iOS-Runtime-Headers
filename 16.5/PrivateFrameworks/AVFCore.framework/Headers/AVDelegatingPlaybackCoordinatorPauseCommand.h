// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVDELEGATINGPLAYBACKCOORDINATORPAUSECOMMAND_H
#define AVDELEGATINGPLAYBACKCOORDINATORPAUSECOMMAND_H

@class NSString;


#import "AVDelegatingPlaybackCoordinatorPlaybackControlCommand.h"
#import "AVDelegatingPlaybackCoordinator.h"
#import "AVCoordinatedPlaybackParticipant.h"

@interface AVDelegatingPlaybackCoordinatorPauseCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
    AVDelegatingPlaybackCoordinator *_coordinator;
    AVCoordinatedPlaybackParticipant *_originator;
    NSString *_expectedCurrentItemIdentifier;
    NSInteger _commandOrderIndex;
}


@property (readonly, nonatomic) float anticipatedPlaybackRate; // ivar: _anticipatedPlaybackRate
@property (readonly, nonatomic) BOOL shouldBufferInAnticipationOfPlayback; // ivar: _shouldBufferInAnticipationOfPlayback


-(id)expectedCurrentItemIdentifier;
-(id)init;
-(id)initWithCoordinator:(id)arg0 originator:(id)arg1 expectedCurrentItemIdentifier:(id)arg2 commandOrderIndex:(NSInteger)arg3 shouldBufferInAnticipationOfPlayback:(BOOL)arg4 anticipatedPlaybackRate:(float)arg5 ;
-(id)originator;
-(void)dealloc;


@end


#endif