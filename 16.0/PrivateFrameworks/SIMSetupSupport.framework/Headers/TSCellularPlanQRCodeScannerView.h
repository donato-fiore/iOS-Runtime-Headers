// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCELLULARPLANQRCODESCANNERVIEW_H
#define TSCELLULARPLANQRCODESCANNERVIEW_H

@class UIView, AVCaptureSession, AVCaptureDeviceInput, NSString, AVCaptureVideoPreviewLayer;
@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_queue;



@interface TSCellularPlanQRCodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate>

 {
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_metadataQueue;
}


@property (readonly, nonatomic) BOOL canUseCamera; // ivar: _canUseCamera
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<AVCaptureMetadataOutputObjectsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // ivar: _previewLayer
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)_changeCameraConfiguration;
-(void)_handleRuntimeError:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setupCameraSession;
-(void)startRunning;
-(void)stopRunning;


@end


#endif