// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCFILECOORDINATORCONTEXT_H
#define BRCFILECOORDINATORCONTEXT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "brc_task_tracker.h"

@interface BRCFileCoordinatorContext : NSObject

@property (nonatomic) int endTracingCode; // ivar: _endTracingCode
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSUInteger sections; // ivar: _sections
@property (nonatomic) int startTracingCode; // ivar: _startTracingCode
@property (retain, nonatomic) brc_task_tracker *tracker; // ivar: _tracker


-(id)initWithTracker:(id)arg0 queue:(id)arg1 startCode:(int)arg2 endCode:(int)arg3 ;


@end


#endif