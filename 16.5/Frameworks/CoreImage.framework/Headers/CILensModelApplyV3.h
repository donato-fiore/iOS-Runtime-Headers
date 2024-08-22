// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CILENSMODELAPPLYV3_H
#define CILENSMODELAPPLYV3_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CILensModelApplyV3 : CIFilter

@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) CIImage *inputLensModelImage; // ivar: inputLensModelImage


-(id)kernel;
-(id)outputImage;


@end


#endif