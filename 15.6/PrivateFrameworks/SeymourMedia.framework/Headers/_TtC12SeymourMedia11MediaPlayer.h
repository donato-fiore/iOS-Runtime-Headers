// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12SEYMOURMEDIA11MEDIAPLAYER_H
#define _TTC12SEYMOURMEDIA11MEDIAPLAYER_H


#import <Foundation/Foundation.h>


@interface _TtC12SeymourMedia11MediaPlayer : NSObject {
    ? assetClient;
    ? eventHub;
    ? mediaSyncCoordinator;
    ? mediaSyncSuspension;
    ? metricPlaybackTracker;
    ? playerItemObserver;
    ? sessionOrigin;
    ? startTime;
    ? subscriptionToken;
    ? workout;
    ? state;
    ? isReadyToPlay;
    ? onReadyToPlay;
    ? timelineObserver;
    ? _startTimeOverride;
}




-(id)init;


@end


#endif