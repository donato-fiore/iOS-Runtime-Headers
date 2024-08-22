// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRDEFAULTCAPTURESESSIONMANAGER_H
#define CRDEFAULTCAPTURESESSIONMANAGER_H

@class AVCaptureVideoPreviewLayer, NSString, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureDeviceInput, AVCaptureInputPort, CALayer;
@protocol CRCaptureSessionManager, AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate;

#import <Foundation/Foundation.h>


@interface CRDefaultCaptureSessionManager : NSObject <CRCaptureSessionManager>



@property (retain, nonatomic) AVCaptureVideoPreviewLayer *avfPreviewLayer; // ivar: _avfPreviewLayer
@property (copy, nonatomic) NSString *cameraMode; // ivar: _cameraMode
@property (nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property CGSize cameraResolution; // ivar: _cameraResolution
@property (retain, nonatomic) AVCaptureSession *captureSession; // ivar: _captureSession
@property (weak) NSObject<AVCaptureVideoDataOutputSampleBufferDelegate> *captureSessionDelegate; // ivar: _captureSessionDelegate
@property (weak) NSObject<AVCaptureMetadataOutputObjectsDelegate> *captureSessionMetadataDelegate; // ivar: _captureSessionMetadataDelegate
@property (retain, nonatomic) AVCaptureVideoDataOutput *captureVideoDataOutput; // ivar: _captureVideoDataOutput
@property (retain) NSString *currentDeviceID; // ivar: _currentDeviceID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVCaptureDeviceInput *deviceInput; // ivar: _deviceInput
@property BOOL enableMetadataOutput; // ivar: _enableMetadataOutput
@property BOOL exposureAdjustmentInProgress; // ivar: _exposureAdjustmentInProgress
@property int exposureAdjustmentInProgressTimeoutCount; // ivar: _exposureAdjustmentInProgressTimeoutCount
@property (nonatomic) NSInteger exposureMode; // ivar: _exposureMode
@property *? exposure_table; // ivar: _exposure_table
@property (nonatomic) NSInteger focusMode; // ivar: _focusMode
@property (readonly) NSUInteger hash;
@property ? highISOThresholdDuration; // ivar: _highISOThresholdDuration
@property (retain) id *inputPortFormatObserver; // ivar: _inputPortFormatObserver
@property (weak, nonatomic) AVCaptureInputPort *inputPortFormatSender; // ivar: _inputPortFormatSender
@property float maxISO; // ivar: _maxISO
@property float minISO; // ivar: _minISO
@property (readonly, nonatomic) CALayer *previewLayer;
@property BOOL runningManualExposure; // ivar: _runningManualExposure
@property (readonly) Class superclass;
@property (nonatomic) NSInteger torchMode; // ivar: _torchMode
@property (nonatomic) NSInteger whiteBalanceMode; // ivar: _whiteBalanceMode


-(BOOL)isAdjustingFocus;
-(BOOL)isFocusPointOfInterestSupported;
-(BOOL)isPreviewVideoMirrored;
-(BOOL)isRearCamera;
-(BOOL)isRunning;
-(BOOL)switchToCamera:(NSInteger)arg0 ;
-(BOOL)switchToCameraWithDeviceID:(id)arg0 ;
-(BOOL)toggleCamera;
-(NSUInteger)cameraCount;
-(id)backFacingCamera;
-(id)captureDeviceWithIdentifier:(id)arg0 ;
-(id)captureDeviceWithPosition:(NSInteger)arg0 ;
-(id)frontFacingCamera;
-(int)targetVideoFormat;
-(struct CGPoint )convertCameraPoint:(struct CGPoint )arg0 fromLayer:(id)arg1 ;
-(struct CGPoint )convertCameraPoint:(struct CGPoint )arg0 toLayer:(id)arg1 ;
-(struct CGPoint )convertCameraPoint:(struct CGPoint )arg0 toLayer:(id)arg1 flipped:(BOOL)arg2 ;
-(struct CGPoint )convertCameraPointOCR:(struct CGPoint )arg0 toLayer:(id)arg1 flipped:(BOOL)arg2 ;
-(struct CGPoint )focusPointOfInterest;
-(struct CGRect )convertCameraRect:(struct CGRect )arg0 fromLayer:(id)arg1 ;
-(struct CGRect )previewVisibleRect;
-(void)_refocusOnPoint:(struct CGPoint )arg0 focusMode:(NSInteger)arg1 exposure:(BOOL)arg2 ;
-(void)cacheCameraResolution:(id)arg0 ;
-(void)cameraSessionWasInterrupted:(id)arg0 ;
-(void)changeCameraConfiguration;
-(void)highISOAdjustExposure;
-(void)refocusOnPoint:(struct CGPoint )arg0 ;
-(void)refocusOnPoint:(struct CGPoint )arg0 exposure:(BOOL)arg1 ;
-(void)resetFocus;
-(void)setPreviewOrientation:(NSInteger)arg0 ;
-(void)setupCameraSession;
-(void)setupCameraSessionWithCaptureDevice:(id)arg0 ;
-(void)setupHighISO:(id)arg0 ;
-(void)startRunning;
-(void)stopRunning;
-(void)teardownCameraSession;


@end


#endif