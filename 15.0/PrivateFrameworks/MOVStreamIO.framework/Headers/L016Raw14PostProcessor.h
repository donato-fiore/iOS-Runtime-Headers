// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef L016RAW14POSTPROCESSOR_H
#define L016RAW14POSTPROCESSOR_H



#import "DefaultPostProcessor.h"

@interface L016Raw14PostProcessor : DefaultPostProcessor

@property (nonatomic) BOOL l010OutputFormatRAW14L016; // ivar: _l010OutputFormatRAW14L016


-(id)initWithOriginalPixelFormat:(unsigned int)arg0 l010OutputFormatRAW14L016:(BOOL)arg1 ;
-(struct __CVBuffer *)processedPixelBufferFrom:(struct __CVBuffer *)arg0 metadata:(id)arg1 error:(*id)arg2 ;
-(unsigned int)processedPixelFormat;


@end


#endif