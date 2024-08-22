// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNRECURSIVELOCK_H
#define SCNRECURSIVELOCK_H


#import <Foundation/Foundation.h>


@interface SCNRecursiveLock : NSObject {
    _opaque_pthread_mutex_t _mutex;
}




-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;


@end


#endif