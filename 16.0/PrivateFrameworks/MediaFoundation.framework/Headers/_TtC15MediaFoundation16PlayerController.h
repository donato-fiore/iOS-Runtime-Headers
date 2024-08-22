// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15MEDIAFOUNDATION16PLAYERCONTROLLER_H
#define _TTC15MEDIAFOUNDATION16PLAYERCONTROLLER_H

@class SwiftObject, NSDictionary;
@protocol MFStateDumpable, MFResettable, MFPlayerConfigurable;



@interface _TtC15MediaFoundation16PlayerController : SwiftObject <MFStateDumpable, MFResettable, MFPlayerConfigurable>

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


-(void)reset;
-(void)setRelativeVolume:(float)arg0 ;
-(void)setSpatializationFormat:(NSInteger)arg0 ;


@end


#endif