// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASLOCK_H
#define _PASLOCK_H


#import <Foundation/Foundation.h>


@interface _PASLock : NSObject {
    _opaque_pthread_mutex_t _lock;
    *_opaque_pthread_t _owner;
    id *_guardedData;
}




-(id)guardedDataAssertingLockContext;
-(id)initWithGuardedData:(id)arg0 ;
-(id)unsafeGuardedData;
// -(unsigned char)runWithLockAcquired:(id)arg0 shouldContinueBlock:(unk)arg1  ;
-(unsigned char)tryWithLockAcquired:(id)arg0 ;
-(void)dealloc;
-(void)runWithLockAcquired:(id)arg0 ;


@end


#endif