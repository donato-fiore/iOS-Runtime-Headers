// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOOBSERVERHASHTABLE_H
#define GEOOBSERVERHASHTABLE_H

@class Protocol, NSHashTable, NSMapTable, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GEOObserverHashTable : NSObject {
    Protocol *_protocol;
    NSHashTable *_observers;
    NSMapTable *_observerQueues;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, nonatomic) NSArray *allObservers;
@property (readonly, nonatomic) BOOL hasObservers;


-(id)description;
-(id)init;
-(id)initWithProtocol:(id)arg0 queue:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)enumerateObserversWithGroup:(id)arg0 visitor:(id)arg1 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif