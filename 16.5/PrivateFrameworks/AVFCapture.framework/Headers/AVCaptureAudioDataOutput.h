// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREAUDIODATAOUTPUT_H
#define AVCAPTUREAUDIODATAOUTPUT_H

@class NSDictionary, NSString;
@protocol AVCaptureDataOutputDelegateOverride, OS_dispatch_queue, AVCaptureAudioDataOutputSampleBufferDelegate;


#import "AVCaptureOutput.h"
#import "AVCaptureAudioDataOutputInternal.h"

@interface AVCaptureAudioDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride>

 {
    AVCaptureAudioDataOutputInternal *_internal;
}


@property (copy, nonatomic) NSDictionary *audioSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id *delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (readonly, nonatomic) NSObject<AVCaptureAudioDataOutputSampleBufferDelegate> *sampleBufferDelegate;
@property (readonly) Class superclass;


+(id)new;
+(void)initialize;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(id)connectionMediaTypes;
-(id)init;
-(id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg0 ;
-(id)supportedAssetWriterOutputFileTypes;
-(void)_handleConfigurationLiveEventForID:(NSInteger)arg0 updatedFormatDescription:(struct opaqueCMFormatDescription *)arg1 ;
-(void)_handleLocalQueueMessage:(struct FigLocalQueueMessage )arg0 ;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg0 ;
-(void)_handleSampleBufferEventForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_updateLocalQueue:(struct localQueueOpaque *)arg0 ;
-(void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg0 ;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)dealloc;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;


@end


#endif