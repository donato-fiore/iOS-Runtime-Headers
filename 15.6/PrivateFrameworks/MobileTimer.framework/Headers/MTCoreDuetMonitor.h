// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTCOREDUETMONITOR_H
#define MTCOREDUETMONITOR_H

@class NSMutableDictionary, _CDClientContext, NSString, _DKKnowledgeStore;
@protocol MTAlarmObserver, MTAlarmStorage, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTCoreDuetMonitor : NSObject <MTAlarmObserver>



@property (readonly, nonatomic) NSMutableDictionary *alarmStatesByAlarmID; // ivar: _alarmStatesByAlarmID
@property (readonly, nonatomic) NSObject<MTAlarmStorage> *alarmStorage; // ivar: _alarmStorage
@property (readonly, nonatomic) _CDClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _DKKnowledgeStore *knowledgeStore; // ivar: _knowledgeStore
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(id)initWithAlarmStorage:(id)arg0 ;
-(id)metadataForAlarm:(id)arg0 ;
-(void)_queue_writeAlarmToKnowledgeStore:(id)arg0 category:(id)arg1 ;
-(void)_queue_writeCurrentStateToContextStore;
-(void)_queue_writeNextAlarmStateToContextStore:(id)arg0 ;
-(void)handleSystemReady;
-(void)source:(id)arg0 didAddAlarms:(id)arg1 ;
-(void)source:(id)arg0 didChangeNextAlarm:(id)arg1 ;
-(void)source:(id)arg0 didDismissAlarm:(id)arg1 dismissAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didFireAlarm:(id)arg1 triggerType:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didRemoveAlarms:(id)arg1 ;
-(void)source:(id)arg0 didSnoozeAlarm:(id)arg1 snoozeAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didUpdateAlarms:(id)arg1 ;
-(void)updateLastModifiedDateForAlarms:(id)arg0 ;
-(void)updateStateForAlarm:(id)arg0 alarmEvent:(NSUInteger)arg1 ;
-(void)updateStateForIdleAlarms:(id)arg0 ;
-(void)updateStateForNextAlarm:(id)arg0 ;
-(void)writeAlarmEventToBiome:(id)arg0 ofType:(NSUInteger)arg1 ;
-(void)writeAlarmToKnowledgeStore:(id)arg0 alarmEvent:(NSUInteger)arg1 ;


@end


#endif