// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIEDGES_H
#define CIEDGES_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIEdges : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputIntensity; // ivar: inputIntensity


+(id)customAttributes;
-(id)_CIEdges;
-(id)outputImage;


@end


#endif