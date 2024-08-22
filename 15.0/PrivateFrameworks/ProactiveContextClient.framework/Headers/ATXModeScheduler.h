// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODESCHEDULER_H
#define ATXMODESCHEDULER_H

@class NSDate;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXModeScheduler : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    id *_block;
    CGFloat _leewaySeconds;
    NSDate *_scheduledDate;
}




-(id)init;
// -(id)initWithQueue:(id)arg0 operationBlock:(id)arg1 andLeeway:(unk)arg2  ;
-(id)runAfterDelaySecondsIfNotYetScheduled:(CGFloat)arg0 ;
-(void)cancelPendingOperation;


@end


#endif