// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDEVENTCOUNTERSMANAGER_H
#define HMDEVENTCOUNTERSMANAGER_H

@class HMFObject, NSMutableDictionary;
@protocol HMDEventCounterContext, HMDEventCountersStoring, OS_dispatch_queue;


#import "HMDPersistentStore.h"

@interface HMDEventCountersManager : HMFObject <HMDEventCounterContext>

 {
    HMDPersistentStore *_persistentStore;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSMutableDictionary *counterGroups; // ivar: _counterGroups
@property (readonly, nonatomic) NSObject<HMDEventCountersStoring> *counterStorage; // ivar: _counterStorage
@property (nonatomic) CGFloat lastSaveTime; // ivar: _lastSaveTime
@property (readonly, nonatomic) CGFloat saveInterval; // ivar: _saveInterval
@property (readonly, nonatomic) id *timeSourceBlock; // ivar: _timeSourceBlock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)allowedSpecifierClasses;
+(id)sharedEventCountersManager;
-(NSUInteger)fetchAggregatedEventCountersForRequestGroup:(id)arg0 ;
-(NSUInteger)fetchEventCounterForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(id)_fetchAllEventCounters;
-(id)counterGroupForName:(id)arg0 ;
-(id)counterGroupForSpecifier:(id)arg0 ;
-(id)counterGroupsForPredicate:(id)arg0 ;
-(id)fetchAllEventCounters;
-(id)fetchEventCountersForRequestGroup:(id)arg0 ;
-(id)init;
-(id)initWithEventCountersStorage:(id)arg0 saveInterval:(CGFloat)arg1 timeSourceBlock:(id)arg2 ;
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