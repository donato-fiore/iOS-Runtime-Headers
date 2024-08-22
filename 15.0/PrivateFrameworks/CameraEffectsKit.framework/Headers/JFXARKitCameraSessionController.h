// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXARKITCAMERASESSIONCONTROLLER_H
#define JFXARKITCAMERASESSIONCONTROLLER_H

@class ARSession, NSString, ARFaceTrackingConfiguration, CMMotionManager, ARMotionSensor, ARDeviceOrientationSensor, AVCaptureDevice, AVCaptureSession;
@protocol ARSessionDelegate, OS_dispatch_queue, JFXARKitFrameDelegate;

#import <Foundation/Foundation.h>

#import "JFXCustomImageSensor.h"

@interface JFXARKitCameraSessionController : NSObject <ARSessionDelegate>



@property (retain, nonatomic) ARSession *arSession; // ivar: _arSession
@property (nonatomic) NSObject<OS_dispatch_queue> *arSessionDelegateQueue; // ivar: _arSessionDelegateQueue
@property (retain, nonatomic) JFXCustomImageSensor *customImageSensor; // ivar: _customImageSensor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ARFaceTrackingConfiguration *faceTrackingConfiguration; // ivar: _faceTrackingConfiguration
@property (weak, nonatomic) NSObject<JFXARKitFrameDelegate> *frameDelegate; // ivar: _frameDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CMMotionManager *motionManager; // ivar: _motionManager
@property (retain, nonatomic) ARMotionSensor *motionSensor; // ivar: _motionSensor
@property (retain, nonatomic) ARDeviceOrientationSensor *orientationSensor; // ivar: _orientationSensor
@property (nonatomic) BOOL running; // ivar: _running
@property (readonly) Class superclass;
@property (retain, nonatomic) AVCaptureDevice *underlyingAVCaptureDevice; // ivar: _underlyingAVCaptureDevice
@property (retain, nonatomic) AVCaptureSession *underlyingAVCaptureSession; // ivar: _underlyingAVCaptureSession


-(BOOL)JT_setupARSession:(*id)arg0 ;
-(id)initWithAVCaptureSession:(id)arg0 captureDevice:(id)arg1 arSessionDelegateQueue:(id)arg2 ;
-(void)dealloc;
-(void)processExternalSensorData:(id)arg0 ;
-(void)provideSensorFrameSet:(id)arg0 trackedFacesMetadata:(id)arg1 faceObjectsMetadata:(id)arg2 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)startARSession;
-(void)stopARSession;


@end


#endif