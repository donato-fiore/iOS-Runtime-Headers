// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDUNFAIRLOCK_H
#define ASDUNFAIRLOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface ASDUnfairLock : NSObject <NSLocking>

 {
    os_unfair_lock_s _lock;
}




-(id)init;
-(void)lock;
-(void)unlock;


@end


#endif