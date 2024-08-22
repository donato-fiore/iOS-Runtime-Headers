// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMPANDEDRAWBAYERPOSTPROCESSOR_H
#define COMPANDEDRAWBAYERPOSTPROCESSOR_H



#import "DefaultPostProcessor.h"

@interface CompandedRawBayerPostProcessor : DefaultPostProcessor



-(struct __CVBuffer *)processedPixelBufferFrom:(struct __CVBuffer *)arg0 metadata:(id)arg1 error:(*id)arg2 ;
-(unsigned int)processedPixelFormat;


@end


#endif