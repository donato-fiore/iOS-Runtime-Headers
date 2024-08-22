// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTOBSERVERSTORE_H
#define MTOBSERVERSTORE_H

@class NSHashTable;
@protocol NAScheduler;

#import <Foundation/Foundation.h>


@interface MTObserverStore : NSObject

@property (retain, nonatomic) NSObject<NAScheduler> *callbackScheduler; // ivar: _callbackScheduler
@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) os_unfair_lock_s observersLock; // ivar: _observersLock


-(BOOL)containsObserver:(id)arg0 ;
-(id)init;
-(id)initWithCallbackScheduler:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 wasFirst:(*BOOL)arg1 ;
-(void)enumerateObserversWithBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 wasLast:(*BOOL)arg1 ;


@end


#endif