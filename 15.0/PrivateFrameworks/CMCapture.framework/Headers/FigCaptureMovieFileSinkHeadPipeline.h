// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREMOVIEFILESINKHEADPIPELINE_H
#define FIGCAPTUREMOVIEFILESINKHEADPIPELINE_H

@class NSArray, NSString;
@protocol BWMRCSceneObserver, BWSemanticStyleSceneObserver;


#import "FigCapturePipeline.h"
#import "BWSceneClassifierSinkNode.h"
#import "BWAudioConverterNode.h"
#import "BWNodeOutput.h"
#import "BWFileCoordinatorNode.h"
#import "BWPhotoDecompressorNode.h"
#import "BWIrisStagingNode.h"
#import "BWVideoDefringingNode.h"
#import "BWVideoOrientationMetadataNode.h"

@interface FigCaptureMovieFileSinkHeadPipeline : FigCapturePipeline {
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWAudioConverterNode *_audioConverterNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    int _sourceDeviceType;
}


@property (readonly, nonatomic) BWNodeOutput *audioOutput; // ivar: _audioOutput
@property (readonly, nonatomic) BWFileCoordinatorNode *fileCoordinatorNode; // ivar: _fileCoordinatorNode
@property (readonly, nonatomic) int indexOfVideoOrientationInMetadataOutputs; // ivar: _indexOfVideoOrientationInMetadataOutputs
@property (readonly, nonatomic) NSArray *indexesOfDetectedObjectsInMetadataOutputs; // ivar: _indexesOfDetectedObjectsInMetadataOutputs
@property (readonly, nonatomic) NSArray *inferenceConnections; // ivar: _inferenceConnections
@property (readonly, nonatomic) BWPhotoDecompressorNode *irisIntermediateJPEGPhotoDecompressorNode; // ivar: _irisIntermediateJPEGPhotoDecompressorNode
@property (readonly, nonatomic) BWIrisStagingNode *irisStagingNode; // ivar: _irisStagingNode
@property (readonly, nonatomic) NSArray *metadataOutputs; // ivar: _metadataOutputs
@property (nonatomic, setter=setMRCSceneObserver:) NSObject<BWMRCSceneObserver> *mrcSceneObserver;
@property (nonatomic) BOOL sceneClassifierSuspended;
@property (nonatomic) NSObject<BWSemanticStyleSceneObserver> *semanticStyleSceneObserver;
@property (readonly, nonatomic) NSString *videoConnectionID; // ivar: _videoConnectionID
@property (readonly, nonatomic) BWVideoDefringingNode *videoDefringingNode; // ivar: _videoDefringingNode
@property (readonly, nonatomic) BWVideoOrientationMetadataNode *videoOrientationMetadataNode; // ivar: _videoOrientationMetadataNode
@property (readonly, nonatomic) BWNodeOutput *videoOutput; // ivar: _videoOutput
@property (readonly, nonatomic) int videoSourceDeviceType; // ivar: _videoSourceDeviceType
@property (readonly, nonatomic) NSString *videoSourceID; // ivar: _videoSourceID


-(id)initWithConfiguration:(id)arg0 videoSourceCaptureOutput:(id)arg1 audioSourceCaptureOutput:(id)arg2 detectedObjectBoxedMetadataOutputs:(id)arg3 objectDetectionSourceOutput:(id)arg4 metadataSourcePipelineOutputs:(id)arg5 graph:(id)arg6 parentPipeline:(id)arg7 inferenceScheduler:(id)arg8 captureDevice:(id)arg9 audioSourceDelegate:(id)arg10 fileCoordinatorStatusDelegate:(id)arg11 irisRequestDelegate:(id)arg12 masterClock:(struct OpaqueCMClock *)arg13 ;
-(void)dealloc;


@end


#endif