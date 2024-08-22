// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CITILEFILTER_H
#define CITILEFILTER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CITileFilter : CIFilter

@property (retain, nonatomic) NSNumber *inputAngle; // ivar: inputAngle
@property (retain, nonatomic) CIVector *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputWidth; // ivar: inputWidth


+(id)customAttributes;
-(id)_croppedCenterPixelImage;
-(id)_kernel;


@end


#endif