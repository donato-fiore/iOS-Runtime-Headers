// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNSCONTENTPROTECTIONMANAGER_H
#define UNSCONTENTPROTECTIONMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSKeyedObservable.h"

@interface UNSContentProtectionManager : NSObject {
    NSInteger _contentProtectionState;
    BOOL _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNSKeyedObservable *_observable;
}




-(BOOL)deviceUnlockedSinceBoot;
-(BOOL)isProtectedDataAvailable;
-(NSInteger)_queue_keyBagLockState;
-(NSInteger)_queue_observedState;
-(NSInteger)observedState;
-(id)classCStrategy;
-(id)classDStrategy;
-(id)contentProtectionStrategyForMinimumProtection:(id)arg0 ;
-(id)init;
-(void)_queue_adjustContentProtectionStateWithBlock:(id)arg0 ;
-(void)addContentProtectionObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeContentProtectionObserver:(id)arg0 ;


@end


#endif