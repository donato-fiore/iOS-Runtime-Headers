// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTURECINEMATOGRAPHYPIPELINE_H
#define FIGCAPTURECINEMATOGRAPHYPIPELINE_H

@class NSString;


#import "FigCapturePipeline.h"
#import "BWVideoDepthNode.h"
#import "BWFusionTrackerNode.h"
#import "BWRealtimeCinematographyNode.h"

@interface FigCaptureCinematographyPipeline : FigCapturePipeline {
    BWVideoDepthNode *_videoDepthNode;
    BWFusionTrackerNode *_trackerNode;
    BWRealtimeCinematographyNode *_cinematographyNode;
    NSString *_sourceID;
}




+(void)initialize;
-(void)dealloc;


@end


#endif