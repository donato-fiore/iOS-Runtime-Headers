// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RAWBAYERPOSTPROCESSOR_H
#define RAWBAYERPOSTPROCESSOR_H



#import "DefaultPostProcessor.h"

@interface RawBayerPostProcessor : DefaultPostProcessor

@property (nonatomic) BOOL rawBayerMSBReplication; // ivar: _rawBayerMSBReplication


-(id)initWithOriginalPixelFormat:(unsigned int)arg0 rawBayerMSBReplication:(BOOL)arg1 ;
-(struct __CVBuffer *)processedPixelBufferFrom:(struct __CVBuffer *)arg0 metadata:(id)arg1 error:(*id)arg2 ;
-(unsigned int)processedPixelFormat;


@end


#endif