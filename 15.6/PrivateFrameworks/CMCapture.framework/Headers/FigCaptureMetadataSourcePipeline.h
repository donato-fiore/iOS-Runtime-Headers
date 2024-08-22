// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREMETADATASOURCEPIPELINE_H
#define FIGCAPTUREMETADATASOURCEPIPELINE_H



#import "FigCaptureSourcePipeline.h"
#import "BWNode.h"
#import "BWSynchronizerNode.h"

@interface FigCaptureMetadataSourcePipeline : FigCaptureSourcePipeline {
    BWNode *_sourceNode;
    BWSynchronizerNode *_synchronizerNode;
    *OpaqueCMClock _masterClock;
}




+(void)initialize;
-(void)dealloc;


@end


#endif