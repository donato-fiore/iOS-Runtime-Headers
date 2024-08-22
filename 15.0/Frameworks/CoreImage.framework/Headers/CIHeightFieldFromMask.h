// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIHEIGHTFIELDFROMMASK_H
#define CIHEIGHTFIELDFROMMASK_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIHeightFieldFromMask : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius


+(id)customAttributes;
-(id)_CIResetalpha;
-(id)outputImage;


@end


#endif