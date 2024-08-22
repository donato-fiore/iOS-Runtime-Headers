// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTUREMOVIEFILEOUTPUT_H
#define AVCAPTUREMOVIEFILEOUTPUT_H

@class NSArray;


#import "AVCaptureFileOutput.h"
#import "AVCaptureMovieFileOutputInternal.h"

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {
    AVCaptureMovieFileOutputInternal *_internal;
}


@property (readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) ? movieFragmentInterval;
@property (readonly, nonatomic) NSUInteger primaryConstituentDeviceRestrictedSwitchingBehaviorConditionsForRecording;
@property (readonly, nonatomic) NSInteger primaryConstituentDeviceSwitchingBehaviorForRecording;
@property (nonatomic, getter=isPrimaryConstituentDeviceSwitchingBehaviorForRecordingEnabled) BOOL primaryConstituentDeviceSwitchingBehaviorForRecordingEnabled;


+(BOOL)consolidateMovieFragmentsInFile:(id)arg0 error:(*id)arg1 ;
+(BOOL)updateMovieMetadataInFile:(id)arg0 withMetadata:(id)arg1 error:(*id)arg2 ;
+(NSInteger)uniqueID;
+(id)new;
+(void)initialize;
-(BOOL)_recordingInProgress;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)isDepthCaptureEnabled;
-(BOOL)isRecording;
-(BOOL)isRecordingPaused;
-(BOOL)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)arg0 ;
-(BOOL)sendsLastVideoPreviewFrame;
-(id)_avErrorUserInfoDictionaryForError:(int)arg0 wrapper:(id)arg1 payload:(id)arg2 ;
-(id)addConnection:(id)arg0 error:(*id)arg1 ;
-(id)bravoCameraSelectionBehaviorForRecording;
-(id)connectionMediaTypes;
-(id)init;
-(id)outputFileURL;
-(id)outputSettingsForConnection:(id)arg0 ;
-(id)supportedOutputSettingsKeysForConnection:(id)arg0 ;
-(int)_stopRecording;
-(struct CGSize )outputSizeForSourceFormat:(id)arg0 ;
-(void)_propagateBravoSwitchingBehaviorWhenRecording;
-(void)_removeRecordingDelegateWrapper:(id)arg0 ;
-(void)_startRecording:(id)arg0 ;
-(void)_updateAvailableVideoCodecTypesForSourceDevice:(id)arg0 ;
-(void)_updateBravoCameraSelectionBehaviorForSourceDevice:(id)arg0 ;
-(void)_updateDepthDataDeliverySupportedForSourceDevice:(id)arg0 ;
-(void)_updateSupportedPropertiesForSourceDevice:(id)arg0 ;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)dealloc;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)handleChangedActiveFormat:(id)arg0 forDevice:(id)arg1 ;
-(void)handleDidPauseRecordingNotificationForWrapper:(id)arg0 withPayload:(id)arg1 ;
-(void)handleDidResumeRecordingNotificationForWrapper:(id)arg0 withPayload:(id)arg1 ;
-(void)handleDidStartRecordingNotificationForWrapper:(id)arg0 withPayload:(id)arg1 ;
-(void)handleDidStopRecordingNotificationForMomentCaptureWrapper:(id)arg0 withPayload:(id)arg1 demoof:(BOOL)arg2 addMetadata:(BOOL)arg3 ;
-(void)handleDidStopRecordingNotificationForWrapper:(id)arg0 withPayload:(id)arg1 demoof:(BOOL)arg2 addMetadata:(BOOL)arg3 ;
-(void)handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)pauseRecording;
-(void)removeConnection:(id)arg0 ;
-(void)resumeRecording;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)setBravoCameraSelectionBehaviorForRecording:(id)arg0 ;
-(void)setConnectionsActive:(BOOL)arg0 ;
-(void)setDepthCaptureEnabled:(BOOL)arg0 ;
-(void)setOutputSettings:(id)arg0 forConnection:(id)arg1 ;
-(void)setRecordsVideoOrientationAndMirroringChanges:(BOOL)arg0 asMetadataTrackForConnection:(id)arg1 ;
-(void)setSendsLastVideoPreviewFrame:(BOOL)arg0 ;
-(void)startRecordingMovieWithSettings:(id)arg0 delegate:(id)arg1 ;
-(void)startRecordingToOutputFileURL:(id)arg0 recordingDelegate:(id)arg1 ;
-(void)stopRecording;


@end


#endif