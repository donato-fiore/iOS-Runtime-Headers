// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVVIDEOPERFORMANCEMETRICS_H
#define AVVIDEOPERFORMANCEMETRICS_H


#import <Foundation/Foundation.h>

#import "AVVideoPerformanceMetricsInternal.h"

@interface AVVideoPerformanceMetrics : NSObject {
    AVVideoPerformanceMetricsInternal *_performanceMetricsInternal;
}


@property (readonly, nonatomic) NSUInteger numberOfCorruptedVideoFrames;
@property (readonly, nonatomic) NSUInteger numberOfDisplayCompositedVideoFrames;
@property (readonly, nonatomic) NSUInteger numberOfDroppedVideoFrames;
@property (readonly, nonatomic) NSUInteger numberOfNonDisplayCompositedVideoFrames;
@property (readonly, nonatomic) CGFloat totalFrameDelay;
@property (readonly, nonatomic) NSUInteger totalNumberOfVideoFrames;


-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif