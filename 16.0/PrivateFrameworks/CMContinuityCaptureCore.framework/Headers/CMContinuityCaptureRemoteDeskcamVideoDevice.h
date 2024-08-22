// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCONTINUITYCAPTUREREMOTEDESKCAMVIDEODEVICE_H
#define CMCONTINUITYCAPTUREREMOTEDESKCAMVIDEODEVICE_H

@class AVCaptureVideoDataOutput, AVCaptureDevice, AVCaptureConnection;


#import "CMContinuityCaptureRemoteVideoDevice.h"

@interface CMContinuityCaptureRemoteDeskcamVideoDevice : CMContinuityCaptureRemoteVideoDevice {
    BOOL _avCaptureSessionStarted;
    BOOL _prewarmed;
    AVCaptureVideoDataOutput *_videoDataOutput;
}


@property (readonly, retain) AVCaptureDevice *deskViewCamera; // ivar: _deskViewCamera
@property (readonly, retain) AVCaptureConnection *videoDataConnection; // ivar: _videoDataConnection


-(BOOL)_configureWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)streaming;
-(id)_createConnectionsForPrewarming:(BOOL)arg0 ;
-(id)createConnectionsForPrewarming;
-(id)initWithCompositeDevice:(id)arg0 entity:(NSInteger)arg1 capabilities:(id)arg2 client:(id)arg3 ;
-(id)removePrewarmedConnectionsIfNeeded;
-(void)_setValueForControl:(id)arg0 completion:(id)arg1 ;
-(void)_startStream:(id)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_stopStream:(NSInteger)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_throttleFrameRateByThermalLevelPowerMode;
-(void)_unthrottleFrameRateByThermalLevelPowerMode;
-(void)_updateActiveMaxFrameRate:(unsigned int)arg0 ;
-(void)_updateActiveMinFrameRate:(unsigned int)arg0 ;


@end


#endif