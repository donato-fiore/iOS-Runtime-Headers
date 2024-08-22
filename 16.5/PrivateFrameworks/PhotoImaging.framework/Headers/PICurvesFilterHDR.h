// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PICURVESFILTERHDR_H
#define PICURVESFILTERHDR_H

@class CIFilter, CIImage;



@interface PICurvesFilterHDR : CIFilter

@property (retain) CIImage *inputImage; // ivar: _inputImage
@property (retain) CIImage *inputTableImage; // ivar: _inputTableImage


-(id)curvesKernel;
-(id)outputImage;


@end


#endif