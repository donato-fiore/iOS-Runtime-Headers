// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12SEYMOURMEDIA21METRICPLAYBACKTRACKER_H
#define _TTC12SEYMOURMEDIA21METRICPLAYBACKTRACKER_H

@class SwiftObject;



@interface _TtC12SeymourMedia21MetricPlaybackTracker : SwiftObject {
    ? catalogWorkout;
    ? eventHub;
    ? subscriptionToken;
    ? mediaType;
    ? networkEvaluator;
    ? assetClient;
    ? platform;
    ? startTime;
    ? lastWorkoutPlaybackInfo;
    ? downloadState;
    ? expectedWorkoutPlaybackPause;
    ? playbackFocus;
    ? currentSubtitleSelection;
    ? remoteDisplayConnection;
    ? playbackMode;
    ? isGroupActivity;
    ? musicIDStartPlaybackInfoMap;
    ? reportedStopMusicIDS;
    ? seeking;
    ? seekBeganOverallPosition;
    ? seekBeganMusicTrack;
    ? seekBeganMusicTrackPosition;
    ? seekBeganTimestamp;
    ? onInvalidTransition;
}




-(void)handleAppBackground;
-(void)handlePlaybackInterrupted;


@end


#endif