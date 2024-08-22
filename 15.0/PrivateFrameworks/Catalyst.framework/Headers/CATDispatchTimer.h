// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATDISPATCHTIMER_H
#define CATDISPATCHTIMER_H

@class NSString;
@protocol CATResettableTimer, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CATDispatchTimer : NSObject <CATResettableTimer>

 {
    NSString *mIdentifier;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    CGFloat mTimeInterval;
    NSUInteger mTotalFires;
    BOOL mFiresForever;
    id *mFireHandler;
    NSObject<OS_dispatch_source> *mTimerSource;
    NSUInteger mFireCount;
}




+(id)scheduledTimerWithIdentifier:(id)arg0 workQueue:(id)arg1 delegateQueue:(id)arg2 timeInterval:(CGFloat)arg3 totalFires:(NSUInteger)arg4 firesForever:(BOOL)arg5 fireHandler:(id)arg6 ;
-(id)initWithIdentifier:(id)arg0 workQueue:(id)arg1 delegateQueue:(id)arg2 timeInterval:(CGFloat)arg3 totalFires:(NSUInteger)arg4 firesForever:(BOOL)arg5 fireHandler:(id)arg6 ;
-(void)dealloc;
-(void)invalidate;
-(void)reset;
-(void)resume;
-(void)timerDidFire;


@end


#endif