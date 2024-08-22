// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICRWLOCK_H
#define ICRWLOCK_H


#import <Foundation/Foundation.h>


@interface ICRWLock : NSObject {
    _opaque_pthread_rwlock_t _rwLock;
}




-(id)init;
-(int)tryReadLock;
-(void)dealloc;
-(void)readLock;
-(void)unlock;
-(void)writeLock;


@end


#endif