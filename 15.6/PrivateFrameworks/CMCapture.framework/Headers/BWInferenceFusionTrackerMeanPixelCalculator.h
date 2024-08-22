// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWINFERENCEFUSIONTRACKERMEANPIXELCALCULATOR_H
#define BWINFERENCEFUSIONTRACKERMEANPIXELCALCULATOR_H

@class MPSImageStatisticsMean;
@protocol MTLCommandQueue, MTLTexture;

#import <Foundation/Foundation.h>


@interface BWInferenceFusionTrackerMeanPixelCalculator : NSObject {
    id<MTLCommandQueue> *_commandQueue;
    MPSImageStatisticsMean *_meanFilter;
    id<MTLTexture> *_meanTexture;
}




-(id)initWithCommandQueue:(id)arg0 ;
-(void)asyncMeanPixelForBuffer:(struct __CVBuffer *)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif