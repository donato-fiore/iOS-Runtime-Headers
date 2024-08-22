// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCBLOCKSCHEDULER_H
#define RCBLOCKSCHEDULER_H

@class NSMutableArray, NSDate;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface RCBlockScheduler : NSObject {
    NSMutableArray *_blocks;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSUInteger _start;
    id *_schedulerBlock;
    BOOL _suspended;
}


@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)resume;
-(void)scheduleBlock:(id)arg0 ;
-(void)suspend;


@end


#endif