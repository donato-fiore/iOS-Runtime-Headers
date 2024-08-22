// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYDUMMYTIMELINEPRODUCER_H
#define PXSTORYDUMMYTIMELINEPRODUCER_H

@protocol PXStoryTimelineProducer;

#import <Foundation/Foundation.h>


@interface PXStoryDummyTimelineProducer : NSObject <PXStoryTimelineProducer>



@property (nonatomic) ? fixedDuration; // ivar: _fixedDuration


-(id)createTimelineWithConfiguration:(id)arg0 detailsFraction:(CGFloat)arg1 ;
-(id)requestTimelineWithConfiguration:(id)arg0 options:(NSUInteger)arg1 resultHandler:(id)arg2 ;


@end


#endif