// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CISDOFHIGHLIGHTRECOVERY_H
#define CISDOFHIGHLIGHTRECOVERY_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CISDOFHighlightRecovery : CIFilter

@property (retain) NSNumber *inputApertureScaling; // ivar: inputApertureScaling
@property (retain) CIVector *inputBlurRadius; // ivar: inputBlurRadius
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) NSNumber *inputIterations; // ivar: inputIterations
@property (retain) NSNumber *inputMaxBlur; // ivar: inputMaxBlur
@property (retain) CIVector *inputMaxIntensity; // ivar: inputMaxIntensity
@property (retain) CIVector *inputMinIntensity; // ivar: inputMinIntensity
@property (retain) NSNumber *inputScale; // ivar: inputScale


+(id)customAttributes;
-(id)outputImage;


@end


#endif