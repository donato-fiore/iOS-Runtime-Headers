// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SDEVENTMONITOR_H
#define SDEVENTMONITOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SDEventMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventHandlers; // ivar: _eventHandlers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)_startMonitoringEventsForStream:(NSUInteger)arg0 ;
// -(void)registerHandler:(id)arg0 forEventName:(unk)arg1  ;
-(void)startMonitoringEvents;
// -(void)unregisterHandler:(id)arg0 forEventName:(unk)arg1  ;


@end


#endif