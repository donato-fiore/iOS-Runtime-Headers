// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIBILATERALFILTER_H
#define PIBILATERALFILTER_H

@class CIFilter, NSNumber, CIImage;



@interface PIBilateralFilter : CIFilter

@property (retain) NSNumber *inputEdgeDetail; // ivar: _inputEdgeDetail
@property (retain) CIImage *inputImage; // ivar: _inputImage
@property (retain) NSNumber *inputRadius; // ivar: _inputRadius


+(id)customAttributes;
-(id)outputImage;


@end


#endif