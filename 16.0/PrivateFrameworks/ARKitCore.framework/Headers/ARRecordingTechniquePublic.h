// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARRECORDINGTECHNIQUEPUBLIC_H
#define ARRECORDINGTECHNIQUEPUBLIC_H

@class MOVWriterInterface, NSMutableDictionary, NSError, NSMutableSet, NSString, NSURL;
@protocol MOVWriterInterfaceDelegate, ARRecordingTechniqueProtocol, OS_dispatch_queue, ARRecordingTechniqueDelegate;


#import "ARTechnique.h"
#import "ARParentImageSensorSettings.h"

@interface ARRecordingTechniquePublic : ARTechnique <MOVWriterInterfaceDelegate, ARRecordingTechniqueProtocol>

 {
    NSObject<OS_dispatch_queue> *_recordingQueue;
    NSObject<OS_dispatch_queue> *_timeSensitiveQueue;
    MOVWriterInterface *_writer;
    NSUInteger _sensorDataTypes;
    CGFloat _sessionSourceTime;
    BOOL _writerReady;
    NSMutableDictionary *_lastRecordedTimestamps;
    NSError *_finishedError;
    BOOL _recordCollaborationData;
    NSMutableSet *_knownVIOSessionIDs;
    BOOL _recordPearlDepthData;
    *__CVBuffer _pearlFixedPointUnsigned13_3PixelBuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expectAudioData; // ivar: _expectAudioData
@property (nonatomic) BOOL expectCustomData; // ivar: _expectCustomData
@property (nonatomic) BOOL expectDepthData; // ivar: _expectDepthData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *outputFileURL; // ivar: _outputFileURL
@property (retain, nonatomic) ARParentImageSensorSettings *parentImageSensorSettings; // ivar: _parentImageSensorSettings
@property (readonly, nonatomic) NSUInteger recordingSensorDataTypes;
@property (weak) NSObject<ARRecordingTechniqueDelegate> *recordingTechniqueDelegate; // ivar: _recordingTechniqueDelegate
@property (nonatomic) BOOL shouldSaveVideoInPhotosLibrary; // ivar: _shouldSaveVideoInPhotosLibrary
@property NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)isSupported;
-(BOOL)allowedToWrite;
-(BOOL)finished;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredSensorDataTypes;
-(id)createFileMetadata;
-(id)init;
-(id)initWithFileURL:(id)arg0 recordingSensorDataTypes:(NSUInteger)arg1 ;
-(id)initWithFileURL:(id)arg0 recordingSensorDataTypes:(NSUInteger)arg1 startImmediately:(BOOL)arg2 recordCollaborationData:(BOOL)arg3 ;
-(id)initWithFileURL:(id)arg0 sensorDataTypes:(NSUInteger)arg1 ;
-(id)processData:(id)arg0 ;
-(void)_fail:(id)arg0 ;
-(void)_finish:(id)arg0 ;
-(void)_finishRecording;
-(void)_startRecording;
-(void)abortRecording;
-(void)dealloc;
-(void)didFailWithError:(id)arg0 ;
-(void)didFinishRecording;
-(void)finishRecording;
-(void)isReadyToRecord;
-(void)processTimeSensitiveNSCoderObject:(id)arg0 withTimestamp:(CGFloat)arg1 metadataID:(id)arg2 ;
-(void)recordAddedAnchor:(id)arg0 ;
-(void)recordCollaborationData:(id)arg0 localSession:(BOOL)arg1 ;
-(void)recordCustomData:(id)arg0 forTimestamp:(CGFloat)arg1 ;
-(void)recordRemovedAnchor:(id)arg0 ;
-(void)removeTemporaryVideoFile;
-(void)setupCustomTrack;
-(void)setupSensorTracks;
-(void)startRecording;
-(void)writeAudioData:(id)arg0 ;
-(void)writeImageData:(id)arg0 ;
-(void)writePearlDepthData:(id)arg0 withTimestamp:(CGFloat)arg1 fromCaptureDevice:(id)arg2 ;
-(void)writeResultData:(id)arg0 withTimestamp:(CGFloat)arg1 ;
-(void)writeSensorData:(id)arg0 ;
-(void)writeTimeOfFlightData:(id)arg0 ;


@end


#endif