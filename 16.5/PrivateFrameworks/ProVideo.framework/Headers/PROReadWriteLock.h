// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PROREADWRITELOCK_H
#define PROREADWRITELOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface PROReadWriteLock : NSObject <NSLocking>

 {
    _opaque_pthread_rwlock_t lock;
}




-(id)init;
-(void)dealloc;
-(void)lock;
-(void)lockForReading;
-(void)lockForWriting;
-(void)unlock;


@end


#endif