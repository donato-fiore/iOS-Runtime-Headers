// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PFLOCK_H
#define _PFLOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface _PFLock : NSObject <NSLocking>

 {
    _opaque_pthread_mutex_t _lock;
    *_opaque_pthread_t _owner;
    NSUInteger _count;
}




+(void)initialize;
-(BOOL)tryLock;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;


@end


#endif