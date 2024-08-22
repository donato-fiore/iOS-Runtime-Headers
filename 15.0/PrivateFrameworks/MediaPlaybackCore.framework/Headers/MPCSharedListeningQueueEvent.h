// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCSHAREDLISTENINGQUEUEEVENT_H
#define MPCSHAREDLISTENINGQUEUEEVENT_H


#import <Foundation/Foundation.h>

#import "MPCSharedListeningQueueEventContentAdded.h"
#import "MPCSharedListeningQueueEventPlaybackModeChanged.h"
#import "MPCSharedListeningQueueEventContentPlayedNow.h"
#import "MPCSharedListeningQueueEventContentRemoved.h"
#import "MPCSharedListeningQueueEventContentReordered.h"
#import "MPCSharedListeningQueueEventContentReplaced.h"

@interface MPCSharedListeningQueueEvent : NSObject

@property (readonly, nonatomic) MPCSharedListeningQueueEventContentAdded *addedContent; // ivar: _addedContent
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) MPCSharedListeningQueueEventPlaybackModeChanged *playbackMode; // ivar: _playbackMode
@property (readonly, nonatomic) MPCSharedListeningQueueEventContentPlayedNow *playedNowContent; // ivar: _playedNowContent
@property (readonly, nonatomic) MPCSharedListeningQueueEventContentRemoved *removedContent; // ivar: _removedContent
@property (readonly, nonatomic) MPCSharedListeningQueueEventContentReordered *reorderedContent; // ivar: _reorderedContent
@property (readonly, nonatomic) MPCSharedListeningQueueEventContentReplaced *replacedContent; // ivar: _replacedContent


+(id)queueEventWithAddedContent:(id)arg0 ;
+(id)queueEventWithPlaybackModeChanged:(id)arg0 ;
+(id)queueEventWithPlayedNowContent:(id)arg0 ;
+(id)queueEventWithRemovedContent:(id)arg0 ;
+(id)queueEventWithReorderedContent:(id)arg0 ;
+(id)queueEventWithReplacedContent:(id)arg0 ;
-(id)description;


@end


#endif