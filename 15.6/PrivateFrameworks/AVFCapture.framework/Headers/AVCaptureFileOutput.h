// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTUREFILEOUTPUT_H
#define AVCAPTUREFILEOUTPUT_H

@class NSURL;
@protocol AVCaptureFileOutputDelegate;


#import "AVCaptureOutput.h"
#import "AVCaptureFileOutputInternal.h"

@interface AVCaptureFileOutput : AVCaptureOutput {
    AVCaptureFileOutputInternal *_fileOutputInternal;
}


@property (nonatomic) NSObject<AVCaptureFileOutputDelegate> *delegate; // ivar: _delegate
@property (nonatomic) ? maxRecordedDuration;
@property (nonatomic) NSInteger maxRecordedFileSize;
@property (nonatomic) NSInteger minFreeDiskSpaceLimit;
@property (readonly, nonatomic) NSURL *outputFileURL;
@property (readonly, nonatomic) ? recordedDuration;
@property (readonly, nonatomic) NSInteger recordedFileSize;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, nonatomic, getter=isRecordingPaused) BOOL recordingPaused;


+(void)initialize;
-(BOOL)pausesRecordingOnInterruption;
-(id)initSubclass;
-(void)dealloc;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)setPausesRecordingOnInterruption:(BOOL)arg0 ;
-(void)startRecordingToOutputFileURL:(id)arg0 recordingDelegate:(id)arg1 ;
-(void)stopRecording;


@end


#endif