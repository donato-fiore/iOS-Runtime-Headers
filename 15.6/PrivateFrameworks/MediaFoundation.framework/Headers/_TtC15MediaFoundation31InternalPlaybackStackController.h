// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15MEDIAFOUNDATION31INTERNALPLAYBACKSTACKCONTROLLER_H
#define _TTC15MEDIAFOUNDATION31INTERNALPLAYBACKSTACKCONTROLLER_H

@class SwiftObject, NSDictionary;
@protocol MFStateDumpable;



@interface _TtC15MediaFoundation31InternalPlaybackStackController : SwiftObject <MFStateDumpable>

 {
    ? delegate;
    ? currentQueueControllerItem;
    ? loadedQueueControllerItems;
    ? loadedItemsPool;
    ? maximumPlayerQueueLength;
    ? mediaServicesAvailable;
    ? playerController;
    ? queueAssetLoader;
    ? queueController;
    ? reporter;
    ? errorController;
    ? externalPlaybackController;
    ? backgroundTaskController;
    ? playbackDefaults;
    ? synchronizingToPlayer;
    ? currentQueueRestorationItem;
    ? playerItemStateSnapshot;
    ? throttlingStateMachine;
    ? deferredPlaybackRateForNextSetQueue;
    ? inFlightSetQueueLoadingContext;
    ? currentQueueAssetLoadingContext;
    ? stackVersion;
    ? assetLoadingId;
    ? playbackStallTimer;
    ? isPausedForLeasePrevention;
    ? $__lazy_storage_$_skipAggregator;
    ? skippingState;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;




@end


#endif