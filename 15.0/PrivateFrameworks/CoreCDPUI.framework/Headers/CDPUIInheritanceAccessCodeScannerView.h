// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPUIINHERITANCEACCESSCODESCANNERVIEW_H
#define CDPUIINHERITANCEACCESSCODESCANNERVIEW_H

@class UIView, AVCaptureSession, NSString, AVCaptureMetadataOutput, AVCaptureVideoPreviewLayer, CALayer;
@protocol AVCaptureMetadataOutputObjectsDelegate, CDPUIInheritanceAccessCodeScannerViewDelegate;



@interface CDPUIInheritanceAccessCodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate>



@property (retain, nonatomic) AVCaptureSession *captureSession; // ivar: _captureSession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CDPUIInheritanceAccessCodeScannerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize lastKnownDimensions; // ivar: _lastKnownDimensions
@property (retain, nonatomic) AVCaptureMetadataOutput *metadataOutput; // ivar: _metadataOutput
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // ivar: _previewLayer
@property (retain, nonatomic) CALayer *spotlightLayer; // ivar: _spotlightLayer
@property (readonly) Class superclass;


-(id)_spotOverlayLayerWithBezierRect:(struct CGRect )arg0 CircleRect:(struct CGRect )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_bezierRect;
-(struct CGRect )_circleRectForCenter:(struct CGPoint )arg0 ;
-(void)_setupLivePreview;
-(void)_setupPreviewIfNeeded;
-(void)captureOutput:(id)arg0 didOutputMetadataObjects:(id)arg1 fromConnection:(id)arg2 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)layoutSubviews;


@end


#endif