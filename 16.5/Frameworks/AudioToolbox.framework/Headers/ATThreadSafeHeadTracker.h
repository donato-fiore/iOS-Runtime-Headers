// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATTHREADSAFEHEADTRACKER_H
#define ATTHREADSAFEHEADTRACKER_H


#import <Foundation/Foundation.h>


@interface ATThreadSafeHeadTracker : NSObject {
    shared_ptr<ThreadSafeHeadTracker> _impl;
}




-(id)initWithRateLimit:(float)arg0 detectPredictionAnchor:(BOOL)arg1 userContext:(*void)arg2 factory:(*unk)arg3 execution:(*unk)arg4 finalizer:(*unk)arg5 ;


@end


#endif