// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDTILINGLIMITEDQUEUE_H
#define TSDTILINGLIMITEDQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSDTilingLimitedQueue : NSObject {
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    NSUInteger mLimit;
    NSUInteger mReaderCount;
    os_unfair_lock_s mSpinLock;
}




-(id)init;
-(id)initWithLimit:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)performAsync:(id)arg0 ;


@end


#endif