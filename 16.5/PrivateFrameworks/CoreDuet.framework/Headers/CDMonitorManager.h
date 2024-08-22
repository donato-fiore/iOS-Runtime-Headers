// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMONITORMANAGER_H
#define CDMONITORMANAGER_H

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CDMonitorManager : NSObject {
    NSMutableDictionary *_monitors;
    NSMutableSet *_lazyMonitorNames;
    id *_generalInstantHandler;
    id *_generalHistoricalHandler;
    id *_generalHistoricalDeletingHandler;
    id *_generalShutdownHandler;
    NSMutableDictionary *_instantHandlerMap;
    NSMutableDictionary *_historicalHandlerMap;
    NSMutableSet *_shutdownHandlingMonitors;
    NSObject<OS_dispatch_queue> *_monitorWorkQueue;
    NSObject<OS_dispatch_source> *_SIGTERMHandlerSource;
}




+(id)monitorManagerForEventStreams:(id)arg0 domain:(NSUInteger)arg1 ;
-(BOOL)_hasMonitorForStreamName:(id)arg0 ;
-(BOOL)hasMonitor:(id)arg0 ;
-(id)_allMonitors;
-(id)_allStreamNames;
-(id)_currentEventForStreamName:(id)arg0 ;
-(id)_lastUpdateForStreamName:(id)arg0 ;
-(id)_monitorForStreamName:(id)arg0 ;
-(id)currentEvent;
-(id)currentEventForStream:(id)arg0 ;
-(id)initWithEventStreams:(id)arg0 domain:(NSUInteger)arg1 ;
-(id)lastUpdate;
-(id)lastUpdateForStream:(id)arg0 ;
-(void)_addMonitor:(id)arg0 forStreamName:(id)arg1 ;
-(void)_removeMonitorForStreamName:(id)arg0 ;
// -(void)_setHistoricalHandler:(id)arg0 forStreamName:(unk)arg1  ;
// -(void)_setInstantHandler:(id)arg0 forStreamName:(unk)arg1  ;
-(void)_startMonitorForStreamName:(id)arg0 ;
-(void)_stopMonitorForStreamName:(id)arg0 ;
-(void)_updateForStreamName:(id)arg0 ;
-(void)addMonitor:(id)arg0 ;
-(void)deliverNotificationEvent:(id)arg0 ;
-(void)handleShutdownNotification;
-(void)populateCurrentValueForStreamName:(id)arg0 ;
-(void)removeMonitor:(id)arg0 ;
-(void)setHistoricalDeletingHandler:(id)arg0 ;
-(void)setHistoricalHandler:(id)arg0 ;
// -(void)setHistoricalHandler:(id)arg0 forStream:(unk)arg1  ;
-(void)setInstantHandler:(id)arg0 ;
// -(void)setInstantHandler:(id)arg0 forStream:(unk)arg1  ;
-(void)setShutdownHandler:(id)arg0 ;
-(void)start;
-(void)startMonitorForStream:(id)arg0 ;
-(void)stop;
-(void)stopMonitorForStream:(id)arg0 ;
-(void)update;
-(void)updateForStream:(id)arg0 ;


@end


#endif