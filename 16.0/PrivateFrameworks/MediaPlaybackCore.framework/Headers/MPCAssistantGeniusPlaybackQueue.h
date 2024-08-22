// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCASSISTANTGENIUSPLAYBACKQUEUE_H
#define MPCASSISTANTGENIUSPLAYBACKQUEUE_H

@class NSURL;


#import "MPCAssistantPlaybackQueue.h"

@interface MPCAssistantGeniusPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) NSURL *seedTrack; // ivar: _seedTrack


+(id)geniusQueueWithContextID:(id)arg0 seedTrack:(id)arg1 ;
-(id)description;
-(id)initWithContextID:(id)arg0 seedTrack:(id)arg1 ;
-(struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;


@end


#endif