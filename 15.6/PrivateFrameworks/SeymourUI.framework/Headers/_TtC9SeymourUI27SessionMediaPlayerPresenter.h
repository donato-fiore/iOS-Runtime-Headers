// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI27SESSIONMEDIAPLAYERPRESENTER_H
#define _TTC9SEYMOURUI27SESSIONMEDIAPLAYERPRESENTER_H

@class SwiftObject;



@interface _TtC9SeymourUI27SessionMediaPlayerPresenter : SwiftObject {
    ? display;
    ? dismissalBehavior;
    ? avPlayerDismissal;
    ? onTapSettings;
    ? onTapExit;
    ? onTapAirplay;
    ? onWillStopPictureInPicture;
    ? onDidStartPictureInPicture;
    ? onRestoreFromPictureInPicture;
    ? onDisplayDismissed;
    ? accountProvider;
    ? keyDeliveryClient;
    ? mediaPlayer;
    ? nowPlayingUpdater;
    ? remoteBrowsingSource;
    ? remoteKeyDeliveryClient;
    ? sessionClient;
    ? sessionOrigin;
    ? subscriptionToken;
    ? workout;
    ? platform;
    ? multiUserClient;
    ? eventHub;
    ? startTime;
    ? playbackSnapshot;
    ? lastForegroundPlaybackSnapshot;
    ? siriRequestedPlaybackState;
    ? gymKitConnectionSnapshot;
    ? shouldResumeSyncPlaybackOnForeground;
    ? currentRouteCategories;
    ? state;
    ? isRemoteDisplayConnected;
    ? outputDeviceChangedObserver;
    ? outputDevicesChangedObserver;
    ? multiUserSessionRequiringResync;
}




-(void)handleOutputContextDeviceChanged;


@end


#endif