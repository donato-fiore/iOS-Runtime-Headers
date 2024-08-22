// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIMORPHOLOGYRECTANGLE_H
#define CIMORPHOLOGYRECTANGLE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIMorphologyRectangle : CIFilter

@property (retain, nonatomic) NSNumber *inputHeight; // ivar: inputHeight
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputWidth; // ivar: inputWidth


+(id)customAttributes;
-(BOOL)_doMinimum;
-(BOOL)_isIdentity;
-(id)outputImage;


@end


#endif