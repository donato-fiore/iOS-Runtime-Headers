// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE26PLAYBACKSTATISTICSCONSUMER_H
#define _TTC17MEDIAPLAYBACKCORE26PLAYBACKSTATISTICSCONSUMER_H

@protocol MPCPlaybackEngineEventConsumer;

#import <Foundation/Foundation.h>


@interface _TtC17MediaPlaybackCore26PlaybackStatisticsConsumer : NSObject <MPCPlaybackEngineEventConsumer>

 {
    ? playbackEngine;
    ? subscription;
}




+(id)identifier;
-(id)init;
-(void)subscribeToEventStream:(id)arg0 ;
-(void)unsubscribeFromEventStream:(id)arg0 ;


@end


#endif