// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREMOVIEFILESINKHEADPIPELINECONFIGURATION_H
#define FIGCAPTUREMOVIEFILESINKHEADPIPELINECONFIGURATION_H


#import <Foundation/Foundation.h>

#import "BWPipelineStage.h"
#import "FigCaptureMovieFileSinkPipelineConfiguration.h"

@interface FigCaptureMovieFileSinkHeadPipelineConfiguration : NSObject

@property (retain, nonatomic) BWPipelineStage *movieFilePipelineStage; // ivar: _movieFilePipelineStage
@property (retain, nonatomic) FigCaptureMovieFileSinkPipelineConfiguration *movieFileSinkPipelineConfiguration; // ivar: _movieFileSinkPipelineConfiguration
@property (retain, nonatomic) BWPipelineStage *transferPipelineStage; // ivar: _transferPipelineStage
@property (nonatomic) int visMotionMetadataPreloadingMode; // ivar: _visMotionMetadataPreloadingMode


-(void)dealloc;


@end


#endif