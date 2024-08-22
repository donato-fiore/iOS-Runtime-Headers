// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APUNFAIRRECURSIVELOCK_H
#define APUNFAIRRECURSIVELOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface APUnfairRecursiveLock : NSObject <NSLocking>

 {
    os_unfair_recursive_lock_s _lock;
}




-(id)init;
-(void)lock;
-(void)unlock;


@end


#endif