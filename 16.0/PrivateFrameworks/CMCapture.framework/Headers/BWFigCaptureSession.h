// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWFIGCAPTURESESSION_H
#define BWFIGCAPTURESESSION_H

@class NSString;
@protocol BWPipelineNotificationDelegate, BWNodeFileCoordinatorStatusDelegate, BWNodeFileWriterStatusDelegate, BWStillImageCaptureStatusDelegate, BWRemoteQueueSinkNodeDelegate, BWNodeRenderDelegate, BWImageQueueSinkNodePreviewTapDelegate, BWGraphStatusDelegate, BWIrisStagingNodeIrisRequestDelegate, BWPreviewStitcherDelegate, FigCaptureDisplayLayoutObserver;

#import <Foundation/Foundation.h>


@interface BWFigCaptureSession : NSObject <BWPipelineNotificationDelegate, BWNodeFileCoordinatorStatusDelegate, BWNodeFileWriterStatusDelegate, BWStillImageCaptureStatusDelegate, BWRemoteQueueSinkNodeDelegate, BWNodeRenderDelegate, BWImageQueueSinkNodePreviewTapDelegate, BWGraphStatusDelegate, BWIrisStagingNodeIrisRequestDelegate, BWPreviewStitcherDelegate, FigCaptureDisplayLayoutObserver>

 {
    *OpaqueFigCaptureSession _captureSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)fileCoordinator:(id)arg0 sentMarkerBufferForFileWriterAction:(id)arg1 withPTS:(struct ? )arg2 settingsID:(NSInteger)arg3 errorCode:(int)arg4 ;
-(void)fileCoordinator:(id)arg0 stoppedBeforeStartedRecordingForSettings:(id)arg1 pendingIrisMovieInfos:(id)arg2 errorCode:(int)arg3 ;
-(void)fileWriter:(id)arg0 pausedRecordingForSettingsID:(NSUInteger)arg1 ;
-(void)fileWriter:(id)arg0 resumedRecordingForSettingsID:(NSUInteger)arg1 ;
-(void)fileWriter:(id)arg0 startedRecordingForSettings:(id)arg1 writerPipelineIndex:(NSUInteger)arg2 ;
-(void)fileWriter:(id)arg0 writerPipelineIndex:(NSUInteger)arg1 stoppedRecordingForSettings:(id)arg2 withError:(int)arg3 thumbnailSurface:(struct __IOSurface *)arg4 irisMovieInfo:(id)arg5 debugMetadataSidecarFileURL:(id)arg6 recordingSucceeded:(BOOL)arg7 ;
-(void)fileWriter:(id)arg0 writerPipelineIndex:(NSUInteger)arg1 stoppedRecordingSampleDataForSettingsID:(NSInteger)arg2 ;
-(void)graph:(id)arg0 didFinishStartingWithError:(int)arg1 ;
-(void)graphDidPrepareNodes:(id)arg0 ;
-(void)graphDidResolveRetainedBufferCounts:(id)arg0 ;
-(void)imageQueueSinkNode:(id)arg0 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withSuccess:(BOOL)arg2 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg0 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg0 atHostTime:(NSInteger)arg1 ;
-(void)layoutMonitor:(id)arg0 didUpdateLayout:(id)arg1 ;
-(void)node:(id)arg0 format:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)node:(id)arg0 format:(id)arg1 didBecomeLiveForOutput:(id)arg2 ;
-(void)node:(id)arg0 willRenderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2 ;
-(void)postNotification:(id)arg0 notificationPayload:(id)arg1 ;
-(void)previewStitcher:(id)arg0 didApplyWiderShift:(struct CGPoint )arg1 widerScaleFactor:(float)arg2 forWiderPortType:(id)arg3 narrowerShift:(struct CGPoint )arg4 narrowerScaleFactor:(float)arg5 forNarrowerPortType:(id)arg6 ;
-(void)previewStitcher:(id)arg0 overCaptureStatusDidChange:(int)arg1 ;
-(void)remoteQueueSinkNode:(id)arg0 localQueueBecameReady:(struct localQueueOpaque *)arg1 ;
-(void)remoteQueueSinkNode:(id)arg0 queueBecameReady:(struct remoteQueueSenderOpaque *)arg1 ;
-(void)stagingNode:(id)arg0 readyToReceiveRequestsWithEarliestAllowedStillImageCaptureHostPTS:(struct ? )arg1 ;
-(void)stagingNode:(id)arg0 valveClosedWithPendingIrisRequests:(id)arg1 ;
-(void)stagingNode:(id)arg0 waitingToEmitFrameWithPTS:(struct ? )arg1 ;
-(void)stagingNode:(id)arg0 willEmitIrisRequest:(id)arg1 ;
-(void)stillImageCoordinator:(id)arg0 didCancelMomentCaptureForSettingsID:(NSInteger)arg1 streamingDisruptionEndPTS:(struct ? )arg2 ;
-(void)stillImageCoordinator:(id)arg0 didCapturePhotoForSettings:(id)arg1 ;
-(void)stillImageCoordinator:(id)arg0 didResolveStillImagePTS:(struct ? )arg1 forSettings:(id)arg2 isPreBracketedEV0:(BOOL)arg3 ;
-(void)stillImageCoordinator:(id)arg0 didSelectNewReferenceFrameWithPTS:(struct ? )arg1 transform:(id)arg2 forSettings:(id)arg3 ;
-(void)stillImageCoordinator:(id)arg0 readyToRespondToRequestAfterRequestWithSettings:(id)arg1 ;
-(void)stillImageCoordinator:(id)arg0 willBeginCaptureBeforeResolvingSettingsForID:(NSInteger)arg1 ;
-(void)stillImageCoordinator:(id)arg0 willBeginCaptureForSettings:(id)arg1 ;
-(void)stillImageCoordinator:(id)arg0 willCapturePhotoForSettings:(id)arg1 error:(int)arg2 ;
-(void)stillImageCoordinator:(id)arg0 willPrepareStillImageCaptureWithSettings:(id)arg1 clientInitiated:(BOOL)arg2 ;


@end


#endif