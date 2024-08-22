// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIREDUCTIONFILTER_H
#define CIREDUCTIONFILTER_H



#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIReductionFilter : CIFilter

@property (retain, nonatomic) CIVector *inputExtent; // ivar: inputExtent
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_reduceCrop;
-(id)offsetAndCrop;
-(id)outputImage;


@end


#endif