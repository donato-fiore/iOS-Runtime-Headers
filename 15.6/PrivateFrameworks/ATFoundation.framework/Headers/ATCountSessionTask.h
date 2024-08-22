// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATCOUNTSESSIONTASK_H
#define ATCOUNTSESSIONTASK_H

@class ATSessionTask;
@protocol OS_dispatch_source;



@interface ATCountSessionTask : ATSessionTask {
    NSUInteger _maxCount;
    NSUInteger _count;
    NSObject<OS_dispatch_source> *_timer;
}




-(id)initWithMaximumCount:(NSUInteger)arg0 ;
-(void)start;


@end


#endif