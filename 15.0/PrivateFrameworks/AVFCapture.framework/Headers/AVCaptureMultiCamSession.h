// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREMULTICAMSESSION_H
#define AVCAPTUREMULTICAMSESSION_H



#import "AVCaptureSession.h"

@interface AVCaptureMultiCamSession : AVCaptureSession {
    float _hardwareCost;
    float _systemPressureCost;
}


@property (readonly, nonatomic) float hardwareCost;
@property (readonly, nonatomic) float systemPressureCost;


+(BOOL)isMultiCamSupported;
-(BOOL)_addConnection:(id)arg0 exceptionReason:(*id)arg1 ;
-(BOOL)_canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)_canAddInput:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)_canAddOutput:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)canSetSessionPreset:(id)arg0 ;
-(BOOL)isOverCost:(*id)arg0 ;
-(float)_computeEncoderCostForOutputs;
-(float)_computeNANDCostForOutputs;
-(float)_nandCostWithFormatWidth:(int)arg0 height:(int)arg1 maxFrameRate:(float)arg2 ;
-(id)_livePortSetsByDeviceInput;
-(id)_physicalDevicePowerInfoSet;
-(id)init;
-(unsigned int)_computeMemoryUsageForOutputs;
-(void)_removeConnection:(id)arg0 ;
-(void)_updateCosts;
-(void)_updateHardwareCost;
-(void)_updateSystemPressureCost;
-(void)dealloc;
-(void)handleVideoInputDevice:(id)arg0 activeFormatChanged:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startRunning;


@end


#endif