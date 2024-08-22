// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE31INTERNALPLAYBACKSTACKCONTROLLER_H
#define _TTC17MEDIAPLAYBACKCORE31INTERNALPLAYBACKSTACKCONTROLLER_H

@class SwiftObject, NSDictionary;
@protocol MFStateDumpable, MFStateDumpable, MFResettable;



@interface _TtC17MediaPlaybackCore31InternalPlaybackStackController : SwiftObject <MFStateDumpable, MFStateDumpable, MFResettable>

 {
    ? delegate;
    ? currentQueueControllerItem;
    ? loadedQueueControllerItems;
    ? silentlyFailedItemErrors;
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
    ? transitionController;
    ? bipBoopPlayer;
    ? reloadingWithFadeout;
    ? deferredPlaybackRateForNextSetQueue;
    ? inFlightSetQueueLoadingContext;
    ? currentQueueAssetLoadingContext;
    ? reloadQueueOnGoing;
    ? stackVersion;
    ? assetLoadingId;
    ? playbackStallTimer;
    ? isSkippingFailedItems;
    ? isPausedForLeasePrevention;
    ? $__lazy_storage_$_skipAggregator;
    ? skippingState;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;


-(void)resetWithReason:(id)arg0 ;


@end


#endif