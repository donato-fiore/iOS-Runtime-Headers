// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIPERSONSEGMENTATION_H
#define CIPERSONSEGMENTATION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPersonSegmentation : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputQualityLevel; // ivar: inputQualityLevel


+(id)customAttributes;
-(id)outputImage;


@end


#endif