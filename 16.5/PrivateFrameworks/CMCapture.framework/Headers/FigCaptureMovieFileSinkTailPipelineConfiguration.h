// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREMOVIEFILESINKTAILPIPELINECONFIGURATION_H
#define FIGCAPTUREMOVIEFILESINKTAILPIPELINECONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "BWNodeOutput.h"
#import "BWPhotoDecompressorNode.h"
#import "BWPipelineStage.h"
#import "FigCaptureMovieFileSinkPipelineConfiguration.h"

@interface FigCaptureMovieFileSinkTailPipelineConfiguration : NSObject

@property (retain, nonatomic) BWNodeOutput *audioSourceOutput; // ivar: _audioSourceOutput
@property (nonatomic) BOOL delayedCompressorCleanupEnabled; // ivar: _delayedCompressorCleanupEnabled
@property (nonatomic) int indexOfVideoOrientationInMetadataOutputs; // ivar: _indexOfVideoOrientationInMetadataOutputs
@property (retain, nonatomic) NSArray *indexesOfDetectedObjectsInMetadataOutputs; // ivar: _indexesOfDetectedObjectsInMetadataOutputs
@property (retain, nonatomic) BWPhotoDecompressorNode *irisIntermediateJPEGPhotoDecompressorNode; // ivar: _irisIntermediateJPEGPhotoDecompressorNode
@property (retain, nonatomic) NSArray *metadataSourceOutputs; // ivar: _metadataSourceOutputs
@property (retain, nonatomic) BWPipelineStage *movieFilePipelineStage; // ivar: _movieFilePipelineStage
@property (retain, nonatomic) FigCaptureMovieFileSinkPipelineConfiguration *movieFileSinkPipelineConfiguration; // ivar: _movieFileSinkPipelineConfiguration
@property (retain, nonatomic) BWNodeOutput *videoSourceOutput; // ivar: _videoSourceOutput
@property (nonatomic) BOOL vitalityScoringEnabled; // ivar: _vitalityScoringEnabled


-(id)init;
-(void)dealloc;


@end


#endif