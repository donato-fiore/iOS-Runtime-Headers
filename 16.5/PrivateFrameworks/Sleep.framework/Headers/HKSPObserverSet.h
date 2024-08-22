// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPOBSERVERSET_H
#define HKSPOBSERVERSET_H

@class NSMapTable;
@protocol NAScheduler;

#import <Foundation/Foundation.h>


@interface HKSPObserverSet : NSObject

@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler; // ivar: _callbackScheduler
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSMapTable *observerRecords; // ivar: _observerRecords
@property (readonly, nonatomic) os_unfair_lock_s observersLock; // ivar: _observersLock


-(BOOL)containsObserver:(id)arg0 ;
-(id)description;
-(id)enumerateObserversWithFutureBlock:(id)arg0 ;
-(id)init;
-(id)initWithCallbackScheduler:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 callbackScheduler:(id)arg1 ;
-(void)addObserver:(id)arg0 callbackScheduler:(id)arg1 wasFirst:(*BOOL)arg2 ;
-(void)addObserver:(id)arg0 wasFirst:(*BOOL)arg1 ;
-(void)enumerateObserversWithBlock:(id)arg0 ;
-(void)removeAllObservers;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 wasLast:(*BOOL)arg1 ;


@end


#endif