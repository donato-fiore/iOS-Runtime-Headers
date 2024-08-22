// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSSPATIALPROFILEVIDEOCAPTURESESSION_H
#define HPSSPATIALPROFILEVIDEOCAPTURESESSION_H

@class AVCaptureSession, AVCaptureDeviceInput, NSString, AVCaptureVideoPreviewLayer;
@protocol BKUIPearlVideoCaptureSessionType, OS_dispatch_queue, BKUIVideoCaptureSesssionDelegate;

#import <Foundation/Foundation.h>


@interface HPSSpatialProfileVideoCaptureSession : NSObject <BKUIPearlVideoCaptureSessionType>

 {
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_captureQueue;
}


@property (readonly, nonatomic) CGFloat additionalPreviewScalingAllowedByCameraFormat;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BKUIVideoCaptureSesssionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // ivar: _previewLayer
@property (readonly) Class superclass;


-(id)_frontCamera;
-(id)init;
-(void)endCapture;
-(void)startCapture;


@end


#endif