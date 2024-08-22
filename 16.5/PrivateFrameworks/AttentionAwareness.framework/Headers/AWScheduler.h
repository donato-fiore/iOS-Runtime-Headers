// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWSCHEDULER_H
#define AWSCHEDULER_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source, AWSchedulerObserver;

#import <Foundation/Foundation.h>

#import "AWAttentionStreamer.h"
#import "AWAttentionSampler.h"

@interface AWScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_clients;
    NSMutableDictionary *_streamingClients;
    NSMutableDictionary *_interruptedStreamingClients;
    AWAttentionStreamer *_attentionStreamer;
    mach_timebase_info _timebase;
}


@property (readonly, nonatomic) AWAttentionSampler *attentionSampler; // ivar: _attentionSampler
@property (weak, nonatomic) NSObject<AWSchedulerObserver> *observer; // ivar: _observer


+(id)sharedScheduler;
+(id)sharedUnitTestScheduler;
-(CGFloat)calculateTimeDelta:(NSUInteger)arg0 endTime:(NSUInteger)arg1 timebase:(struct mach_timebase_info )arg2 ;
-(id)addStreamingClient:(id)arg0 withIdentifier:(int)arg1 ;
-(id)cancelFaceDetectStream:(id)arg0 withIdentifier:(id)arg1 ;
-(id)description;
-(id)initForUnitTest:(BOOL)arg0 ;
-(id)streamFaceDetectEvents;
-(void)addClient:(id)arg0 ;
-(void)armEvents;
-(void)handleNotification:(NSUInteger)arg0 ;
-(void)processHIDEvent:(struct __IOHIDEvent *)arg0 mask:(NSUInteger)arg1 timestamp:(NSUInteger)arg2 ;
-(void)reevaluate;
-(void)removeInvalidClients;
-(void)removeInvalidClientsWithConnection:(id)arg0 ;
-(void)removeStreamingClientwithIdentifier:(int)arg0 ;
-(void)setClientAsInterrupted:(id)arg0 forKey:(id)arg1 ;
-(void)setSmartCoverClosed:(BOOL)arg0 ;


@end


#endif