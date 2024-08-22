// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREANALYTICSEVENTSUBMITTER_H
#define SUCOREANALYTICSEVENTSUBMITTER_H

@class NSMutableDictionary, SUCoreLog, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCoreAnalyticsEventSubmitter : NSObject {
    NSMutableDictionary *_events;
    NSObject<OS_dispatch_queue> *_stateQueue;
}


@property (retain, nonatomic) SUCoreLog *eventSubmitterLogger; // ivar: _eventSubmitterLogger
@property (readonly, retain, nonatomic) NSDictionary *events;


-(id)init;
-(void)_queue_registerSendEvent:(id)arg0 ;
-(void)_queue_removeAllEvents;
-(void)_queue_removeEvent:(id)arg0 ;
-(void)_queue_removeEventsWithName:(id)arg0 ;
-(void)_queue_setEvent:(id)arg0 ;
-(void)_queue_submitAllEvents;
-(void)_queue_submitEvent:(id)arg0 ;
-(void)_queue_submitEventsWithName:(id)arg0 ;
-(void)removeAllEvents;
-(void)removeEvent:(id)arg0 ;
-(void)removeEventsWithName:(id)arg0 ;
-(void)setEvent:(id)arg0 ;
-(void)submitAllEvents;
-(void)submitEvent:(id)arg0 ;
-(void)submitEventsWithName:(id)arg0 ;


@end


#endif