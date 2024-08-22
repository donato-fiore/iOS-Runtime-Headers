// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPRECOMPOSEDTIMELINEPRODUCER_H
#define PXSTORYPRECOMPOSEDTIMELINEPRODUCER_H

@protocol PXStoryTimelineProducer;

#import <Foundation/Foundation.h>


@interface PXStoryPrecomposedTimelineProducer : NSObject <PXStoryTimelineProducer>

 {
    ? _clipCompositionContext;
    ? _noKenBurnsEffectParameters;
}


@property (nonatomic) NSUInteger timelineKind; // ivar: _timelineKind


-(id)_segmentsForTimelineKind:(NSUInteger)arg0 spec:(id)arg1 ;
-(id)createTimelineWithConfiguration:(id)arg0 ;
-(id)initWithTimelineKind:(NSUInteger)arg0 ;
-(id)requestTimelineWithConfiguration:(id)arg0 options:(NSUInteger)arg1 resultHandler:(id)arg2 ;


@end


#endif