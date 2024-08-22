// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSETPLAYBACKQUEUECOMMANDEVENT_H
#define MPSETPLAYBACKQUEUECOMMANDEVENT_H

@class NSString;


#import "MPRemoteCommandEvent.h"
#import "MPRemotePlaybackQueue.h"

@interface MPSetPlaybackQueueCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) MPRemotePlaybackQueue *playbackQueue; // ivar: _playbackQueue
@property (readonly, nonatomic) NSString *sessionIdentifierOverride; // ivar: _sessionIdentifierOverride


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithCommand:(id)arg0 playbackQueue:(id)arg1 ;


@end


#endif