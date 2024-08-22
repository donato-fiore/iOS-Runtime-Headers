// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCXPCEVENTPUBLISHER_H
#define GCXPCEVENTPUBLISHER_H

@class NSMutableArray, NSString, NSMutableSet;
@protocol OS_xpc_event_publisher, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface GCXPCEventPublisher : NSObject

@property (retain, nonatomic) NSMutableArray *pendingSendEvents; // ivar: _pendingSendEvents
@property (retain, nonatomic) NSObject<OS_xpc_event_publisher> *publisher; // ivar: _publisher
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL receivedInitialBarrier; // ivar: _receivedInitialBarrier
@property (retain, nonatomic) NSObject<OS_xpc_object> *stateEvent; // ivar: _stateEvent
@property (nonatomic, getter=isStatefulEventPublisher) BOOL statefulEventPublisher; // ivar: _statefulEventPublisher
@property (retain, nonatomic) NSString *streamName; // ivar: _streamName
@property (retain, nonatomic) NSMutableSet *tokens; // ivar: _tokens


-(id)initWithStreamName:(id)arg0 ;
-(id)initWithStreamName:(id)arg0 isStatefulEventPublisher:(BOOL)arg1 ;
-(void)handleEventWithAction:(unsigned int)arg0 token:(NSUInteger)arg1 descriptor:(id)arg2 ;
-(void)sendEvent:(id)arg0 ;
-(void)sendEvent:(id)arg0 toSubscriber:(id)arg1 ;


@end


#endif