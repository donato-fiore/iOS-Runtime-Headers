// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIREDEYE_H
#define PIREDEYE_H

@class CIFilter, NSString, NSArray, CIImage;



@interface PIRedEye : CIFilter

@property (retain, nonatomic) NSString *inputCameraModel; // ivar: _inputCameraModel
@property (retain, nonatomic) NSArray *inputCorrectionInfo; // ivar: _inputCorrectionInfo
@property (retain, nonatomic) CIImage *inputDestinationImage; // ivar: _inputDestinationImage
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage


-(id)outputImage;


@end


#endif