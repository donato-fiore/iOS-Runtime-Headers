// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUNFAIRLOCK_H
#define CNUNFAIRLOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface CNUnfairLock : NSObject <NSLocking>

 {
    os_unfair_lock_s _os_unfair_lock;
}




-(BOOL)tryLock;
-(id)description;
-(id)init;
-(void)assertCurrentThreadIsNotOwner;
-(void)assertCurrentThreadIsOwner;
-(void)lock;
-(void)unlock;


@end


#endif