// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFMUTEX_H
#define _PFMUTEX_H

@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface _PFMutex : NSObject <NSLocking>

 {
    _opaque_pthread_mutex_t _lock;
}




+(void)initialize;
-(BOOL)tryLock;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;


@end


#endif