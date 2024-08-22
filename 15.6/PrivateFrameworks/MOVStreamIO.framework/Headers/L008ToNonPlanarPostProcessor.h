// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef L008TONONPLANARPOSTPROCESSOR_H
#define L008TONONPLANARPOSTPROCESSOR_H



#import "DefaultPostProcessor.h"

@interface L008ToNonPlanarPostProcessor : DefaultPostProcessor {
    *__CVPixelBufferPool _pool;
}




-(struct __CVBuffer *)processedPixelBufferFrom:(struct __CVBuffer *)arg0 metadata:(id)arg1 error:(*id)arg2 ;
-(unsigned int)processedPixelFormat;
-(void)dealloc;


@end


#endif