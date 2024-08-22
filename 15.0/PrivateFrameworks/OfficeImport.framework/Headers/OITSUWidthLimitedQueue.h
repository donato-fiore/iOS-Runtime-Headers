// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSUWIDTHLIMITEDQUEUE_H
#define OITSUWIDTHLIMITEDQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OITSUWidthLimitedQueue : NSObject {
    int mReaderCount;
    int mLimit;
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    os_unfair_lock_s mUnfairLock;
}




-(id)init;
-(id)initWithLimit:(NSUInteger)arg0 ;
-(id)targetDispatchQueue;
-(void)dealloc;
-(void)performAsync:(id)arg0 ;
-(void)performSync:(id)arg0 ;


@end


#endif