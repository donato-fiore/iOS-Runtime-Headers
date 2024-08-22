// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTMPCASSISTANTGENERICPLAYBACKQUEUE_H
#define MTMPCASSISTANTGENERICPLAYBACKQUEUE_H

@class MPCAssistantPlaybackQueue;



@interface MTMPCAssistantGenericPlaybackQueue : MPCAssistantPlaybackQueue

@property (nonatomic) *_MRSystemAppPlaybackQueue playbackQueueRef; // ivar: _playbackQueueRef


-(id)initWithContextID:(id)arg0 playbackQueueRef:(struct _MRSystemAppPlaybackQueue *)arg1 ;
-(id)initWithPlaybackQueueRef:(struct _MRSystemAppPlaybackQueue *)arg0 ;
-(struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;


@end


#endif