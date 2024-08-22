// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREAUDIOFILESINKPIPELINE_H
#define FIGCAPTUREAUDIOFILESINKPIPELINE_H



#import "FigCaptureSinkPipeline.h"
#import "BWFileCoordinatorNode.h"
#import "BWAudioConverterNode.h"
#import "BWAudioFileSinkNode.h"

@interface FigCaptureAudioFileSinkPipeline : FigCaptureSinkPipeline {
    BWFileCoordinatorNode *_fileCoordinatorNode;
    BWAudioConverterNode *_audioConverterNode;
    BWAudioFileSinkNode *_audioFileSinkNode;
}




+(void)initialize;
-(void)dealloc;


@end


#endif