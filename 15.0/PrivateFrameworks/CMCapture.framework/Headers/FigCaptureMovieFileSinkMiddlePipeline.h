// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREMOVIEFILESINKMIDDLEPIPELINE_H
#define FIGCAPTUREMOVIEFILESINKMIDDLEPIPELINE_H

@class NSMutableArray;


#import "FigCapturePipeline.h"
#import "BWFanOutNode.h"
#import "BWOverCaptureFanOutNode.h"
#import "FigCaptureMovieFileSinkHeadPipeline.h"
#import "FigCaptureVISPipeline.h"

@interface FigCaptureMovieFileSinkMiddlePipeline : FigCapturePipeline {
    BWFanOutNode *_videoFanOut;
    BWOverCaptureFanOutNode *_audioFanOut;
    NSMutableArray *_metadataFanOuts;
    FigCaptureMovieFileSinkHeadPipeline *_headPipeline;
    NSUInteger _numberOfTailsToSupport;
}


@property (readonly, nonatomic) FigCaptureVISPipeline *overCaptureVISPipeline; // ivar: _overCaptureVISPipeline
@property (readonly, nonatomic) FigCaptureVISPipeline *visPipeline; // ivar: _visPipeline


-(id)audioOutputForTailIndex:(NSUInteger)arg0 ;
-(id)initWithConfiguration:(id)arg0 graph:(id)arg1 parentPipeline:(id)arg2 headPipeline:(id)arg3 captureDevice:(id)arg4 ;
-(id)metadataOutputsForTailIndex:(NSUInteger)arg0 ;
-(id)videoOutputForTailIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif