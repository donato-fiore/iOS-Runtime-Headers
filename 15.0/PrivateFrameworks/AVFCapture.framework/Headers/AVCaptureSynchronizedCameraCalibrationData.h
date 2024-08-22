// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTURESYNCHRONIZEDCAMERACALIBRATIONDATA_H
#define AVCAPTURESYNCHRONIZEDCAMERACALIBRATIONDATA_H



#import "AVCaptureSynchronizedData.h"
#import "AVCameraCalibrationData.h"

@interface AVCaptureSynchronizedCameraCalibrationData : AVCaptureSynchronizedData {
    AVCameraCalibrationData *_cameraCalibrationData;
    BOOL _cameraCalibrationDataWasDropped;
    NSInteger _droppedReason;
}


@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) BOOL cameraCalibrationDataWasDropped;
@property (readonly) NSInteger droppedReason;


-(id)_initWithCameraCalibrationData:(id)arg0 timestamp:(struct ? )arg1 cameraCalibrationDataWasDropped:(BOOL)arg2 droppedReason:(NSInteger)arg3 ;
-(void)dealloc;


@end


#endif