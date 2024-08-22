// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COOBSERVERSET_H
#define COOBSERVERSET_H

@class NSOperationQueue, NSHashTable;

#import <Foundation/Foundation.h>


@interface COObserverSet : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (readonly, nonatomic) NSHashTable *registrations; // ivar: _registrations


-(id)addObserverForName:(id)arg0 observable:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3 ;
-(id)init;
-(id)registeredNames;
-(void)_withLock:(id)arg0 ;
-(void)postNotification:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif