// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CIDVRGBAVSESSIONMANAGER_H
#define _CIDVRGBAVSESSIONMANAGER_H

@class CIDVRGBAVSessionManagerBase, AVCaptureDataOutputSynchronizer, AVCapturePhotoOutput, AVCaptureMetadataOutput, AVCaptureVideoDataOutput, NSArray, NSString;
@protocol AVCapturePhotoCaptureDelegate, AVCaptureDataOutputSynchronizerDelegate, CIDVRGBAVCaptureFileOutputDelegate;


#import "CIDVRGBAVCaptureFileOutput.h"

@interface _CIDVRGBAVSessionManager : CIDVRGBAVSessionManagerBase <AVCapturePhotoCaptureDelegate, AVCaptureDataOutputSynchronizerDelegate, CIDVRGBAVCaptureFileOutputDelegate>

 {
    AVCaptureDataOutputSynchronizer *_dataSynchronizer;
    AVCapturePhotoOutput *_photoOutput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureVideoDataOutput *_videoOutput;
    CIDVRGBAVCaptureFileOutput *_fileOutput;
    NSUInteger _fps;
    BOOL _hasReceivedFirstFrame;
    BOOL _shouldWriteFrame;
    NSArray *lastFrameFaces;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_facesFromMetadataDictionary:(id)arg0 ;
-(id)buildAVSessionCaptureOutputs;
-(struct ? )getCurrentTimestamp;
-(void)captureOutput:(id)arg0 didFinishProcessingPhoto:(id)arg1 error:(id)arg2 ;
-(void)captureOutput:(id)arg0 didFinishRecordingAtURL:(id)arg1 error:(id)arg2 ;
-(void)capturePhotoUsingFlash:(BOOL)arg0 ;
-(void)configureAVSessionCaptureOutputs;
-(void)dataOutputSynchronizer:(id)arg0 didOutputSynchronizedDataCollection:(id)arg1 ;
-(void)dealloc;
-(void)invalidateAVSession;
-(void)pauseFileRecording;
-(void)restartFileRecordingWithCompletionHandler:(id)arg0 ;
-(void)resumeFileRecording;
-(void)startAVSession;
-(void)stopAVSession;
-(void)stopFileRecording;


@end


#endif