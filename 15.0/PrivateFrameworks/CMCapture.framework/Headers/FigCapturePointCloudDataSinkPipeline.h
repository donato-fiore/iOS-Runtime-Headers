// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREPOINTCLOUDDATASINKPIPELINE_H
#define FIGCAPTUREPOINTCLOUDDATASINKPIPELINE_H

@class NSString;


#import "FigCaptureRemoteQueueSinkPipeline.h"

@interface FigCapturePointCloudDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    NSString *_sourceID;
}




+(void)initialize;
-(void)dealloc;


@end


#endif