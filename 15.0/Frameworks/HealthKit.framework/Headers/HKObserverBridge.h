// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKOBSERVERBRIDGE_H
#define HKOBSERVERBRIDGE_H

@class NSMapTable, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HKObserverBridge : NSObject {
    NSMapTable *_observerBlocksByKeyByObserver;
    NSMutableDictionary *_observersByKey;
    os_unfair_lock_s _lock;
}




-(BOOL)notifyObserversOfChangeForKey:(id)arg0 newValue:(id)arg1 ;
-(id)init;
-(id)makeAndRegisterBridgedObserverForKey:(id)arg0 handle:(id)arg1 ;
-(void)dealloc;
-(void)registerObserver:(id)arg0 forKey:(id)arg1 newValueHandler:(id)arg2 ;
-(void)unregisterBridgedObserver:(id)arg0 forKey:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 forKey:(id)arg1 ;


@end


#endif