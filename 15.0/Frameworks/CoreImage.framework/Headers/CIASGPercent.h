// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIASGPERCENT_H
#define CIASGPERCENT_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CIASGPercent : CIFilter {
    CIImage *inputImage;
}




+(id)customAttributes;
-(id)outputImage;
-(id)outputImageScale:(CGFloat)arg0 outset:(int)arg1 hKernel:(id)arg2 vKernel:(id)arg3 ;


@end


#endif