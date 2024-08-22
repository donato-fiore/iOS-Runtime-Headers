// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CILENSMODELAPPLY_H
#define CILENSMODELAPPLY_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CILensModelApply : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputLensModelParams; // ivar: inputLensModelParams


-(id)kernel;
-(id)outputImage;


@end


#endif