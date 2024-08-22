// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDISPARITYPREPROCV3_H
#define CIDISPARITYPREPROCV3_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CIDisparityPreprocV3 : CIFilter

@property (retain) CIImage *inputAlphaImage; // ivar: inputAlphaImage
@property (retain) CIImage *inputImage; // ivar: inputImage


-(id)outputImage;
-(id)preprocKernel;
-(id)preprocKernelNoAlpha;


@end


#endif