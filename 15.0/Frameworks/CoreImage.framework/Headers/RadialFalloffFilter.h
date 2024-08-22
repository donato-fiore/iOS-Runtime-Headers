// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RADIALFALLOFFFILTER_H
#define RADIALFALLOFFFILTER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface RadialFalloffFilter : CIFilter

@property (retain, nonatomic) NSNumber *inputAnisotropic; // ivar: inputAnisotropic
@property (retain, nonatomic) CIImage *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIVector *inputExtent; // ivar: inputExtent
@property (retain, nonatomic) NSNumber *inputFalloff; // ivar: inputFalloff
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius


-(id)outputImage;


@end


#endif