// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COCLIENTOBSERVERSET_H
#define COCLIENTOBSERVERSET_H

@class NSMapTable, NSDictionary;

#import <Foundation/Foundation.h>


@interface COClientObserverSet : NSObject {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) NSMapTable *observers; // ivar: _observers
@property (copy, nonatomic) NSDictionary *registrations; // ivar: _registrations


-(id)clientObserversForNotificationName:(id)arg0 ;
-(id)clientObserversForXPCConnection:(id)arg0 ;
-(id)init;
-(void)_withLock:(id)arg0 ;
-(void)addClientObserver:(id)arg0 forNotificationName:(id)arg1 ;
-(void)removeClientObserver:(id)arg0 forNotificationName:(id)arg1 ;


@end


#endif