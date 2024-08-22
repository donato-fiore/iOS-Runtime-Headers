// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CICHEAPBILATERAL_H
#define CICHEAPBILATERAL_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CICheapBilateral : CIFilter {
    CIImage *inputImage;
}


@property (retain, nonatomic) NSNumber *inputSigmaRange; // ivar: inputSigmaRange
@property (retain, nonatomic) NSNumber *inputSigmaSpace; // ivar: inputSigmaSpace
@property (retain, nonatomic) CIImage *inputSource; // ivar: inputSource


+(id)customAttributes;
-(id)outputImage;


@end


#endif