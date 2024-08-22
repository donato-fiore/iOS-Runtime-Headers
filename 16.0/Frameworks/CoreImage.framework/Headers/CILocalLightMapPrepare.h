// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CILOCALLIGHTMAPPREPARE_H
#define CILOCALLIGHTMAPPREPARE_H

@class NSData, NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CILocalLightMapPrepare : CIFilter {
    NSData *inputLightMap;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    CIImage *inputGuideImage;
}




+(id)customAttributes;
-(id)outputImage;


@end


#endif