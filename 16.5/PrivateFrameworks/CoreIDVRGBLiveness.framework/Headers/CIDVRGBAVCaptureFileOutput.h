// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIDVRGBAVCAPTUREFILEOUTPUT_H
#define CIDVRGBAVCAPTUREFILEOUTPUT_H

@class AVAssetWriter, AVAssetWriterInput, NSURL, NSDictionary, NSString;
@protocol CIDVRGBAVCaptureFileOutputDelegate;

#import <Foundation/Foundation.h>


@interface CIDVRGBAVCaptureFileOutput : NSObject {
    AVAssetWriter *_writer;
    AVAssetWriterInput *_writerInput;
    NSURL *_outputFile;
    BOOL _recording;
    NSDictionary *_videoSettings;
    NSString *_fileType;
    NSString *_fileName;
    ? _currentTimestamp;
}


@property (weak, nonatomic) NSObject<CIDVRGBAVCaptureFileOutputDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) ? startTime; // ivar: _startTime


-(BOOL)_errorIsFileExists:(id)arg0 ;
-(NSUInteger)_freeDiskSpaceInBytes;
-(id)initWithVideoOutput:(id)arg0 ;
-(struct ? )getCurrentTimestamp;
-(void)_removeOutputFile;
-(void)_restartRecording;
-(void)invalidateRecording;
-(void)recordFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)restartRecordingWithCompletionHandler:(id)arg0 ;
-(void)startRecording;
-(void)stopRecording;


@end


#endif