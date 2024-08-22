// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARDEPTHSENSOR_H
#define ARDEPTHSENSOR_H

@class NSMutableDictionary, NSString, AVCapturePointCloudDataOutput;
@protocol AVCapturePointCloudDataOutputDelegate;


#import "ARImageSensor.h"
#import "ARDepthSensorSettings.h"

@interface ARDepthSensor : ARImageSensor <AVCapturePointCloudDataOutputDelegate>

 {
    NSMutableDictionary *_extrinsicsMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ARDepthSensorSettings *mutableDepthSettings;
@property (retain, nonatomic) AVCapturePointCloudDataOutput *pointCloudOutput; // ivar: _pointCloudOutput
@property (retain, nonatomic) NSString *projectorMode; // ivar: _projectorMode
@property (readonly, copy, nonatomic) ARDepthSensorSettings *settings;
@property (readonly) Class superclass;


+(void)registerSignPostForPointCloudData:(id)arg0 ;
-(BOOL)canReconfigure:(id)arg0 ;
-(NSUInteger)providedDataTypes;
-(id)configureCaptureSession;
-(id)prepareToStart;
-(void)_configureProjectorModeForDevice:(id)arg0 ;
-(void)pointCloudDataOutput:(id)arg0 didDropPointCloudData:(id)arg1 timestamp:(struct ? )arg2 connection:(id)arg3 reason:(NSInteger)arg4 ;
-(void)pointCloudDataOutput:(id)arg0 didOutputPointCloudData:(id)arg1 timestamp:(struct ? )arg2 connection:(id)arg3 ;
-(void)reconfigure:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif