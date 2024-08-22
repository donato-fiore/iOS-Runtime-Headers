// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDISPLACEMENTDISTORTION_H
#define CIDISPLACEMENTDISTORTION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIDisplacementDistortion : CIFilter

@property (retain, nonatomic) CIImage *inputDisplacementImage; // ivar: inputDisplacementImage
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale


+(id)customAttributes;
-(id)_CIDisplaceFromImage;
-(id)outputImage;


@end


#endif