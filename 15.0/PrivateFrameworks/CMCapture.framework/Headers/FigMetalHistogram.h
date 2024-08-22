// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGMETALHISTOGRAM_H
#define FIGMETALHISTOGRAM_H

@class FigMetalContext;

#import <Foundation/Foundation.h>


@interface FigMetalHistogram : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState>" _pipelineStates;
}




-(id)initWithMetalContext:(id)arg0 ;
-(int)_initShaders;
-(int)singleComponentCPUAverageInputPixelBuffer:(struct __CVBuffer *)arg0 validRect:(struct CGRect )arg1 outputAverage:(*float)arg2 ;
-(int)singleComponentCPUHistogramInputPixelBuffer:(struct __CVBuffer *)arg0 validRect:(struct CGRect )arg1 outputHistogram:(struct ? *)arg2 ;
-(int)singleComponentCPUHistogramInputPixelBuffer:(struct __CVBuffer *)arg0 validRect:(struct CGRect )arg1 subSampleX:(unsigned int)arg2 subSampleY:(unsigned int)arg3 outputHistogram:(struct ? *)arg4 ;
-(int)singleComponentGPUAverageInputPixelBuffer:(struct __CVBuffer *)arg0 validRect:(struct CGRect )arg1 outputAverage:(*float)arg2 ;
-(int)singleComponentGPUHistogramInputPixelBuffer:(struct __CVBuffer *)arg0 validRect:(struct CGRect )arg1 outputHistogram:(struct ? *)arg2 ;


@end


#endif