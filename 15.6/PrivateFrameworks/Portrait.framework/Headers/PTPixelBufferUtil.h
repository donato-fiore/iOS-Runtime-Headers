// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTPIXELBUFFERUTIL_H
#define PTPIXELBUFFERUTIL_H


#import <Foundation/Foundation.h>


@interface PTPixelBufferUtil : NSObject



+(BOOL)_getPixelFormatsForType:(unsigned int)arg0 luma:(*NSUInteger)arg1 chroma:(*NSUInteger)arg2 ;
+(BOOL)getMetalLumaAndChromaFormats:(struct __CVBuffer *)arg0 luma:(*NSUInteger)arg1 chroma:(*NSUInteger)arg2 ;
+(BOOL)isCompressed:(struct __CVBuffer *)arg0 ;
+(BOOL)isPixelBuffer10Bit:(struct __CVBuffer *)arg0 ;
+(BOOL)isPixelBufferVideoRange:(struct __CVBuffer *)arg0 ;
+(NSUInteger)getNoConcurrentAccessHint:(struct __CVBuffer *)arg0 ;
+(id)getMTLTextureDescriptor:(struct __CVBuffer *)arg0 device:(id)arg1 ;
+(id)getMTLTextureFromPixelBuffer:(struct __CVBuffer *)arg0 device:(id)arg1 ;
+(unsigned int)getCVPixelBufferGetPixelFormatType:(NSUInteger)arg0 ;
+(void)pixelbufferToLumaChroma:(id)arg0 pixelbuffer:(struct __CVBuffer *)arg1 outLuma:(*id)arg2 outChroma:(*id)arg3 read:(BOOL)arg4 write:(BOOL)arg5 ;


@end


#endif