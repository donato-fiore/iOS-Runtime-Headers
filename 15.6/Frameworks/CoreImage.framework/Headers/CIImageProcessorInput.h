// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIIMAGEPROCESSORINPUT_H
#define CIIMAGEPROCESSORINPUT_H

@protocol CIImageProcessorInput, MTLTexture;


#import "CIImageProcessorInOut.h"

@interface CIImageProcessorInput : CIImageProcessorInOut <CIImageProcessorInput>



@property (readonly, nonatomic) *void baseAddress;
@property (readonly, nonatomic) NSUInteger bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) NSObject<MTLTexture> *metalTexture;
@property (readonly, nonatomic) *__CVBuffer pixelBuffer;
@property (readonly, nonatomic) CGRect region;
@property (readonly, nonatomic) *__IOSurface surface;


-(id)initWithSurface:(struct __IOSurface *)arg0 texture:(struct Texture )arg1 allowSRGB:(BOOL)arg2 bounds:(struct CGRect )arg3 context:(*void)arg4 ;
-(void)dealloc;


@end


#endif