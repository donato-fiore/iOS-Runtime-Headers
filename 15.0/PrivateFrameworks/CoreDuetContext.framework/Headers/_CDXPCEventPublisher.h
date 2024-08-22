// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDXPCEVENTPUBLISHER_H
#define _CDXPCEVENTPUBLISHER_H

@class NSMutableArray, NSString;
@protocol _CDXPCEventPublisherDelegate, OS_os_log, OS_xpc_event_publisher, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CDXPCEventPublisher : NSObject

@property (retain, nonatomic) NSObject<_CDXPCEventPublisherDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSMutableArray *pendingSendEvents; // ivar: _pendingSendEvents
@property (retain, nonatomic) NSObject<OS_xpc_event_publisher> *publisher; // ivar: _publisher
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSString *streamName; // ivar: _streamName


+(id)eventPublisherWithStreamName:(char *)arg0 delegate:(id)arg1 queue:(id)arg2 log:(id)arg3 ;
-(id)initWithStreamName:(id)arg0 delegate:(id)arg1 queue:(id)arg2 log:(id)arg3 ;
-(void)activatePublisherWithStreamName:(char *)arg0 ;
-(void)addToken:(NSUInteger)arg0 descriptor:(id)arg1 userID:(unsigned int)arg2 ;
-(void)handleEventWithAction:(unsigned int)arg0 token:(NSUInteger)arg1 descriptor:(id)arg2 ;
-(void)removeToken:(NSUInteger)arg0 ;
-(void)sendEvent:(id)arg0 toSubscriber:(id)arg1 handler:(id)arg2 ;
-(void)sendEvent:(id)arg0 toSubscriber:(id)arg1 replyHandler:(id)arg2 ;


@end


#endif