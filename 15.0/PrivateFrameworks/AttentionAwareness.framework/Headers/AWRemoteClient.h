// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWREMOTECLIENT_H
#define AWREMOTECLIENT_H

@class NSXPCConnection, NSArray, NSSet, NSString;
@protocol AWRemoteClient, OS_dispatch_queue, AWFrameworkClient;

#import <Foundation/Foundation.h>

#import "AWScheduler.h"
#import "AWAttentionEvent.h"
#import "AWAttentionAwarenessConfiguration.h"

@interface AWRemoteClient : NSObject <AWRemoteClient>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AWScheduler *_scheduler;
    id<AWFrameworkClient> *_proxy;
    NSXPCConnection *_connection;
    NSUInteger _tagIndex;
    NSUInteger _notificationMask;
    NSUInteger _eventMask;
    NSUInteger _attentionLostEventMask;
    BOOL _sampleWhileAbsent;
    BOOL _retroactiveTimeoutMode;
    NSArray *_attentionLostTimeoutsSec;
    NSSet *_allowedHIDEventsForRemoteEvent;
    *? _clientState;
    AWAttentionEvent *_lastEvent;
    AWAttentionAwarenessConfiguration *_lastConfig;
}


@property (readonly, nonatomic) int clientIndex; // ivar: _clientIndex
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL invalid; // ivar: _invalid
@property (readonly, nonatomic) NSUInteger samplingDelay; // ivar: _samplingDelay
@property (readonly, nonatomic) NSUInteger samplingInterval; // ivar: _samplingInterval


-(BOOL)_interestedInHIDEvent:(struct __IOHIDEvent *)arg0 mask:(NSUInteger)arg1 metadata:(*unk)arg2 ;
-(BOOL)_isSamplingClient;
-(BOOL)_setClientConfig:(id)arg0 shouldReset:(BOOL)arg1 error:(*id)arg2 ;
-(NSUInteger)_activeEventMask;
-(NSUInteger)nextAttentionLostTime:(*BOOL)arg0 ;
-(NSUInteger)nextSampleTime;
-(NSUInteger)nextTimerForTime:(NSUInteger)arg0 ;
-(id)connection;
-(id)description;
-(id)initWithProxy:(id)arg0 connection:(id)arg1 clientConfig:(id)arg2 clientIndex:(int)arg3 scheduler:(id)arg4 error:(*id)arg5 ;
-(void)_resetAttentionLostTimer;
-(void)deliverEvent:(id)arg0 ;
-(void)deliverNotification:(NSUInteger)arg0 ;
-(void)deliverPollEventType:(NSUInteger)arg0 event:(id)arg1 ;
-(void)getLastEvent:(id)arg0 ;
-(void)initializeClientState;
-(void)invalidateWithHandler:(id)arg0 ;
-(void)notifyEvent:(NSUInteger)arg0 timestamp:(NSUInteger)arg1 ;
-(void)notifyEvent:(NSUInteger)arg0 timestamp:(NSUInteger)arg1 metadata:(*unk)arg2 ;
-(void)notifyHIDEvent:(struct __IOHIDEvent *)arg0 mask:(NSUInteger)arg1 timestamp:(NSUInteger)arg2 ;
-(void)pingWithReply:(id)arg0 ;
-(void)pollWithTimeout:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)reevaluateConfig;
-(void)resetAttentionLostTimerWithReply:(id)arg0 ;
-(void)setClientConfig:(id)arg0 shouldReset:(BOOL)arg1 reply:(id)arg2 ;
-(void)updateDeadlinesForTime:(NSUInteger)arg0 ;
-(void)updateEventTimesForMask:(NSUInteger)arg0 timestamp:(NSUInteger)arg1 ;


@end


#endif