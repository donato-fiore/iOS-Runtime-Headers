// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIHDRINVERSEHLGFILTER_H
#define PIHDRINVERSEHLGFILTER_H

@class CIFilter, CIImage;



@interface PIHDRInverseHLGFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage


+(id)inverseHLGLumaBlendingKernel;
-(id)outputImage;


@end


#endif