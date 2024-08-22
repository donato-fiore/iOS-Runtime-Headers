// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKAUDIORECORDER_H
#define CKAUDIORECORDER_H

@class NSString, NSURL, NSDate;
@protocol CKVoiceControllerDelegate, CKAudioRecorderDelegate;

#import <Foundation/Foundation.h>

#import "CKVoiceController.h"

@interface CKAudioRecorder : NSObject <CKVoiceControllerDelegate>



@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKAudioRecorderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) *OpaqueAudioFileID fileID; // ivar: _fileID
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isRecording) BOOL recording; // ivar: _recording
@property (nonatomic, getter=isRecordingEmpty) BOOL recordingEmpty; // ivar: _recordingEmpty
@property (nonatomic) BOOL shouldPlayStartSound; // ivar: _shouldPlayStartSound
@property (nonatomic) BOOL shouldPlayStopSound; // ivar: _shouldPlayStopSound
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalPacketsCount; // ivar: _totalPacketsCount
@property (retain, nonatomic) CKVoiceController *voiceController; // ivar: _voiceController


-(id)init;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)cancelRecording;
-(void)dealloc;
-(void)resetState;
-(void)startRecordingAndPlaySound:(BOOL)arg0 ;
-(void)startRecordingForRaiseGesture;
-(void)startRecordingForRaiseGesture:(BOOL)arg0 shouldPlaySound:(BOOL)arg1 ;
-(void)stopRecording:(id)arg0 ;
-(void)stopRecordingAndPlaySound:(BOOL)arg0 completion:(id)arg1 ;
-(void)voiceController:(id)arg0 didUpdateAveragePower:(float)arg1 ;
-(void)voiceControllerDidDetectStartpoint:(id)arg0 ;
-(void)voiceControllerDidFinishRecording:(id)arg0 successfully:(BOOL)arg1 ;
-(void)voiceControllerDidStartRecording:(id)arg0 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg0 buffer:(id)arg1 ;


@end


#endif