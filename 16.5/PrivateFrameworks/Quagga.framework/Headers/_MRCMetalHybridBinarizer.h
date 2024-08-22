// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRCMETALHYBRIDBINARIZER_H
#define _MRCMETALHYBRIDBINARIZER_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "_MRCMetalContext.h"

@interface _MRCMetalHybridBinarizer : NSObject {
    _MRCMetalContext *_metalContext;
    id<MTLComputePipelineState> *_calcuateBlackPointsPipelineState;
    id<MTLComputePipelineState> *_fixBlackPointsPipelineState;
    id<MTLComputePipelineState> *_thresholdPipelineState;
}




-(id)init;
-(id)initWithMetalContext:(id)arg0 error:(*id)arg1 ;
-(id)newTextureByBinarizingPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;


@end


#endif