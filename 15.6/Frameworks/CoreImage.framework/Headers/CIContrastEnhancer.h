// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CICONTRASTENHANCER_H
#define CICONTRASTENHANCER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIContrastEnhancer : CIFilter {
    CIImage *inputImage;
}


@property (retain, nonatomic) NSNumber *inputIntensity; // ivar: inputIntensity
@property (retain, nonatomic) NSNumber *inputLocal; // ivar: inputLocal
@property (retain, nonatomic) NSNumber *inputPerceptual; // ivar: inputPerceptual
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale


+(id)customAttributes;
-(id)outputImage;


@end


#endif