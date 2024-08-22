// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CISHARPENLUMINANCE_H
#define CISHARPENLUMINANCE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CISharpenLuminance : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius
@property (retain, nonatomic) NSNumber *inputSharpness; // ivar: inputSharpness


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernel;
-(id)outputImage;


@end


#endif