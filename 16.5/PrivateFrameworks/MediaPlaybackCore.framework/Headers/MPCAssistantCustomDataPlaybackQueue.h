// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCASSISTANTCUSTOMDATAPLAYBACKQUEUE_H
#define MPCASSISTANTCUSTOMDATAPLAYBACKQUEUE_H

@class NSData, NSString;


#import "MPCAssistantPlaybackQueue.h"

@interface MPCAssistantCustomDataPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) NSData *customData; // ivar: _customData
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


+(id)customDataQueueWithContextID:(id)arg0 identifier:(id)arg1 customData:(id)arg2 ;
-(id)description;
-(id)initWithContextID:(id)arg0 identifier:(id)arg1 customData:(id)arg2 ;
-(struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;


@end


#endif