// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI29SESSIONINTROSEQUENCEPRESENTER_H
#define _TTC9SEYMOURUI29SESSIONINTROSEQUENCEPRESENTER_H

@protocol AVAudioPlayerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9SeymourUI29SessionIntroSequencePresenter : NSObject <AVAudioPlayerDelegate>

 {
    ? display;
    ? sessionCountdownCoordinator;
    ? audioPlayer;
    ? onStartCountdown;
    ? onCountdownSequenceStarted;
    ? onCountdownSequenceCompleted;
    ? timerProvider;
    ? sessionRouteMonitor;
    ? subscriptionToken;
    ? timer;
    ? sessionRouteCategory;
    ? audioSessionCategory;
    ? audioSessionMode;
    ? workoutDeviceConnection;
    ? platform;
    ? catalogWorkout;
}




-(id)init;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;


@end


#endif