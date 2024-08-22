// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVDELEGATINGPLAYBACKCOORDINATORPLAYCOMMAND_H
#define AVDELEGATINGPLAYBACKCOORDINATORPLAYCOMMAND_H

@class NSString;


#import "AVDelegatingPlaybackCoordinatorPlaybackControlCommand.h"
#import "AVDelegatingPlaybackCoordinator.h"
#import "AVCoordinatedPlaybackParticipant.h"

@interface AVDelegatingPlaybackCoordinatorPlayCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
    AVDelegatingPlaybackCoordinator *_coordinator;
    AVCoordinatedPlaybackParticipant *_originator;
    NSString *_expectedCurrentItemIdentifier;
    NSInteger _commandOrderIndex;
}


@property (readonly, nonatomic) ? hostClockTime; // ivar: _hostClockTime
@property (readonly, nonatomic) ? itemTime; // ivar: _itemTime
@property (readonly, nonatomic) float rate; // ivar: _rate


-(id)expectedCurrentItemIdentifier;
-(id)init;
-(id)initWithCoordinator:(id)arg0 originator:(id)arg1 expectedCurrentItemIdentifier:(id)arg2 commandOrderIndex:(NSInteger)arg3 rate:(float)arg4 itemTime:(struct ? )arg5 hostClockTime:(struct ? )arg6 ;
-(id)originator;
-(void)dealloc;


@end


#endif