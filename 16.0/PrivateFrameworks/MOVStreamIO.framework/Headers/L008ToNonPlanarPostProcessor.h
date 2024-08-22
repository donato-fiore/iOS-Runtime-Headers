// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef L008TONONPLANARPOSTPROCESSOR_H
#define L008TONONPLANARPOSTPROCESSOR_H

@protocol MOVStreamPostProcessorSizeAdjusting;


#import "DefaultPostProcessor.h"

@interface L008ToNonPlanarPostProcessor : DefaultPostProcessor <MOVStreamPostProcessorSizeAdjusting>

 {
    *__CVPixelBufferPool _pool;
}




-(NSUInteger)adjustedWidthForWidth:(NSUInteger)arg0 ;
-(struct __CVBuffer *)processedPixelBufferFrom:(struct __CVBuffer *)arg0 metadata:(id)arg1 error:(*id)arg2 ;
-(unsigned int)processedPixelFormat;
-(void)dealloc;


@end


#endif