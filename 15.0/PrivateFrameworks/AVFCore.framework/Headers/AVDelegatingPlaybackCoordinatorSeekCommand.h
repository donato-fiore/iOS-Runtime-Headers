// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVDELEGATINGPLAYBACKCOORDINATORSEEKCOMMAND_H
#define AVDELEGATINGPLAYBACKCOORDINATORSEEKCOMMAND_H

@class NSString, NSDate;


#import "AVDelegatingPlaybackCoordinatorPlaybackControlCommand.h"
#import "AVDelegatingPlaybackCoordinator.h"
#import "AVCoordinatedPlaybackParticipant.h"

@interface AVDelegatingPlaybackCoordinatorSeekCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
    AVDelegatingPlaybackCoordinator *_coordinator;
    AVCoordinatedPlaybackParticipant *_originator;
    NSString *_expectedCurrentItemIdentifier;
    NSInteger _commandOrderIndex;
    BOOL _shouldPause;
}


@property (readonly, nonatomic) float anticipatedPlaybackRate; // ivar: _anticipatedPlaybackRate
@property (readonly, nonatomic) NSDate *completionDueDate; // ivar: _completionDueDate
@property (readonly, nonatomic) ? itemTime; // ivar: _itemTime
@property (readonly, nonatomic) BOOL shouldBufferInAnticipationOfPlayback; // ivar: _shouldBufferInAnticipationOfPlayback


-(id)expectedCurrentItemIdentifier;
-(id)init;
-(id)initWithCoordinator:(id)arg0 originator:(id)arg1 expectedCurrentItemIdentifier:(id)arg2 commandOrderIndex:(NSInteger)arg3 itemTime:(struct ? )arg4 shouldPause:(BOOL)arg5 shouldBufferInAnticipationOfPlayback:(BOOL)arg6 anticipatedPlaybackRate:(float)arg7 completionDueDate:(id)arg8 ;
-(id)originator;
-(void)dealloc;


@end


#endif