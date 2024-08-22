// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSKEYEDOBSERVABLE_H
#define UNSKEYEDOBSERVABLE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UNSKeyedObservable : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSMutableDictionary *_observersByKey;
}




-(id)_observersForKey:(id)arg0 ;
-(id)initWithQueue:(id)arg0 callOutQueue:(id)arg1 ;
-(void)_callOutQueue_notifyObserversKey:(id)arg0 usingBlock:(id)arg1 ;
-(void)_queue_addObserver:(id)arg0 forKey:(id)arg1 ;
-(void)_queue_removeObserver:(id)arg0 forKey:(id)arg1 ;
-(void)addObserver:(id)arg0 forKey:(id)arg1 ;
-(void)notifyObserversKey:(id)arg0 usingBlock:(id)arg1 ;
-(void)removeObserver:(id)arg0 forKey:(id)arg1 ;


@end


#endif