// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPHOTOEFFECTBLACKANDWHITEHDR_H
#define PIPHOTOEFFECTBLACKANDWHITEHDR_H

@class CIFilter, CIImage;



@interface PIPhotoEffectBlackAndWhiteHDR : CIFilter

@property (retain) CIImage *inputImage; // ivar: _inputImage


+(id)kernelBlackAndWhite;
-(id)outputImage;
-(id)photoEffectName;


@end


#endif