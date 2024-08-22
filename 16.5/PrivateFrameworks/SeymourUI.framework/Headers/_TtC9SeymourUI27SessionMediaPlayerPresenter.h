// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI27SESSIONMEDIAPLAYERPRESENTER_H
#define _TTC9SEYMOURUI27SESSIONMEDIAPLAYERPRESENTER_H

@class SwiftObject;



@interface _TtC9SeymourUI27SessionMediaPlayerPresenter : SwiftObject {
    ? display;
    ? dismissalBehavior;
    ? avPlayerDismissal;
    ? onTapPlay;
    ? onTapSettings;
    ? onTapCollapse;
    ? onTapExit;
    ? onTapAirplay;
    ? onWillStopPictureInPicture;
    ? onDidStartPictureInPicture;
    ? onRestoreFromPictureInPicture;
    ? onDisplayDismissed;
    ? accountProvider;
    ? audioPlayerPresenter;
    ? catalogWorkout;
    ? externalOverlayPresenter;
    ? keyDeliveryClient;
    ? mediaPlayer;
    ? mediaTagStringBuilder;
    ? nowPlayingUpdater;
    ? remoteBrowsingSource;
    ? remoteKeyDeliveryClient;
    ? sessionClient;
    ? sessionOrigin;
    ? sessionRouteMonitor;
    ? storefrontLocalizer;
    ? subscriptionToken;
    ? platform;
    ? multiUserClient;
    ? eventHub;
    ? startTime;
    ? currentSessionRouteCategory;
    ? playbackSnapshot;
    ? lastForegroundPlaybackSnapshot;
    ? siriRequestedPlaybackState;
    ? gymKitConnectionSnapshot;
    ? shouldResumeSyncPlaybackOnForeground;
    ? state;
    ? isRemoteDisplayConnected;
    ? currentMusicTrack;
    ? isShowingMediaMoment;
    ? outputDeviceChangedObserver;
    ? outputDevicesChangedObserver;
    ? multiUserSessionRequiringResync;
    ? activityTypeBehavior;
    ? _preventTimeJumpEnabled;
}




-(void)handleAudioInterruptionWithNotification:(id)arg0 ;


@end


#endif