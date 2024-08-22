// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CILOCALCONTRAST_H
#define CILOCALCONTRAST_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CILocalContrast : CIFilter {
    CIImage *inputImage;
    NSNumber *inputStrength;
    NSNumber *inputScale;
}




+(id)customAttributes;
-(id)_kernelLocalContrast;
-(id)outputImage;


@end


#endif