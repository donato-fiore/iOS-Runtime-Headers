// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYDUMMYTRIGGEREDTIMELINEPRODUCER_H
#define PXSTORYDUMMYTRIGGEREDTIMELINEPRODUCER_H

@protocol PXStoryTimelineProducer;

#import <Foundation/Foundation.h>

#import "PXStoryTimelineProducerConfiguration.h"
#import "PXStoryDummyTimelineProducer.h"

@interface PXStoryDummyTriggeredTimelineProducer : NSObject <PXStoryTimelineProducer>



@property (retain, nonatomic) PXStoryTimelineProducerConfiguration *configuration; // ivar: _configuration
@property (nonatomic) NSInteger currentIteration; // ivar: _currentIteration
@property (readonly, nonatomic) NSInteger numberOfIterations; // ivar: _numberOfIterations
@property (copy, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, nonatomic) PXStoryDummyTimelineProducer *timelineProducer; // ivar: _timelineProducer


-(id)init;
-(id)initWithNumberOfIterations:(NSInteger)arg0 ;
-(id)requestTimelineWithConfiguration:(id)arg0 options:(NSUInteger)arg1 resultHandler:(id)arg2 ;
-(void)trigger;


@end


#endif