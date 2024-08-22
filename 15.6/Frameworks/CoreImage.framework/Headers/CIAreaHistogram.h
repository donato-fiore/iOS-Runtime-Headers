// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIAREAHISTOGRAM_H
#define CIAREAHISTOGRAM_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIAreaHistogram : CIFilter

@property (retain, nonatomic) NSNumber *inputCount; // ivar: inputCount
@property (retain, nonatomic) CIVector *inputExtent; // ivar: inputExtent
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale


+(id)customAttributes;
-(BOOL)_inputsAreOK;
-(id)outputData;
-(id)outputImage;
-(id)outputImageMPS;
-(id)outputImageNonMPS;
-(struct IRect )_netExtent;


@end


#endif