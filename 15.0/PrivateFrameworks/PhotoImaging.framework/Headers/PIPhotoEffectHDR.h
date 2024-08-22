// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIPHOTOEFFECTHDR_H
#define PIPHOTOEFFECTHDR_H

@class CIFilter, CIImage;



@interface PIPhotoEffectHDR : CIFilter

@property (retain) CIImage *inputImage; // ivar: _inputImage


+(id)kernel;
-(id)outputImage;
-(id)photoEffectName;


@end


#endif