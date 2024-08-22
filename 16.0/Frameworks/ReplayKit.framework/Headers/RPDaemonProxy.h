// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPDAEMONPROXY_H
#define RPDAEMONPROXY_H

@class NSURL, NSXPCConnection, NSString;
@protocol NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol;

#import <Foundation/Foundation.h>


@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol>



@property (retain, nonatomic) NSURL *broadcastURL; // ivar: _broadcastURL
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)daemonProxy;
-(id)init;
-(id)issueSandboxExtensionForClientFileWrite:(id)arg0 ;
-(void)captureHandlerWithAudioSample:(id)arg0 bufferType:(NSInteger)arg1 ;
-(void)captureHandlerWithSample:(id)arg0 timingData:(id)arg1 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)consumeSandboxExtension:(id)arg0 processNewConnection:(BOOL)arg1 ;
-(void)discardInAppRecordingWithHandler:(id)arg0 ;
-(void)exportClipToURL:(id)arg0 duration:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)getSystemBroadcastExtensionInfo:(id)arg0 ;
-(void)getSystemBroadcastPickerInfo:(id)arg0 ;
-(void)issueSandboxExtensionForMainBundleRead;
-(void)macApplicationDidBecomeActiveWithContextID:(id)arg0 completionHandler:(id)arg1 ;
-(void)macApplicationDidResignActive;
-(void)openControlCenterSystemRecordingView;
-(void)pauseInAppBroadcast;
-(void)pauseInAppCapture;
-(void)pauseInAppRecording;
-(void)recordingDidPause;
-(void)recordingDidStopWithError:(id)arg0 movieURL:(id)arg1 ;
-(void)recordingLockInterrupted:(id)arg0 ;
-(void)recordingTimerDidUpdate:(id)arg0 ;
-(void)reportCameraUsage:(NSInteger)arg0 ;
-(void)resumeInAppBroadcastWithWindowLayerContextID:(id)arg0 completionHandler:(id)arg1 ;
-(void)resumeInAppCaptureWithWindowLayerContextID:(id)arg0 completionHandler:(id)arg1 ;
-(void)resumeInAppClipWithWindowLayerContextID:(id)arg0 completionHandler:(id)arg1 ;
-(void)resumeInAppRecordingWithWindowLayerContextID:(id)arg0 completionHandler:(id)arg1 ;
-(void)resumeSystemBroadcastWithCompletionHandler:(id)arg0 ;
-(void)resumeSystemRecordingWithCompletionHandler:(id)arg0 ;
-(void)saveClipToCameraRoll:(id)arg0 handler:(id)arg1 ;
-(void)saveVideo:(id)arg0 handler:(id)arg1 ;
-(void)saveVideoToCameraRoll:(id)arg0 handler:(id)arg1 ;
-(void)setBroadcastPickerPreferredExt:(id)arg0 showsMicButton:(BOOL)arg1 ;
-(void)setMicrophoneEnabled:(BOOL)arg0 ;
-(void)setupBroadcastWithHostBundleID:(id)arg0 broadcastExtensionBundleID:(id)arg1 broadcastConfigurationData:(id)arg2 userInfo:(id)arg3 handler:(id)arg4 ;
-(void)setupSystemBroadcastWithHostBundleID:(id)arg0 broadcastExtensionBundleID:(id)arg1 broadcastConfigurationData:(id)arg2 userInfo:(id)arg3 handler:(id)arg4 ;
-(void)shouldResumeSessionType:(id)arg0 ;
-(void)startClipBufferingWithContextID:(id)arg0 windowSize:(struct CGSize )arg1 microphoneEnabled:(BOOL)arg2 cameraEnabled:(BOOL)arg3 withCompletionHandler:(id)arg4 ;
-(void)startInAppBroadcastWithContextID:(id)arg0 windowSize:(struct CGSize )arg1 microphoneEnabled:(BOOL)arg2 cameraEnabled:(BOOL)arg3 listenerEndpoint:(id)arg4 withHandler:(id)arg5 ;
-(void)startInAppCaptureWithContextID:(id)arg0 windowSize:(struct CGSize )arg1 microphoneEnabled:(BOOL)arg2 cameraEnabled:(BOOL)arg3 withHandler:(id)arg4 ;
-(void)startInAppRecordingWithContextID:(id)arg0 windowSize:(struct CGSize )arg1 microphoneEnabled:(BOOL)arg2 cameraEnabled:(BOOL)arg3 withHandler:(id)arg4 ;
-(void)startSystemBroadcastWithContextID:(id)arg0 windowSize:(struct CGSize )arg1 microphoneEnabled:(BOOL)arg2 cameraEnabled:(BOOL)arg3 listenerEndpoint:(id)arg4 withHandler:(id)arg5 ;
-(void)startSystemRecordingWithContextID:(id)arg0 windowSize:(struct CGSize )arg1 microphoneEnabled:(BOOL)arg2 cameraEnabled:(BOOL)arg3 withHandler:(id)arg4 ;
-(void)stopAllActiveClients;
-(void)stopClipBufferingWithCompletionHandler:(id)arg0 ;
-(void)stopCurrentActiveSessionWithHandler:(id)arg0 ;
-(void)stopInAppBroadcastWithHandler:(id)arg0 ;
-(void)stopInAppCaptureWithHandler:(id)arg0 ;
-(void)stopInAppRecordingWithHandler:(id)arg0 ;
-(void)stopInAppRecordingWithUrl:(id)arg0 handler:(id)arg1 ;
-(void)stopSystemBroadcastWithHandler:(id)arg0 ;
-(void)stopSystemRecordingWithHandler:(id)arg0 ;
-(void)stopSystemRecordingWithURLHandler:(id)arg0 ;
-(void)updateBroadcastServiceInfo:(id)arg0 ;
-(void)updateBroadcastURL:(id)arg0 ;
-(void)updateProcessIDForAudioCaptureWithPID:(int)arg0 ;
-(void)updateScreenRecordingStateWithCurrentState:(id)arg0 ;


@end


#endif