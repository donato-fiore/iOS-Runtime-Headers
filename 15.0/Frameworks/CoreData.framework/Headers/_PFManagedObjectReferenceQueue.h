// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFMANAGEDOBJECTREFERENCEQUEUE_H
#define _PFMANAGEDOBJECTREFERENCEQUEUE_H


#import <Foundation/Foundation.h>

#import "NSManagedObjectContext.h"

@interface _PFManagedObjectReferenceQueue : NSObject {
    int _cd_rc;
    os_unfair_lock_s _spinLock;
    int _flags;
    int _signalRunloop;
    NSManagedObjectContext *_context;
    *__CFArray _queue;
    *__CFRunLoopObserver _rlObserver;
    int _processing;
}




-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(id)retain;
-(void)dealloc;
-(void)release;


@end


#endif