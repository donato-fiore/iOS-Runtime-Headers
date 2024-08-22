// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIFACESEGMENTATIONFILTER_H
#define CIFACESEGMENTATIONFILTER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIFaceSegmentationFilter : CIFilter

@property (retain, nonatomic) CIVector *inputFaceRect; // ivar: inputFaceRect
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputOrientation; // ivar: inputOrientation
@property (retain, nonatomic) NSNumber *inputRegion; // ivar: inputRegion


-(id)outputImage;


@end


#endif