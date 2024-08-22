// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CILOCALLIGHTFILTER_H
#define CILOCALLIGHTFILTER_H

@class NSData, NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CILocalLightFilter : CIFilter {
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
-(id)_polyKernel;
-(id)_shadowKernel;
-(id)outputImage;


@end


#endif