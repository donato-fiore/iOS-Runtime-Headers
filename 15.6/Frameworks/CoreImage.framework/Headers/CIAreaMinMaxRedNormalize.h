// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIAREAMINMAXREDNORMALIZE_H
#define CIAREAMINMAXREDNORMALIZE_H



#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIAreaMinMaxRedNormalize : CIFilter

@property (retain, nonatomic) CIVector *inputExtent; // ivar: inputExtent
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)outputImage;


@end


#endif