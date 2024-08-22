// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWVIDEOORIENTATIONMETADATANODE_H
#define BWVIDEOORIENTATIONMETADATANODE_H

@protocol OS_dispatch_queue;


#import "BWNode.h"
#import "BWVideoOrientationTimeMachine.h"

@interface BWVideoOrientationMetadataNode : BWNode {
    *OpaqueCMClock _clock;
    *OpaqueCMClock _masterClock;
    int _videoOrientation;
    BOOL _videoMirrored;
    int _sourcePosition;
    *opaqueCMFormatDescription _boxedMetadataFormatDescription;
    unsigned int _localIDOfOrientationMetadata;
    BOOL _recordVideoOrientationAndMirroringChanges;
    BOOL _physicalMirroringForMovieRecordingEnabled;
    BOOL _flipMetadataHorizontally;
    BOOL _recording;
    int _exifOrientation;
    ? _bbufCache;
    BWVideoOrientationTimeMachine *_videoOrientationTimeMachine;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}


@property (readonly, nonatomic) BWVideoOrientationTimeMachine *videoOrientationTimeMachine;


+(void)initialize;
-(BOOL)physicalMirroringForMovieRecordingEnabled;
-(id)init;
-(id)nodeSubType;
-(id)nodeType;
-(int)sourcePosition;
-(struct OpaqueCMClock *)masterClock;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setMasterClock:(struct OpaqueCMClock *)arg0 ;
-(void)setPhysicalMirroringForMovieRecordingEnabled:(BOOL)arg0 ;
-(void)setSourcePosition:(int)arg0 ;
-(void)updateVideoMirrored:(BOOL)arg0 ;
-(void)updateVideoOrientation:(int)arg0 ;


@end


#endif