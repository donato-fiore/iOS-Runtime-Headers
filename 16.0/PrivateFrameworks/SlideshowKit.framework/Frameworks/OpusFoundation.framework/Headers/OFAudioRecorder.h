// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OFAUDIORECORDER_H
#define OFAUDIORECORDER_H

@class NSString, AVCaptureMovieFileOutput, NSURL, AVCaptureSession;
@protocol AVCaptureFileOutputRecordingDelegate, OFAudioRecorderDelegate;

#import <Foundation/Foundation.h>


@interface OFAudioRecorder : NSObject <AVCaptureFileOutputRecordingDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OFAudioRecorderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVCaptureMovieFileOutput *movieFileOutput; // ivar: _movieFileOutput
@property (copy, nonatomic) NSURL *outputFileURL; // ivar: _outputFileURL
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, nonatomic) BOOL recordsAudio;
@property (retain, nonatomic) AVCaptureSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)_connectionWithMediaType:(id)arg0 ;
-(id)initWithSession:(id)arg0 outputFileURL:(id)arg1 ;
-(void)captureOutput:(id)arg0 didFinishRecordingToOutputFileAtURL:(id)arg1 fromConnections:(id)arg2 error:(id)arg3 ;
-(void)captureOutput:(id)arg0 didStartRecordingToOutputFileAtURL:(id)arg1 fromConnections:(id)arg2 ;
-(void)dealloc;
-(void)startRecording;
-(void)stopRecording;


@end


#endif