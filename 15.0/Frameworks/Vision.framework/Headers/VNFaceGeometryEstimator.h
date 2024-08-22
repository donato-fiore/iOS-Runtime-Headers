// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNFACEGEOMETRYESTIMATOR_H
#define VNFACEGEOMETRYESTIMATOR_H



#import "VNDetector.h"

@interface VNFaceGeometryEstimator : VNDetector



+(*void)allLandmarksPointsIndexes;
-(BOOL)_buildCalibrationMatrix:(id)arg0 calibrationMatrix:(*float)arg1 error:(*id)arg2 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif