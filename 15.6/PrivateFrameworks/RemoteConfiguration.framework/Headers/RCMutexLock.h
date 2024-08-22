// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCMUTEXLOCK_H
#define RCMUTEXLOCK_H

@protocol RCLocking;

#import <Foundation/Foundation.h>


@interface RCMutexLock : NSObject <RCLocking>

 {
    _opaque_pthread_mutex_t _lock;
}




-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)lock;
-(void)performWithLockSync:(id)arg0 ;
-(void)unlock;


@end


#endif