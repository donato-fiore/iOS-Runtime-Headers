// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPHOTOEFFECT3DBLACKANDWHITEHDR_H
#define PIPHOTOEFFECT3DBLACKANDWHITEHDR_H

@class CIFilter, CIImage;



@interface PIPhotoEffect3DBlackAndWhiteHDR : CIFilter

@property (retain) CIImage *inputDepthMap; // ivar: _inputDepthMap
@property (retain) CIImage *inputImage; // ivar: _inputImage
@property float inputThreshold; // ivar: _inputThreshold


+(id)kernelBlackAndWhite;
-(id)outputImage;
-(id)photoEffectName;


@end


#endif