// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CICAMERACALIBRATIONLENSCORRECTION_H
#define CICAMERACALIBRATIONLENSCORRECTION_H

@class AVCameraCalibrationData, NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CICameraCalibrationLensCorrection : CIFilter

@property (retain, nonatomic) AVCameraCalibrationData *inputAVCameraCalibrationData; // ivar: inputAVCameraCalibrationData
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputUseInverseLookUpTable; // ivar: inputUseInverseLookUpTable


+(id)customAttributes;
-(id)outputImage;
-(struct CGPoint )ReferenceensDistortionPointForPoint:(struct CGPoint )arg0 lookupTable:(id)arg1 distortionOpticalCenter:(struct CGPoint )arg2 imageSize:(struct CGSize )arg3 ;
-(struct CGRect )regionOf:(int)arg0 destRect:(struct CGRect )arg1 userInfo:(id)arg2 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif