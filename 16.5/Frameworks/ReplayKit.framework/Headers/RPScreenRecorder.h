// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPSCREENRECORDER_H
#define RPSCREENRECORDER_H

@class NSURL, UIView, NSString, UIWindow;
@protocol RPPreviewViewControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, RPScreenRecorderDelegate, RPScreenRecorderPrivateDelegate, RPScreenRecordeScreenCapureKitDelegate;

#import <Foundation/Foundation.h>

#import "RPBroadcastController.h"
#import "RPPGPipViewController.h"
#import "RPPipViewController.h"

@interface RPScreenRecorder : NSObject <RPPreviewViewControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate>



@property (retain, nonatomic) RPBroadcastController *activeBroadcastController; // ivar: _activeBroadcastController
@property (nonatomic, getter=isAvailable) BOOL available; // ivar: _available
@property (retain, nonatomic) NSURL *broadcastURL; // ivar: _broadcastURL
@property (nonatomic, getter=isCameraEnabled) BOOL cameraEnabled; // ivar: _cameraEnabled
@property (nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (retain, nonatomic) UIView *cameraPreviewView; // ivar: _cameraPreviewView
@property (copy, nonatomic) id *captureHandler; // ivar: _captureHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RPScreenRecorderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasUserConsentForCamera; // ivar: _hasUserConsentForCamera
@property (nonatomic) BOOL hasUserConsentForMicrophone; // ivar: _hasUserConsentForMicrophone
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled; // ivar: _microphoneEnabled
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (retain, nonatomic) RPPGPipViewController *pgPipViewController; // ivar: _pgPipViewController
@property (retain, nonatomic) RPPipViewController *pipViewController; // ivar: _pipViewController
@property (retain, nonatomic) NSString *previousAudioCategory; // ivar: _previousAudioCategory
@property (nonatomic) NSUInteger previousAudioSessionOptions; // ivar: _previousAudioSessionOptions
@property (retain, nonatomic) NSObject<RPScreenRecorderPrivateDelegate> *privateDelegate; // ivar: _privateDelegate
@property (nonatomic, setter=updateProcessIDForAudioCapture:) int processIDForAudioCapture; // ivar: _processIDForAudioCapture
@property (nonatomic, getter=isRecording) BOOL recording; // ivar: _recording
@property (copy, nonatomic) id *saveVideoToCameraRollCompletionBlock; // ivar: _saveVideoToCameraRollCompletionBlock
@property (retain, nonatomic) NSObject<RPScreenRecordeScreenCapureKitDelegate> *screenCaptureKitDelegate; // ivar: _screenCaptureKitDelegate
@property (retain, nonatomic) NSObject<RPScreenRecorderDelegate> *secondDelegate; // ivar: _secondDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL systemRecording; // ivar: _systemRecording
@property (retain, nonatomic) UIWindow *windowToRecord; // ivar: _windowToRecord


+(id)sharedRecorder;
-(BOOL)checkContextID:(id)arg0 withHandler:(id)arg1 ;
-(BOOL)screenRecordingAllowed;
-(BOOL)screenRecordingSupportedOnDevice;
-(BOOL)shouldNotifyDidStop;
-(id)applicationWindow;
-(id)audioQueue;
-(id)currentWindowLayerContextID;
-(id)handleUnavailableState;
-(id)init;
-(id)processQueue;
-(id)videoQueue;
-(struct CGSize )currentWindowSize;
-(void)captureHandlerWithAudioSample:(id)arg0 bufferType:(NSInteger)arg1 ;
-(void)captureHandlerWithSample:(id)arg0 timingData:(id)arg1 ;
-(void)clientDidUpdateBroadcastServiceInfo:(id)arg0 ;
-(void)dealloc;
-(void)didStopRecordingWithError:(id)arg0 previewViewController:(id)arg1 ;
-(void)discardRecordingWithHandler:(id)arg0 ;
-(void)exportClipToURL:(id)arg0 duration:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)instantiatePipView;
-(void)isScreenRecordingAvailable;
-(void)notifyDelegateOfUpdatedState;
-(void)pauseInAppBroadcast;
-(void)pauseInAppCapture;
-(void)pauseInAppRecording;
-(void)recordingDidPause;
-(void)recordingDidStopWithError:(id)arg0 movieURL:(id)arg1 ;
-(void)recordingLockInterrupted:(id)arg0 ;
-(void)recordingTimerDidUpdate:(id)arg0 ;
-(void)registerAppForStateChangeSetRotationLock:(BOOL)arg0 ;
-(void)removePipView;
-(void)resumeInAppBroadcast;
-(void)resumeInAppCapture;
-(void)resumeInAppClip;
-(void)resumeInAppRecording;
-(void)resumeSystemBroadcast;
-(void)resumeSystemRecording;
-(void)saveClipToCameraRoll:(id)arg0 handler:(id)arg1 ;
-(void)saveVideo:(id)arg0 handler:(id)arg1 ;
-(void)saveVideoToCameraRoll:(id)arg0 handler:(id)arg1 ;
-(void)setWindowRotationLocked:(BOOL)arg0 ;
-(void)setupSystemBroadcastWithExtension:(id)arg0 handler:(id)arg1 ;
-(void)shouldResumeSessionType:(id)arg0 ;
// -(void)startCaptureWithHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)startClipBufferingWithCompletionHandler:(id)arg0 ;
-(void)startInAppBroadcastWithHandler:(id)arg0 ;
-(void)startRecordingWithHandler:(id)arg0 ;
-(void)startRecordingWithMicrophoneEnabled:(BOOL)arg0 handler:(id)arg1 ;
-(void)startSystemBroadcastWithHandler:(id)arg0 ;
-(void)startSystemRecordingWithMicrophoneEnabled:(BOOL)arg0 handler:(id)arg1 ;
-(void)stopCaptureWithHandler:(id)arg0 ;
-(void)stopClipBufferingWithCompletionHandler:(id)arg0 ;
-(void)stopInAppBroadcastWithHandler:(id)arg0 ;
-(void)stopRecordingWithAdditionalShareFileAttachment:(id)arg0 overrideShareMessage:(id)arg1 previewViewControllerOverrideTintColor:(id)arg2 handler:(id)arg3 ;
-(void)stopRecordingWithHandler:(id)arg0 ;
-(void)stopRecordingWithOutputURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopRecordingWithVideoURLHandler:(id)arg0 ;
-(void)stopSystemBroadcastWithHandler:(id)arg0 ;
-(void)stopSystemRecording:(id)arg0 ;
-(void)stopSystemRecordingWithURLHandler:(id)arg0 ;
-(void)updateProcessIDForAudioCapture:(int)arg0 ;
-(void)updateRecordingAvailability:(id)arg0 ;
-(void)updateScreenRecordingStateWithCurrentState:(id)arg0 ;
-(void)updateStateWithActive:(BOOL)arg0 error:(id)arg1 ;


@end


#endif