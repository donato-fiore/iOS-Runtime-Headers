// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUJSAVCAMERACALIBRATIONDATA_H
#define NUJSAVCAMERACALIBRATIONDATA_H

@class AVCameraCalibrationData;
@protocol NUJSAVCameraCalibrationDataExport;


#import "NUJSProxy.h"

@interface NUJSAVCameraCalibrationData : NUJSProxy <NUJSAVCameraCalibrationDataExport>



@property (readonly) AVCameraCalibrationData *cameraCalibrationData;


-(id)initWithDepthCameraCalibrationData:(id)arg0 context:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;
-(id)nu_unwrapJSValue;


@end


#endif