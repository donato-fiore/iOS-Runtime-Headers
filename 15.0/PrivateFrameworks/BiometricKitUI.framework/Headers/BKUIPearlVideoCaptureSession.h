// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKUIPEARLVIDEOCAPTURESESSION_H
#define BKUIPEARLVIDEOCAPTURESESSION_H

@class AVCaptureSession, AVCaptureDeviceInput, AVCaptureVideoPreviewLayer;
@protocol OS_dispatch_queue, BKUIVideoCaptureSesssionDelegate;

#import <Foundation/Foundation.h>


@interface BKUIPearlVideoCaptureSession : NSObject {
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSUInteger _captureSessionRestarts;
    BOOL _captureSessionInterrupted;
    NSObject<OS_dispatch_queue> *_captureQueue;
}


@property (readonly, nonatomic) CGFloat additionalPreviewScalingAllowedByCameraFormat; // ivar: _additionalPreviewScalingAllowedByCameraFormat
@property (weak, nonatomic) NSObject<BKUIVideoCaptureSesssionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // ivar: _previewLayer


-(BOOL)_synchronizedCaptureSessionInterrupted;
-(id)_frontCamera;
-(id)init;
-(void)_captureSessionInterrupted:(id)arg0 ;
-(void)_captureSessionStarted:(id)arg0 ;
-(void)_captureSessionStopped:(id)arg0 ;
-(void)dealloc;
-(void)endCapture;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startCapture;


@end


#endif