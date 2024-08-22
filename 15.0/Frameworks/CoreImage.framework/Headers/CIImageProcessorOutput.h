// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIIMAGEPROCESSOROUTPUT_H
#define CIIMAGEPROCESSOROUTPUT_H

@protocol CIImageProcessorOutput, MTLCommandBuffer, MTLTexture;


#import "CIImageProcessorInOut.h"

@interface CIImageProcessorOutput : CIImageProcessorInOut <CIImageProcessorOutput>

 {
    id<MTLCommandBuffer> *_cmdBuffer;
}


@property (readonly, nonatomic) *void baseAddress;
@property (readonly, nonatomic) NSUInteger bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) NSObject<MTLCommandBuffer> *metalCommandBuffer;
@property (readonly, nonatomic) NSObject<MTLTexture> *metalTexture;
@property (readonly, nonatomic) *__CVBuffer pixelBuffer;
@property (readonly, nonatomic) CGRect region;
@property (readonly, nonatomic) *__IOSurface surface;


-(id)initWithSurface:(struct __IOSurface *)arg0 texture:(struct Texture )arg1 allowSRGB:(BOOL)arg2 bounds:(struct CGRect )arg3 context:(*void)arg4 ;
-(id)metalContext;
-(struct CGColorSpace *)workingColorSpace;
-(unsigned int)contextID;
-(void)dealloc;


@end


#endif