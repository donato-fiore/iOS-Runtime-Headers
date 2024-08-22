// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CICOLORABSOLUTEDIFFERENCE_H
#define CICOLORABSOLUTEDIFFERENCE_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CIColorAbsoluteDifference : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputImage2; // ivar: inputImage2


+(id)customAttributes;
-(id)outputImage;


@end


#endif