// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PILOCALLIGHTFILTERHDR_H
#define PILOCALLIGHTFILTERHDR_H

@class CIFilter, CIImage, NSData, NSNumber;



@interface PILocalLightFilterHDR : CIFilter {
    CIImage *inputImage;
    CIImage *inputGuideImage;
    NSData *inputLightMap;
    CIImage *inputLightMapImage;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    NSNumber *inputLocalLight;
    NSNumber *inputSmartShadows;
}




+(id)customAttributes;
-(id)_polyKernelHDR;
-(id)_shadowKernelHDR;
-(id)outputImage;


@end


#endif