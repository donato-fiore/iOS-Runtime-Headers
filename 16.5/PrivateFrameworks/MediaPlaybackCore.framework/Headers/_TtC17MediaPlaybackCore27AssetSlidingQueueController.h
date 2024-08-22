// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE27ASSETSLIDINGQUEUECONTROLLER_H
#define _TTC17MEDIAPLAYBACKCORE27ASSETSLIDINGQUEUECONTROLLER_H

@class SwiftObject, NSDictionary;
@protocol MFStateDumpable, MFStateDumpable, MFResettable;



@interface _TtC17MediaPlaybackCore27AssetSlidingQueueController : SwiftObject <MFStateDumpable, MFStateDumpable, MFResettable>

 {
    ? delegate;
    ? currentQueueControllerItem;
    ? maximumPlayerQueueLength;
    ? playerController;
    ? assetLoader;
    ? queueController;
    ? errorController;
    ? externalPlaybackController;
    ? reporter;
    ? backgroundTaskController;
    ? playbackDefaults;
    ? transitionController;
    ? assetQueue;
    ? playerItemStateSnapshot;
    ? reloadingWithFadeout;
    ? deferredPlaybackRateForNextSetQueue;
    ? playbackStallTimer;
    ? synchronizingToPlayer;
    ? inFlightSetQueueContext;
    ? hasSetQueueCompletedSuccessfully;
    ? lastSetQueueIdentifier;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;


-(void)resetWithReason:(id)arg0 ;


@end


#endif