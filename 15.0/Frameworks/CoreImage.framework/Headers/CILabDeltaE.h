// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CILABDELTAE_H
#define CILABDELTAE_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CILabDeltaE : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputImage2; // ivar: inputImage2


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif