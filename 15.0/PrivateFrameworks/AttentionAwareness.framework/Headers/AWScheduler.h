// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWSCHEDULER_H
#define AWSCHEDULER_H

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, AWSchedulerObserver;

#import <Foundation/Foundation.h>

#import "AWAttentionSampler.h"

@interface AWScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_clients;
}


@property (readonly, nonatomic) AWAttentionSampler *attentionSampler; // ivar: _attentionSampler
@property (weak, nonatomic) NSObject<AWSchedulerObserver> *observer; // ivar: _observer


+(id)sharedScheduler;
+(id)sharedUnitTestScheduler;
-(id)description;
-(id)initForUnitTest:(BOOL)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)armEvents;
-(void)processHIDEvent:(struct __IOHIDEvent *)arg0 mask:(NSUInteger)arg1 timestamp:(NSUInteger)arg2 ;
-(void)reevaluate;
-(void)removeInvalidClients;
-(void)removeInvalidClientsWithConnection:(id)arg0 ;
-(void)setSmartCoverClosed:(BOOL)arg0 ;


@end


#endif