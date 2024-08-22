// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VPSCANNERVIEW_H
#define VPSCANNERVIEW_H

@class UIView, AVCaptureDevice, AVCaptureSession, AVCaptureVideoPreviewLayer, CAShapeLayer, NSString, NSDate, NSError;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;



@interface VPScannerView : UIView <AVCaptureVideoDataOutputSampleBufferDelegate>

 {
    AVCaptureDevice *_avCaptureDevice;
    NSObject<OS_dispatch_queue> *_avCaptureQueue;
    AVCaptureSession *_avCaptureSession;
    AVCaptureVideoPreviewLayer *_avPreviewLayer;
    *HCImagePerspectiveReader _reader;
    NSUInteger _readerWidth;
    NSUInteger _readerHeight;
    NSUInteger _readerRowBytes;
    NSUInteger _readerLastWatermarkTicks;
    NSUInteger _readerResetTicks;
    float _readerLastProgress;
    BOOL _scanning;
    BOOL _isProxCardType;
    CAShapeLayer *_viewfinderBorderLayer;
    CAShapeLayer *_viewfinderRevealLayer;
}


@property (nonatomic) NSInteger autoFocusRangeRestriction; // ivar: _autoFocusRangeRestriction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSUInteger extractedCodeLength; // ivar: _extractedCodeLength
@property (nonatomic) BOOL fillLayerBoundsWithVideo; // ivar: _fillLayerBoundsWithVideo
@property (retain) NSDate *firstCapturedFrameDate; // ivar: _firstCapturedFrameDate
@property (retain) NSDate *firstScannedCodeDate; // ivar: _firstScannedCodeDate
@property (nonatomic) NSInteger focusMode; // ivar: _focusMode
@property (readonly) NSUInteger hash;
@property (retain) NSError *latestError; // ivar: _latestError
@property NSUInteger readerResetCount; // ivar: _readerResetCount
@property (copy, nonatomic) id *scannedCodeHandler; // ivar: _scannedCodeHandler
@property (retain) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat viewFinderDiameter;


-(id)_setupCapture;
-(id)_setupDevice:(id)arg0 ;
-(id)initAsProxCard;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleCaptureSessionInterrupted:(id)arg0 ;
-(void)_handleCaptureSessionInterruptionEnded:(id)arg0 ;
-(void)_handleCaptureSessionRuntimeError:(id)arg0 ;
-(void)_handleCaptureSessionStarted:(id)arg0 ;
-(void)_handleCaptureSessionStopped:(id)arg0 ;
-(void)_initCommon;
-(void)_postMetricAndResetAnalyticsState;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)layoutSubviews;
-(void)start;
-(void)stop;


@end


#endif