// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKTHREADSAFEOBSERVERMANAGER_H
#define NPKTHREADSAFEOBSERVERMANAGER_H



#import "NPKObserverManager.h"

@interface NPKThreadSafeObserverManager : NPKObserverManager {
    os_unfair_lock_s _internalLock;
}




-(id)init;
-(void)enumerateObserversUsingBlock:(id)arg0 ;
-(void)registerObserver:(id)arg0 withRelativePriority:(NSUInteger)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif