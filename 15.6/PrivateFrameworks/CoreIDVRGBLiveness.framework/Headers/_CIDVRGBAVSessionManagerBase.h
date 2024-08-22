// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CIDVRGBAVSESSIONMANAGERBASE_H
#define _CIDVRGBAVSESSIONMANAGERBASE_H

@class NSString, AVCaptureSession;
@protocol CIDVRGBAVSessionManager, CIDVRGBAVSessionManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CIDVRGBAVSessionManagerBase : NSObject <CIDVRGBAVSessionManager>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CIDVRGBAVSessionManagerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRunning;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) AVCaptureSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)_buildAVCaptureInput;
-(id)buildAVSessionCaptureOutputs;
-(id)init;
-(struct ? )getCurrentTimestamp;
-(void)_addAVSessionInput:(id)arg0 ;
-(void)_configureOutput:(id)arg0 ;
-(void)_manageAVSessionNotification:(id)arg0 ;
-(void)_requestAccessToAVDeviceWithCompletionHandler:(id)arg0 ;
-(void)_setupAVSession;
-(void)_startObservingAVSessionNotifications;
-(void)addAVSessionOutput:(id)arg0 ;
-(void)capturePhotoUsingFlash:(BOOL)arg0 ;
-(void)configureAVSessionCaptureOutputs;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateAVSession;
-(void)pauseFileRecording;
-(void)pauseRecording;
-(void)restartFileRecordingWithCompletionHandler:(id)arg0 ;
-(void)restartRecordingWithCompletionHandler:(id)arg0 ;
-(void)resumeFileRecording;
-(void)resumeRecording;
-(void)setup;
-(void)start;
-(void)startAVSession;
-(void)stop;
-(void)stopAVSession;
-(void)stopFileRecording;
-(void)stopRecording;


@end


#endif