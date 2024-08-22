// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYDUMMYPROGRESSIVETIMELINEPRODUCER_H
#define PXSTORYDUMMYPROGRESSIVETIMELINEPRODUCER_H

@protocol PXStoryTimelineProducer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXStoryDummyTimelineProducer.h"

@interface PXStoryDummyProgressiveTimelineProducer : NSObject <PXStoryTimelineProducer>



@property (nonatomic) CGFloat delayBetweenIterations; // ivar: _delayBetweenIterations
@property (nonatomic) NSInteger numberOfIterations; // ivar: _numberOfIterations
@property (readonly, nonatomic) PXStoryDummyTimelineProducer *timelineProducer; // ivar: _timelineProducer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(id)requestTimelineWithConfiguration:(id)arg0 options:(NSUInteger)arg1 resultHandler:(id)arg2 ;


@end


#endif