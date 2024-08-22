// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCUNFAIRLOCK_H
#define RCUNFAIRLOCK_H

@protocol RCLocking;

#import <Foundation/Foundation.h>


@interface RCUnfairLock : NSObject <RCLocking>

 {
    os_unfair_lock_s _unfairLock;
    unsigned int _unfairLockOptions;
}




-(id)init;
-(id)initWithOptions:(NSInteger)arg0 ;
-(void)lock;
-(void)performWithLockSync:(id)arg0 ;
-(void)unlock;


@end


#endif