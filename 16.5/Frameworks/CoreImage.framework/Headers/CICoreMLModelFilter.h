// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CICOREMLMODELFILTER_H
#define CICOREMLMODELFILTER_H

@class NSNumber, MLModel;


#import "CIFilter.h"
#import "CIImage.h"

@interface CICoreMLModelFilter : CIFilter

@property (retain, nonatomic) NSNumber *inputHeadIndex; // ivar: inputHeadIndex
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) MLModel *inputModel; // ivar: inputModel
@property (retain, nonatomic) NSNumber *inputSoftmaxNormalization; // ivar: inputSoftmaxNormalization


+(id)customAttributes;
-(id)outputImage;


@end


#endif