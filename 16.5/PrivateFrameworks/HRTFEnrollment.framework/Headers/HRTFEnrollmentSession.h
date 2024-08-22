// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRTFENROLLMENTSESSION_H
#define HRTFENROLLMENTSESSION_H

@class NSXPCConnection, AVCaptureVideoDataOutput, AVCaptureDeviceFormat, AVCaptureDevice, NSString, NSDictionary;
@protocol HRTFEnrollmentNotificationProtocol, HRTFSyncedCaptureSourceDelegate, RecordingManagerDelegate, OS_dispatch_queue, HRTFEnrollmentSessionDelegate;

#import <Foundation/Foundation.h>

#import "HRTFSyncedCaptureSource.h"
#import "RecordingManager.h"

@interface HRTFEnrollmentSession : NSObject <HRTFEnrollmentNotificationProtocol, HRTFSyncedCaptureSourceDelegate, RecordingManagerDelegate>

 {
    ? _flags;
    NSXPCConnection *_connection;
    HRTFSyncedCaptureSource *_outputSource;
    NSObject<OS_dispatch_queue> *_queue;
    id *_sessionStartCallback;
    RecordingManager *_recordingManager;
    BOOL _videoCaptureEnabled;
    BOOL _paused;
    AVCaptureVideoDataOutput *_colorDataOutput;
    unsigned int _preferredPixelFormat;
    unsigned int _preferredDepthFormat;
    CGSize _preferredColorResolution;
    CGSize _preferredDepthResolution;
    AVCaptureDeviceFormat *_finalColorFormat;
    AVCaptureDeviceFormat *_finalDepthFormat;
    AVCaptureDevice *_device;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HRTFEnrollmentSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger resultSize; // ivar: _resultSize
@property (readonly) NSDictionary *stateInfo; // ivar: _stateInfo
@property (readonly) Class superclass;


-(BOOL)_verifyCaptureDevice:(id)arg0 ;
-(id)getMovFileName;
-(id)getRecordingFolder;
-(id)getRecordingURL;
-(id)init;
-(void)assetDownloadSessionProgressUpdate:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveVideoData:(id)arg0 colorData:(id)arg1 depthData:(id)arg2 faceObject:(id)arg3 ;
-(void)didStartCaptureSessionWithError:(id)arg0 ;
-(void)initializeDevice;
-(void)pauseSession;
-(void)requestResultDataAtOffset:(NSUInteger)arg0 forLength:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)resumeSession;
-(void)sessionStarted:(BOOL)arg0 error:(id)arg1 ;
-(void)startSession:(BOOL)arg0 then:(id)arg1 ;
-(void)stopSession:(id)arg0 ;
-(void)updateResultSize:(NSUInteger)arg0 ;
-(void)updateState:(NSUInteger)arg0 withProgress:(float)arg1 facePoseStatus:(id)arg2 earPoseStatus:(id)arg3 errorStatus:(id)arg4 ;


@end


#endif