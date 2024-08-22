// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREVISPIPELINE_H
#define FIGCAPTUREVISPIPELINE_H



#import "FigCapturePipeline.h"
#import "BWMotionAttachmentsNode.h"
#import "BWVISNode.h"

@interface FigCaptureVISPipeline : FigCapturePipeline {
    BWMotionAttachmentsNode *_motionAttachmentsNode;
    BWVISNode *_visNode;
    BWVISNode *_sdofVISNode;
    CGRect _irisVISCleanOutputRect;
}




+(void)initialize;
-(void)dealloc;


@end


#endif