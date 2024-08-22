// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OFAUDIOCAPTUREMANAGER_H
#define OFAUDIOCAPTUREMANAGER_H

@class AVCaptureDeviceInput, NSURL, AVCaptureSession;
@protocol OFAudioRecorderDelegate, OFAudioCaptureManagerDelegate;

#import <Foundation/Foundation.h>

#import "OFAudioRecorder.h"

@interface OFAudioCaptureManager : NSObject <OFAudioRecorderDelegate>



@property (retain, nonatomic) AVCaptureDeviceInput *audioInput; // ivar: _audioInput
@property (nonatomic) NSUInteger backgroundRecordingID; // ivar: _backgroundRecordingID
@property (nonatomic) NSObject<OFAudioCaptureManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) id *deviceConnectedObserver; // ivar: _deviceConnectedObserver
@property (nonatomic) id *deviceDisconnectedObserver; // ivar: _deviceDisconnectedObserver
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (copy, nonatomic) NSURL *outputFileURL; // ivar: _outputFileURL
@property (retain, nonatomic) OFAudioRecorder *recorder; // ivar: _recorder
@property (retain, nonatomic) AVCaptureSession *session; // ivar: _session


-(BOOL)isRecording;
-(BOOL)openSession;
-(NSUInteger)micCount;
-(float)meanAudioLevel;
-(id)_audioDevice;
-(id)_tempFileURL;
-(id)initWithOutputFileURL:(id)arg0 ;
-(void)_removeFile:(id)arg0 ;
-(void)cancelRecording;
-(void)dealloc;
-(void)recorder:(id)arg0 recordingDidFinishToOutputFileURL:(id)arg1 error:(id)arg2 ;
-(void)recorderRecordingDidBegin:(id)arg0 ;
-(void)startRecording;
-(void)stopRecording;


@end


#endif