// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDEYEGRADIENT_H
#define REDEYEGRADIENT_H



#import "CIFilter.h"
#import "CIImage.h"

@interface RedEyeGradient : CIFilter {
    CIImage *inputImage;
}




-(id)outputImage;


@end


#endif