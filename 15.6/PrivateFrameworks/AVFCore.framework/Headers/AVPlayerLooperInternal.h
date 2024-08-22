// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERLOOPERINTERNAL_H
#define AVPLAYERLOOPERINTERNAL_H

@class NSMutableArray, NSError;
@protocol OS_dispatch_queue, AVCallbackCancellation;

#import <Foundation/Foundation.h>

#import "AVQueuePlayer.h"
#import "AVPlayerItem.h"
#import "AVWeakReference.h"

@interface AVPlayerLooperInternal : NSObject {
    AVQueuePlayer *loopingPlayer;
    AVPlayerItem *loopingItem;
    NSMutableArray *loopingItemCopies;
    ? loopRange;
    NSInteger loopCount;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSInteger playerOriginalActionAtItemEnd;
    ? forwardPlaybackStartTime;
    AVPlayerItem *lastEnqueuedLoopingItem;
    BOOL waitingForLastLoopingCopyToFinish;
    NSInteger status;
    NSError *error;
    id<AVCallbackCancellation> *playerCurrentItemKVOInvoker;
    NSMutableArray *loopingItemStatusKVOInvokers;
    AVWeakReference *weakReference;
    BOOL listeningForItemFailedToPlayToEndTime;
}






@end


#endif