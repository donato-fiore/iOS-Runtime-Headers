// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVIDEORECORDER_H
#define CKVIDEORECORDER_H

@class UIViewController, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureVideoPreviewLayer, NSString, NSURL, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureMovieFileOutput;
@protocol AVCaptureFileOutputRecordingDelegate, OS_dispatch_queue, CKVideoRecorderDelegate;



@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate>

 {
    NSInteger _currentDevice;
    BOOL _previousStatusBarHidden;
    AVCaptureDevice *_frontFacingCamera;
    AVCaptureDevice *_rearFacingCamera;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
}


@property (retain, nonatomic) AVCaptureDeviceInput *audioInput; // ivar: _audioInput
@property (nonatomic) NSInteger cameraDevice;
@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer; // ivar: _captureVideoPreviewLayer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKVideoRecorderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVCaptureDeviceInput *frontVideoInput; // ivar: _frontVideoInput
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *outputFileURL; // ivar: _outputFileURL
@property (retain, nonatomic) AVCaptureDeviceInput *rearVideoInput; // ivar: _rearVideoInput
@property (retain, nonatomic) AVCaptureSession *session; // ivar: _session
@property (retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // ivar: _stillImageOutput
@property (readonly) Class superclass;
@property (retain, nonatomic) AVCaptureMovieFileOutput *videoOutput; // ivar: _videoOutput


-(BOOL)startVideoCapture;
-(id)_cameraWithPosition:(NSInteger)arg0 ;
-(id)_configureFrontVideoInput;
-(id)_configureRearVideoInput;
-(id)audioDevice;
-(id)frontFacingCamera;
-(id)init;
-(id)rearFacingCamera;
-(void)cancel;
-(void)captureOutput:(id)arg0 didFinishRecordingToOutputFileAtURL:(id)arg1 fromConnections:(id)arg2 error:(id)arg3 ;
-(void)captureOutput:(id)arg0 didStartRecordingToOutputFileAtURL:(id)arg1 fromConnections:(id)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)setupCamera:(id)arg0 ;
-(void)stopVideoCapture;
-(void)takePicture;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif