// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __HMFOSUNFAIRRECURSIVELOCK_H
#define __HMFOSUNFAIRRECURSIVELOCK_H



#import "HMFUnfairLock.h"

@interface __HMFOSUnfairRecursiveLock : HMFUnfairLock {
    os_unfair_recursive_lock_s _internal;
    unsigned int _internalOptions;
}




-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)assertNotOwner;
-(void)assertOwner;
-(void)lock;
-(void)performBlock:(id)arg0 ;
-(void)unlock;


@end


#endif