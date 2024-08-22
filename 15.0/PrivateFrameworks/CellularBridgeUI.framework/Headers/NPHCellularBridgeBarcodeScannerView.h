// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPHCELLULARBRIDGEBARCODESCANNERVIEW_H
#define NPHCELLULARBRIDGEBARCODESCANNERVIEW_H

@class UIView, AVCaptureSession, AVCaptureDeviceInput, NSString, AVCaptureVideoPreviewLayer;
@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_queue, NPHCellularBridgeBarcodeScannerCaptureDelegate;



@interface NPHCellularBridgeBarcodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate>

 {
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_metadataQueue;
}


@property (readonly, nonatomic) BOOL canUseCamera; // ivar: _canUseCamera
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<NPHCellularBridgeBarcodeScannerCaptureDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // ivar: _previewLayer
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)_changeCameraConfiguration;
-(void)autoExposeAtPoint:(struct CGPoint )arg0 ;
-(void)autoFocusAtPoint:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)handleRuntimeError:(id)arg0 ;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setupCameraSession;
-(void)startRunning;
-(void)stopRunning;


@end


#endif