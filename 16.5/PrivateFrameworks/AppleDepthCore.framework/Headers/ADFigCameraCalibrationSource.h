// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADFIGCAMERACALIBRATIONSOURCE_H
#define ADFIGCAMERACALIBRATIONSOURCE_H


#import <Foundation/Foundation.h>

#import "ADMutableCameraCalibration.h"
#import "ADDynamicPolynomialsLensDistortionModel.h"
#import "ADCameraCalibration.h"

@interface ADFigCameraCalibrationSource : NSObject {
    ADMutableCameraCalibration *_camera;
    float _rawSensorPixelSize;
    ADDynamicPolynomialsLensDistortionModel *_distortion;
}


@property (readonly) ADCameraCalibration *cameraCalibration;


+(struct ? )getTransformFromStream:(id)arg0 toStream:(id)arg1 usingExtrinsicsDictionary:(id)arg2 ;
+(struct float4x3 )figExtrinsicsToTransform:(id)arg0 ;
-(BOOL)pointFromMetadataField:(id)arg0 key:(id)arg1 point:(struct CGPoint *)arg2 ;
-(BOOL)rectFromMetadataField:(id)arg0 key:(id)arg1 rect:(struct CGRect *)arg2 ;
-(BOOL)updateForFrame:(struct __CVBuffer *)arg0 ;
-(BOOL)updateForFrameWithDimensions:(struct CGSize )arg0 metadataDictionary:(id)arg1 ;
-(id)initWithPixelSize:(float)arg0 gdcModel:(id)arg1 cameraToPlatformTransform:(struct ? )arg2 ;


@end


#endif