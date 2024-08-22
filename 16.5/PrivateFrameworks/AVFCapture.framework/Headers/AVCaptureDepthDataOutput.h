// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREDEPTHDATAOUTPUT_H
#define AVCAPTUREDEPTHDATAOUTPUT_H

@class NSString;
@protocol AVCaptureDataOutputDelegateOverride, AVCaptureDepthDataOutputDelegate, OS_dispatch_queue;


#import "AVCaptureOutput.h"
#import "AVCaptureDepthDataOutputInternal.h"

@interface AVCaptureDepthDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride>

 {
    AVCaptureDepthDataOutputInternal *_internal;
}


@property (nonatomic) BOOL alwaysDiscardsLateDepthData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<AVCaptureDepthDataOutputDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, nonatomic) id *delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFilteringEnabled) BOOL filteringEnabled;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)new;
+(void)initialize;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg0 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg0 ;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(id)addConnection:(id)arg0 error:(*id)arg1 ;
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
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeConnection:(id)arg0 ;


@end


#endif