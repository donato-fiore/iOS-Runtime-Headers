// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPTHROTTLER_H
#define HKSPTHROTTLER_H

@protocol NAScheduler;

#import <Foundation/Foundation.h>


@interface HKSPThrottler : NSObject {
    CGFloat _interval;
    id<NAScheduler> *_scheduler;
    id *_executeBlock;
    BOOL _hasBlockPending;
}




-(id)initWithInterval:(CGFloat)arg0 executeBlock:(id)arg1 ;
// -(id)initWithInterval:(CGFloat)arg0 executeBlock:(id)arg1 scheduler:(unk)arg2  ;
-(void)execute;


@end


#endif