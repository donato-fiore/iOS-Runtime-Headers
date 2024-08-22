// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKMONITOR_H
#define _DKMONITOR_H

@class NSDictionary, NSString, NSSet, _DKEvent, NSDate, NSMutableDictionary;
@protocol _DKInstantMonitor, _DKHistoricalMonitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DKMonitor : NSObject <_DKInstantMonitor, _DKHistoricalMonitor>

 {
    NSDictionary *_state;
    NSString *_bootSessionUUID;
}


@property (readonly, copy, nonatomic) NSSet *classesForSecureStateDecoding;
@property (retain, nonatomic) _DKEvent *currentEvent; // ivar: _currentEvent
@property (retain) NSDate *dateAtLastClockChange; // ivar: _dateAtLastClockChange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *eventComparator; // ivar: _eventComparator
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *historicalHandler; // ivar: historicalHandler
@property (readonly, nonatomic) NSMutableDictionary *historicalState; // ivar: _historicalState
@property (copy, nonatomic) id *instantHandler; // ivar: instantHandler
@property (readonly, nonatomic) NSMutableDictionary *instantState; // ivar: _instantState
@property (retain, nonatomic) NSDate *lastUpdate; // ivar: lastUpdate
@property NSUInteger machTimeAtLastClockChange; // ivar: _machTimeAtLastClockChange
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSInteger references; // ivar: _references
@property (copy, nonatomic) id *shutdownHandler; // ivar: shutdownHandler
@property (readonly) Class superclass;


+(BOOL)shouldMergeUnchangedEvents;
+(id)entitlements;
+(id)eventStream;
-(BOOL)historicalStateHasChanged:(id)arg0 ;
-(BOOL)instantMonitorNeedsActivation;
-(BOOL)instantMonitorNeedsDeactivation;
-(id)init;
-(id)loadState;
-(void)dealloc;
-(void)endCurrentEvent:(id)arg0 ;
-(void)invalidateInstantState;
-(void)saveState;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;
-(void)systemClockDidChange:(id)arg0 ;
-(void)update;


@end


#endif