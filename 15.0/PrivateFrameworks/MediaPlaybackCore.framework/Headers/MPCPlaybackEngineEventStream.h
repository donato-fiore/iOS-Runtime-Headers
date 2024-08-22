// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYBACKENGINEEVENTSTREAM_H
#define MPCPLAYBACKENGINEEVENTSTREAM_H

@class NSMutableArray, NSHashTable, MSVSQLDatabase;
@protocol OS_dispatch_queue, MPCPlabackEngineEventStreamTestingDelegate;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngineEvent.h"

@interface MPCPlaybackEngineEventStream : NSObject {
    NSMutableArray *_subscriptions;
    NSHashTable *_deferralAssertions;
    MSVSQLDatabase *_database;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _scheduledFlushes;
}


@property (readonly, nonatomic) MPCPlaybackEngineEvent *lastEvent;
@property (weak, nonatomic) NSObject<MPCPlabackEngineEventStreamTestingDelegate> *testingDelegate; // ivar: _testingDelegate


-(id)debugDescription;
-(id)eventDeliveryDeferralAssertionForReason:(id)arg0 ;
-(id)initWithDatabaseCreationBlock:(id)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(id)lastEventsWithCount:(NSInteger)arg0 ;
-(void)addConsumer:(id)arg0 ;
-(void)dealloc;
-(void)emitEventType:(id)arg0 payload:(id)arg1 ;
-(void)emitEventType:(id)arg0 payload:(id)arg1 atTime:(struct ? )arg2 ;
-(void)flushEvents;
-(void)flushEventsWithConsumer:(id)arg0 fromTimestamp:(NSUInteger)arg1 untilTimestamp:(NSUInteger)arg2 ;
-(void)removeConsumer:(id)arg0 ;
-(void)resetConsumerEventDeliveryToTimestamp:(NSUInteger)arg0 ;
-(void)setMaximumEventDeliveryTimestamp:(NSUInteger)arg0 ;


@end


#endif