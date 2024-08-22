// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PICURVESFILTER_H
#define PICURVESFILTER_H

@class CIFilter, CIImage;



@interface PICurvesFilter : CIFilter

@property (retain) CIImage *inputImage; // ivar: _inputImage
@property (retain) CIImage *inputTableImage; // ivar: _inputTableImage


+(id)curvesKernel;
-(id)outputImage;


@end


#endif