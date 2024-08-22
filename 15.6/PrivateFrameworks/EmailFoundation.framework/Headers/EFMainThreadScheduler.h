// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFMAINTHREADSCHEDULER_H
#define EFMAINTHREADSCHEDULER_H



#import "EFQueueScheduler.h"

@interface EFMainThreadScheduler : EFQueueScheduler



-(BOOL)prefersImmediateExecution;
-(id)init;


@end


#endif