// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMCIMORPHOLOGYRECTANGLE_H
#define AXMCIMORPHOLOGYRECTANGLE_H

@class CIFilter, NSNumber, CIImage;



@interface AXMCIMorphologyRectangle : CIFilter

@property (retain, nonatomic) NSNumber *inputHeight; // ivar: inputHeight
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputWidth; // ivar: inputWidth


+(id)customAttributes;
-(BOOL)_doMinimum;
-(BOOL)_isIdentity;
-(id)outputImage;


@end


#endif