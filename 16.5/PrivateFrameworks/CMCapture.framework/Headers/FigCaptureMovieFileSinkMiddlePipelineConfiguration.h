// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREMOVIEFILESINKMIDDLEPIPELINECONFIGURATION_H
#define FIGCAPTUREMOVIEFILESINKMIDDLEPIPELINECONFIGURATION_H


#import <Foundation/Foundation.h>

#import "BWPipelineStage.h"
#import "FigCaptureMovieFileSinkPipelineConfiguration.h"

@interface FigCaptureMovieFileSinkMiddlePipelineConfiguration : NSObject

@property (retain, nonatomic) BWPipelineStage *movieFilePipelineStage; // ivar: _movieFilePipelineStage
@property (retain, nonatomic) FigCaptureMovieFileSinkPipelineConfiguration *movieFileSinkPipelineConfiguration; // ivar: _movieFileSinkPipelineConfiguration


-(id)init;
-(void)dealloc;


@end


#endif