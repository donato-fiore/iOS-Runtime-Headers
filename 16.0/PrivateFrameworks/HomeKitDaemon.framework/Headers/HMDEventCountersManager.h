// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDEVENTCOUNTERSMANAGER_H
#define HMDEVENTCOUNTERSMANAGER_H

@class HMFObject, NSMutableDictionary, NSDate;
@protocol HMDEventCounterContext, HMDEventCountersStoring, OS_dispatch_queue;



@interface HMDEventCountersManager : HMFObject <HMDEventCounterContext>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableDictionary *counterGroups; // ivar: _counterGroups
@property (readonly) NSObject<HMDEventCountersStoring> *counterStorage; // ivar: _counterStorage
@property (retain, nonatomic) NSDate *lastSaveTime; // ivar: _lastSaveTime
@property (nonatomic) CGFloat saveInterval; // ivar: _saveInterval
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedEventCountersManager;
-(NSUInteger)fetchAggregatedEventCountersForRequestGroup:(id)arg0 ;
-(NSUInteger)fetchEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(id)_fetchAllEventCounters;
-(id)counterGroupForName:(id)arg0 ;
-(id)counterGroupForSpecifier:(id)arg0 ;
-(id)fetchAllEventCounters;
-(id)fetchEventCountersForRequestGroup:(id)arg0 ;
-(id)init;
-(id)initWithEventCountersStorage:(id)arg0 saveInterval:(CGFloat)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)unarchiveEventCounters;
-(void)_removeCounterGroupForSpecifier:(id)arg0 ;
-(void)_save;
-(void)addObserver:(id)arg0 forEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)counterChanged;
-(void)forceSave;
-(void)incrementEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(void)incrementEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 withValue:(NSUInteger)arg2 ;
-(void)removeCounterGroupForName:(id)arg0 ;
-(void)removeCounterGroupForSpecifier:(id)arg0 ;
-(void)removeCounterGroupsBasedOnPredicate:(id)arg0 ;
-(void)resetAllEventCounters;
-(void)resetEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(void)resetEventCountersForRequestGroup:(id)arg0 ;


@end


#endif