// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIIPTHUECHROMAFILTER_H
#define PIIPTHUECHROMAFILTER_H

@class CIFilter;



@interface PIIPTHueChromaFilter : CIFilter



+(id)convertHueChromaImageToIPT:(id)arg0 ;
+(id)convertHueChromaImageToRGB:(id)arg0 ;
+(id)convertIPTImageToHueChroma:(id)arg0 ;
+(id)convertIPTImageToRGB:(id)arg0 ;
+(id)convertRGBImageToHueChroma:(id)arg0 ;
+(id)convertRGBImageToIPT:(id)arg0 ;
+(id)denormalizeHueChromaImage:(id)arg0 ;
+(id)hueChromaKernels;
+(id)kernelNamed:(id)arg0 ;
+(id)normalizeHueChromaImage:(id)arg0 ;
+(id)scaleHueKernel;


@end


#endif