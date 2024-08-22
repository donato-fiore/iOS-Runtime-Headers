// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLIENTLOGAGGREGATOR_H
#define PLCLIENTLOGAGGREGATOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

#import <Foundation/Foundation.h>


@interface PLClientLogAggregator : NSObject

@property (readonly) NSMutableDictionary *aggregatesCache; // ivar: _aggregatesCache
@property (retain) NSObject<OS_dispatch_queue> *executionQueue; // ivar: _executionQueue
@property (retain) NSObject<OS_dispatch_source> *flushTimer; // ivar: _flushTimer
@property (retain) NSObject<OS_os_log> *logHandle; // ivar: _logHandle
@property unsigned char numAggregates; // ivar: _numAggregates
@property unsigned char numAggregations; // ivar: _numAggregations


+(id)sharedInstance;
-(BOOL)_aggregateForClientID:(id)arg0 eventName:(id)arg1 eventDictionary:(id)arg2 configuration:(id)arg3 ;
-(BOOL)_isEventInputValid:(id)arg0 configuration:(id)arg1 ;
-(BOOL)_setEventAggregate:(id)arg0 eventName:(id)arg1 aggregateKey:(id)arg2 valueLabel:(id)arg3 value:(id)arg4 ;
-(BOOL)aggregateForClientID_async:(short)arg0 eventName:(id)arg1 eventDictionary:(id)arg2 configuration:(id)arg3 ;
-(id)_eventAggregate:(id)arg0 eventName:(id)arg1 aggregateKey:(id)arg2 valueLabel:(id)arg3 ;
-(id)init;
-(void)_flushToPowerLog;
-(void)_scheduleFlushTimer;
-(void)cleanCache;


@end


#endif