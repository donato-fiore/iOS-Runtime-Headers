// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDISSOLVETRANSITION_H
#define CIDISSOLVETRANSITION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIDissolveTransition : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputTargetImage; // ivar: inputTargetImage
@property (retain, nonatomic) NSNumber *inputTime; // ivar: inputTime


+(id)customAttributes;
-(id)_fadeKernel;
-(id)_kernel;
-(id)outputImage;


@end


#endif