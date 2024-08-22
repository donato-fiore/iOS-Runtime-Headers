// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CISTRETCH_H
#define CISTRETCH_H



#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIStretch : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputPoint; // ivar: inputPoint
@property (retain, nonatomic) CIVector *inputSize; // ivar: inputSize


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(struct CGRect )computeDOD:(struct vec4 )arg0 ;
-(void)setDefaults;


@end


#endif