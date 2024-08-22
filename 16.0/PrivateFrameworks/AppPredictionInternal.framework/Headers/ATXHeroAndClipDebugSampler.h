// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHEROANDCLIPDEBUGSAMPLER_H
#define ATXHEROANDCLIPDEBUGSAMPLER_H

@class NSArray;
@protocol ATXHeroAndClipEventSamplerProtocol;

#import <Foundation/Foundation.h>


@interface ATXHeroAndClipDebugSampler : NSObject <ATXHeroAndClipEventSamplerProtocol>

 {
    NSArray *_indicesToSample;
}




-(id)init;
-(id)initWithSampleIndices:(id)arg0 ;
-(id)sampleEvents:(id)arg0 numToSample:(NSUInteger)arg1 ;


@end


#endif