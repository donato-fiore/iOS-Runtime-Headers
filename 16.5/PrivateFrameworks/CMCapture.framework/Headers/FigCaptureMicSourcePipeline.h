// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREMICSOURCEPIPELINE_H
#define FIGCAPTUREMICSOURCEPIPELINE_H



#import "FigCaptureSourcePipeline.h"
#import "BWAudioSourceNode.h"
#import "BWZoomCommandHandler.h"

@interface FigCaptureMicSourcePipeline : FigCaptureSourcePipeline {
    BWAudioSourceNode *_sourceNode;
    BWFanOutNode" _splitterNodesByMicSourcePosition;
    unsigned int _nextOutputIndexByMicSourcePosition;
    BWZoomCommandHandler *_zoomCommandHandlerForStereoAudioCapture;
}




+(void)initialize;
-(void)dealloc;


@end


#endif