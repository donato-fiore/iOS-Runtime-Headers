// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIFALSECOLORHDRDEBUG_H
#define PIFALSECOLORHDRDEBUG_H

@class CIFilter, CIImage;



@interface PIFalseColorHDRDebug : CIFilter

@property CGFloat inputCutoff; // ivar: _inputCutoff
@property (retain) CIImage *inputImage; // ivar: _inputImage


+(id)kernel;
-(id)outputImage;


@end


#endif