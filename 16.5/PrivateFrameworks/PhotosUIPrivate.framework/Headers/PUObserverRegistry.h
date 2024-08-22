// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUOBSERVERREGISTRY_H
#define PUOBSERVERREGISTRY_H

@class NSPointerArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PUObserverRegistry : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_observerQueue; // ivar: __observerQueue
@property (readonly, nonatomic) NSPointerArray *_observers; // ivar: __observers


-(id)init;
-(void)enumerateObserversWithBlock:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif