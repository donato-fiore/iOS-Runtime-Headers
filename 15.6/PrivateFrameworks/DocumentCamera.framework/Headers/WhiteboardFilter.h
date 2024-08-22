// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WHITEBOARDFILTER_H
#define WHITEBOARDFILTER_H

@class CIFilter, CIImage, NSNumber;



@interface WhiteboardFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (copy, nonatomic) NSNumber *stride; // ivar: _stride


+(id)customAttributes;
-(id)outputImage;
-(id)whiteboardFilterKernel;


@end


#endif