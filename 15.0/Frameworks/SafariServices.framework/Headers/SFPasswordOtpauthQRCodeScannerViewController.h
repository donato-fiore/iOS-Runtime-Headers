// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPASSWORDOTPAUTHQRCODESCANNERVIEWCONTROLLER_H
#define SFPASSWORDOTPAUTHQRCODESCANNERVIEWCONTROLLER_H

@class UIViewController, AVCaptureSession, AVCaptureVideoPreviewLayer, UIView, NSString;
@protocol AVCaptureMetadataOutputObjectsDelegate, SFPasswordOtpauthQRCodeScannerViewControllerDelegate;



@interface SFPasswordOtpauthQRCodeScannerViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>

 {
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_previewLayer;
    UIView *_viewfinderView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFPasswordOtpauthQRCodeScannerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_configureCaptureSession;
-(void)_dismiss:(id)arg0 ;
-(void)captureOutput:(id)arg0 didOutputMetadataObjects:(id)arg1 fromConnection:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif