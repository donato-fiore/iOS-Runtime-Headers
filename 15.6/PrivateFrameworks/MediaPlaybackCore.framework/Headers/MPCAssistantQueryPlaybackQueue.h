// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCASSISTANTQUERYPLAYBACKQUEUE_H
#define MPCASSISTANTQUERYPLAYBACKQUEUE_H

@class MPMediaItem, MPMediaQuery;


#import "MPCAssistantPlaybackQueue.h"

@interface MPCAssistantQueryPlaybackQueue : MPCAssistantPlaybackQueue

@property (retain, nonatomic) MPMediaItem *firstItem; // ivar: _firstItem
@property (readonly, nonatomic) MPMediaQuery *query; // ivar: _query
@property (nonatomic) NSInteger shuffleType; // ivar: _shuffleType


+(id)queryQueueWithContextID:(id)arg0 query:(id)arg1 ;
-(id)description;
-(id)initWithContextID:(id)arg0 query:(id)arg1 ;
-(struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;


@end


#endif