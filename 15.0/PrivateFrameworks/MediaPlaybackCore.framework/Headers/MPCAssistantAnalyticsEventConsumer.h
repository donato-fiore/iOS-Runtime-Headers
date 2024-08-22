// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCASSISTANTANALYTICSEVENTCONSUMER_H
#define MPCASSISTANTANALYTICSEVENTCONSUMER_H

@class NSString;
@protocol MPCPlaybackEngineEventConsumer, OS_dispatch_queue, MPCPlaybackEngineEventStreamSubscription;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"

@interface MPCAssistantAnalyticsEventConsumer : NSObject <MPCPlaybackEngineEventConsumer>

 {
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSString *_lastSiriReferenceIdentifierForPlaybackStart;
    *OpaqueCMTimebase _observedTimebase;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, nonatomic) NSObject<MPCPlaybackEngineEventStreamSubscription> *subscription; // ivar: _subscription
@property (readonly) Class superclass;


+(id)identifier;
-(id)_contextWithEvent:(id)arg0 ;
-(id)_createContextDictionaryWithSiriReferenceIdentifier:(id)arg0 siriWHAMetricsInfo:(id)arg1 formatInfo:(id)arg2 ;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_attemptPlaybackStartReportingEventWithItem:(id)arg0 ;
-(void)_handleAssetLoadEnd:(id)arg0 cursor:(id)arg1 ;
-(void)_itemTimebaseDidChangeNotification:(id)arg0 ;
-(void)_timebaseEffectiveRateChangedNotification;
-(void)subscribeToEventStream:(id)arg0 ;
-(void)unsubscribeFromEventStream:(id)arg0 ;


@end


#endif