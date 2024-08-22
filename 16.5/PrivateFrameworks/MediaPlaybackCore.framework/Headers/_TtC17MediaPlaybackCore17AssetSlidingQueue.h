// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE17ASSETSLIDINGQUEUE_H
#define _TTC17MEDIAPLAYBACKCORE17ASSETSLIDINGQUEUE_H

@class SwiftObject;



@interface _TtC17MediaPlaybackCore17AssetSlidingQueue : SwiftObject {
    ? dataSource;
    ? delegate;
    ? reporter;
    ? assetProducer;
    ? sessionID;
    ? queueCompletions;
    ? queueStartContentItemID;
    ? contentItemIDs;
    ? nowPlayingIndex;
    ? didReachEndOfQueue;
    ? batchNumber;
    ? queueReloadCount;
    ? reloadingItemsReentranceCount;
    ? positions;
    ? maximumPlayerQueueLength;
    ? assetLoadPrevention;
    ? batchedReloadsParams;
    ? batchedReloads;
    ? waiters;
    ? isInvalidated;
}






@end


#endif