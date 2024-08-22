// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDEVENTCOUNTERGROUP_H
#define HMDEVENTCOUNTERGROUP_H

@class HMFObject, NSDictionary, NSMutableDictionary;
@protocol HMDEventCounterContext;



@interface HMDEventCounterGroup : HMFObject {
    os_unfair_lock_s _lock;
}


@property (readonly, weak, nonatomic) NSObject<HMDEventCounterContext> *context; // ivar: _context
@property (readonly, nonatomic) NSDictionary *eventCounters;
@property (readonly, nonatomic) NSMutableDictionary *mutableEventCounters; // ivar: _mutableEventCounters
@property (readonly, nonatomic) NSUInteger summedEventCounters;


-(BOOL)_resetEventCounterForEventName:(id)arg0 ;
-(NSUInteger)fetchEventCounterForEventName:(id)arg0 ;
-(id)_getOrCreateEventCounterForEventName:(id)arg0 ;
-(id)initWithContext:(id)arg0 serializedEventCounters:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)addObserver:(id)arg0 forEventName:(id)arg1 ;
-(void)forceSave;
-(void)incrementEventCounterForEventName:(id)arg0 ;
-(void)incrementEventCounterForEventName:(id)arg0 withValue:(NSUInteger)arg1 ;
-(void)resetEventCounterForEventName:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif