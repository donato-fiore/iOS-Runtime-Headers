// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CICROP_H
#define CICROP_H

@protocol _CIFilterProperties;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CICrop : CIFilter <_CIFilterProperties>



@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputRectangle; // ivar: inputRectangle


+(id)customAttributes;
-(id)_initFromProperties:(id)arg0 ;
-(id)_outputProperties;
-(id)outputImage;


@end


#endif