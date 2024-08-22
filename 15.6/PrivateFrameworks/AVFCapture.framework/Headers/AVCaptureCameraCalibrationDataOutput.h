// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTURECAMERACALIBRATIONDATAOUTPUT_H
#define AVCAPTURECAMERACALIBRATIONDATAOUTPUT_H

@class AVWeakReference, NSString;
@protocol AVCaptureDataOutputDelegateOverride, AVCaptureCameraCalibrationDataOutputDelegate, OS_dispatch_queue;


#import "AVCaptureOutput.h"
#import "AVCaptureDataOutputDelegateCallbackHelper.h"

@interface AVCaptureCameraCalibrationDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride>

 {
    AVCaptureDataOutputDelegateCallbackHelper *_delegateCallbackHelper;
    AVWeakReference *_weakReference;
    BOOL _alwaysDiscardsLateCameraCalibrationData;
}


@property (nonatomic) BOOL alwaysDiscardsLateCameraCalibrationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<AVCaptureCameraCalibrationDataOutputDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, nonatomic) id *delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)new;
+(void)initialize;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(id)connectionMediaTypes;
-(id)init;
-(void)_handleLocalQueueMessage:(struct FigLocalQueueMessage )arg0 ;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg0 ;
-(void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_updateLocalQueue:(struct localQueueOpaque *)arg0 ;
-(void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg0 ;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)dealloc;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;


@end


#endif