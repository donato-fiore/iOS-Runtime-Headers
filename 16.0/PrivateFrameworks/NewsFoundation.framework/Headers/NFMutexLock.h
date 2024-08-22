// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFMUTEXLOCK_H
#define NFMUTEXLOCK_H

@protocol NFLocking;

#import <Foundation/Foundation.h>


@interface NFMutexLock : NSObject <NFLocking>

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