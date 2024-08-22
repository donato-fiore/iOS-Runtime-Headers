// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CICOLORCUBESMIXEDWITHMASK_H
#define CICOLORCUBESMIXEDWITHMASK_H

@class NSData, NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIColorCubesMixedWithMask : CIFilter

@property (retain, nonatomic) id *inputColorSpace; // ivar: inputColorSpace
@property (copy, nonatomic) NSData *inputCube0Data; // ivar: inputCube0Data
@property (copy, nonatomic) NSData *inputCube1Data; // ivar: inputCube1Data
@property (retain, nonatomic) NSNumber *inputCubeDimension; // ivar: inputCubeDimension
@property (copy, nonatomic) NSNumber *inputExtrapolate; // ivar: inputExtrapolate
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputMaskImage; // ivar: inputMaskImage


+(id)customAttributes;
-(BOOL)_checkInputs;
-(id)outputImage;


@end


#endif