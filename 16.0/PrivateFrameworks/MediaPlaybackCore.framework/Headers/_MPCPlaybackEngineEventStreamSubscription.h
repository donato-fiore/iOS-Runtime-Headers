// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPCPLAYBACKENGINEEVENTSTREAMSUBSCRIPTION_H
#define _MPCPLAYBACKENGINEEVENTSTREAMSUBSCRIPTION_H

@class NSString, NSMutableDictionary;
@protocol MPCPlaybackEngineEventStreamSubscription, MPCPlaybackEngineEventConsumer;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngineEventStream.h"

@interface _MPCPlaybackEngineEventStreamSubscription : NSObject <MPCPlaybackEngineEventStreamSubscription>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, weak, nonatomic) NSObject<MPCPlaybackEngineEventConsumer> *consumer; // ivar: _consumer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *eventHandlers; // ivar: _eventHandlers
@property (readonly, weak, nonatomic) MPCPlaybackEngineEventStream *eventStream; // ivar: _eventStream
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lastEventSuccessTimestamp; // ivar: _lastEventSuccessTimestamp
@property (nonatomic) NSUInteger maximumEventDeliveryTimestamp; // ivar: _maximumEventDeliveryTimestamp
@property (readonly, nonatomic) NSMutableDictionary *mutatingEventHandlers; // ivar: _mutatingEventHandlers
@property (readonly, copy, nonatomic) NSString *streamID; // ivar: _streamID
@property (readonly) Class superclass;


-(id)initWithConsumer:(id)arg0 eventStream:(id)arg1 ;
-(void)_onQueue_flush;
-(void)cancelSubscription;
-(void)flushEventsWithCompletion:(id)arg0 ;
-(void)subscribeToEventType:(id)arg0 handler:(id)arg1 ;
-(void)subscribeToEventType:(id)arg0 options:(NSUInteger)arg1 handler:(id)arg2 ;


@end


#endif