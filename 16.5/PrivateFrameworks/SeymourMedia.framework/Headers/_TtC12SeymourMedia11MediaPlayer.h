// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12SEYMOURMEDIA11MEDIAPLAYER_H
#define _TTC12SEYMOURMEDIA11MEDIAPLAYER_H


#import <Foundation/Foundation.h>


@interface _TtC12SeymourMedia11MediaPlayer : NSObject {
    ? assetClient;
    ? analyticsReporter;
    ? eventHub;
    ? metricPlaybackTracker;
    ? platform;
    ? playerItemObserver;
    ? screenCaptureMonitor;
    ? sessionOrigin;
    ? startTime;
    ? subscriptionToken;
    ? timeJumpCoordinator;
    ? timelineObserver;
    ? workout;
    ? state;
    ? mediaSyncCoordinator;
    ? mediaSyncSuspension;
    ? isReadyToPlay;
    ? onReadyToPlay;
    ? _startTimeOverride;
    ? _audioFormatMediaKind;
}




-(id)init;


@end


#endif