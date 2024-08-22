// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVDELEGATINGPLAYBACKCOORDINATORBUFFERINGCOMMAND_H
#define AVDELEGATINGPLAYBACKCOORDINATORBUFFERINGCOMMAND_H

@class NSString, NSDate;


#import "AVDelegatingPlaybackCoordinatorPlaybackControlCommand.h"
#import "AVDelegatingPlaybackCoordinator.h"
#import "AVCoordinatedPlaybackParticipant.h"

@interface AVDelegatingPlaybackCoordinatorBufferingCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
    AVDelegatingPlaybackCoordinator *_coordinator;
    AVCoordinatedPlaybackParticipant *_originator;
    NSString *_expectedCurrentItemIdentifier;
    NSInteger _commandOrderIndex;
}


@property (readonly, nonatomic) float anticipatedPlaybackRate; // ivar: _anticipatedPlaybackRate
@property (readonly, nonatomic) NSDate *completionDueDate; // ivar: _completionDueDate


-(id)expectedCurrentItemIdentifier;
-(id)init;
-(id)initWithCoordinator:(id)arg0 originator:(id)arg1 expectedCurrentItemIdentifier:(id)arg2 commandOrderIndex:(NSInteger)arg3 anticipatedPlaybackRate:(float)arg4 completionDueDate:(id)arg5 ;
-(id)originator;
-(void)dealloc;


@end


#endif