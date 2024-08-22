// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCASSISTANTRADIOPLAYBACKQUEUE_H
#define MPCASSISTANTRADIOPLAYBACKQUEUE_H

@class NSString;


#import "MPCAssistantPlaybackQueue.h"

@interface MPCAssistantRadioPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) NSString *stationStringID; // ivar: _stationStringID


+(id)radioQueueWithContextID:(id)arg0 stationStringID:(id)arg1 ;
-(id)description;
-(id)initWithContextID:(id)arg0 stationStringID:(id)arg1 ;
-(struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;


@end


#endif