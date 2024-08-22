// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETETIMELINEPRODUCER_H
#define PXSTORYCONCRETETIMELINEPRODUCER_H

@protocol PXStoryTimelineProducer, OS_os_log;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteTimelineProducer : NSObject <PXStoryTimelineProducer>



@property (nonatomic) NSInteger initialProductionCountLimit; // ivar: _initialProductionCountLimit
@property (nonatomic) CGFloat initialProductionTimeLimit; // ivar: _initialProductionTimeLimit
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) NSInteger subsequentProductionCountLimit; // ivar: _subsequentProductionCountLimit
@property (nonatomic) CGFloat subsequentProductionSimulatedDelay; // ivar: _subsequentProductionSimulatedDelay
@property (nonatomic) CGFloat subsequentProductionTimeLimit; // ivar: _subsequentProductionTimeLimit


+(id)workQueue;
-(id)init;
-(id)requestTimelineWithConfiguration:(id)arg0 options:(NSUInteger)arg1 resultHandler:(id)arg2 ;


@end


#endif