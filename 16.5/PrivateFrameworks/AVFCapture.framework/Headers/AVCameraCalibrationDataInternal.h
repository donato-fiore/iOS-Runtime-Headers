// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAMERACALIBRATIONDATAINTERNAL_H
#define AVCAMERACALIBRATIONDATAINTERNAL_H

@class NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface AVCameraCalibrationDataInternal : NSObject {
    ? intrinsicMatrix;
    CGSize intrinsicMatrixReferenceDimensions;
    ? extrinsicMatrix;
    float pixelSize;
    NSData *lensDistortionCoefficients;
    NSData *inverseLensDistortionCoefficients;
    CGPoint lensDistortionCenter;
    NSData *lensDistortionLookupTable;
    NSData *inverseLensDistortionLookupTable;
    NSDictionary *cameraCalibrationDataDictionary;
}






@end


#endif