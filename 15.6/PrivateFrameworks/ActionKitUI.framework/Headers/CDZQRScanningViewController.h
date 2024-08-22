// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDZQRSCANNINGVIEWCONTROLLER_H
#define CDZQRSCANNINGVIEWCONTROLLER_H

@class UIViewController, AVCaptureSession, UILabel, AVCaptureDevice, NSString, NSArray, AVCaptureVideoPreviewLayer, UIButton;
@protocol AVCaptureMetadataOutputObjectsDelegate;



@interface CDZQRScanningViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>



@property (retain, nonatomic) AVCaptureSession *avSession; // ivar: _avSession
@property (weak, nonatomic) UILabel *cameraUnavailableLabel; // ivar: _cameraUnavailableLabel
@property (copy, nonatomic) id *cancelBlock; // ivar: _cancelBlock
@property (retain, nonatomic) AVCaptureDevice *captureDevice; // ivar: _captureDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorBlock; // ivar: _errorBlock
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lastCapturedString; // ivar: _lastCapturedString
@property (retain, nonatomic) NSArray *metadataObjectTypes; // ivar: _metadataObjectTypes
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // ivar: _previewLayer
@property (copy, nonatomic) id *resultBlock; // ivar: _resultBlock
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *torchButton; // ivar: _torchButton


-(id)init;
-(id)initWithMetadataObjectTypes:(id)arg0 ;
-(void)cancelItemSelected:(id)arg0 ;
-(void)captureOutput:(id)arg0 didOutputMetadataObjects:(id)arg1 fromConnection:(id)arg2 ;
-(void)dealloc;
-(void)handleFocusTap:(id)arg0 ;
-(void)sessionInterruptionEnded:(id)arg0 ;
-(void)sessionRuntimeError:(id)arg0 ;
-(void)sessionWasInterrupted:(id)arg0 ;
-(void)toggleTorch:(id)arg0 ;
-(void)turnTorchOff;
-(void)turnTorchOn;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif