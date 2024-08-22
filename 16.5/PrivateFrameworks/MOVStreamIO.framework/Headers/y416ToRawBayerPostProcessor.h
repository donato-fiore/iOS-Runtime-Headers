// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef Y416TORAWBAYERPOSTPROCESSOR_H
#define Y416TORAWBAYERPOSTPROCESSOR_H



#import "DefaultPostProcessor.h"
#import "MIOPixelBufferPool.h"

@interface y416ToRawBayerPostProcessor : DefaultPostProcessor {
    MIOPixelBufferPool *_pool;
}




-(struct __CVBuffer *)processedPixelBufferFrom:(struct __CVBuffer *)arg0 metadata:(id)arg1 error:(*id)arg2 ;
-(unsigned int)processedPixelFormat;


@end


#endif