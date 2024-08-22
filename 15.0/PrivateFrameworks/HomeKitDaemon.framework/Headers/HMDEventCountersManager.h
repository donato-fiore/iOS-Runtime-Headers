// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDEVENTCOUNTERSMANAGER_H
#define HMDEVENTCOUNTERSMANAGER_H

@class HMFObject, HMFUnfairLock, NSMutableDictionary, NSDate;
@protocol HMDEventCountersStoring, OS_dispatch_queue;



@interface HMDEventCountersManager : HMFObject {
    HMFUnfairLock *_lock;
}


@property (readonly) NSObject<HMDEventCountersStoring> *counterStorage; // ivar: _counterStorage
@property (retain, nonatomic) NSMutableDictionary *eventCounters; // ivar: _eventCounters
@property (retain, nonatomic) NSDate *lastSaveTime; // ivar: _lastSaveTime
@property (nonatomic) CGFloat saveInterval; // ivar: _saveInterval
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedEventCountersManager;
-(NSUInteger)_fetchEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(NSUInteger)fetchAggregatedEventCountersForRequestGroup:(id)arg0 ;
-(NSUInteger)fetchEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(id)_fetchAllEventCounters;
-(id)_fetchEventCountersForRequestGroup:(id)arg0 ;
-(id)_getOrCreateEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(id)fetchAllEventCounters;
-(id)fetchEventCountersForRequestGroup:(id)arg0 ;
-(id)init;
-(id)initWithEventCountersStorage:(id)arg0 saveInterval:(CGFloat)arg1 ;
-(id)unarchivedEventCounters;
-(void)_incrementEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 withValue:(NSUInteger)arg2 ;
-(void)_performOnUpdate;
-(void)_resetEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(void)_save;
-(void)addObserver:(id)arg0 forEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)archiveEventCountersWithEventCountersSnapshot:(id)arg0 ;
-(void)forceSave;
-(void)incrementEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(void)incrementEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 withValue:(NSUInteger)arg2 ;
-(void)resetAllEventCounters;
-(void)resetEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 ;


@end


#endif