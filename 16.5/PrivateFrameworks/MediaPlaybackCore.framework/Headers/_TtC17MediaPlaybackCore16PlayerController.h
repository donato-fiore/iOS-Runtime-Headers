// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE16PLAYERCONTROLLER_H
#define _TTC17MEDIAPLAYBACKCORE16PLAYERCONTROLLER_H

@class SwiftObject, NSDictionary;
@protocol MFStateDumpable, MFResettable, MFPlayerConfigurable;



@interface _TtC17MediaPlaybackCore16PlayerController : SwiftObject <MFStateDumpable, MFResettable, MFPlayerConfigurable>

 {
    ? delegate;
    ? mode;
    ? userActionTimeout;
    ? currentItemTransition;
    ? playbackCoordinatorObservation;
    ? player;
    ? audioSession;
    ? playerID;
    ? coordinatedPlaybackSuspension;
    ? videoPlayerViewController;
    ? lastAudioSessionMode;
    ? playbackStartSubscription;
    ? queue;
    ? fsm;
    ? playerObserver;
    ? playerSubscription;
    ? systemObserver;
    ? systemSubscription;
    ? didBecomeActiveSubscription;
    ? willResignActiveSubscription;
    ? videoPlayerBehavior;
    ? userEventsMonitor;
    ? reporter;
    ? leaseController;
    ? previousItemID;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;


-(void)resetWithReason:(id)arg0 ;
-(void)setRelativeVolume:(float)arg0 ;
-(void)setSpatializationFormat:(NSInteger)arg0 ;


@end


#endif