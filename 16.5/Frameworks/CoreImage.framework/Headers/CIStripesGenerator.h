// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CISTRIPESGENERATOR_H
#define CISTRIPESGENERATOR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIColor.h"

@interface CIStripesGenerator : CIFilter

@property (retain, nonatomic) CIVector *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIColor *inputColor0; // ivar: inputColor0
@property (retain, nonatomic) CIColor *inputColor1; // ivar: inputColor1
@property (retain, nonatomic) NSNumber *inputSharpness; // ivar: inputSharpness
@property (retain, nonatomic) NSNumber *inputWidth; // ivar: inputWidth


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif