// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREMETADATASINKPIPELINE_H
#define FIGCAPTUREMETADATASINKPIPELINE_H

@class NSString;


#import "FigCaptureRemoteQueueSinkPipeline.h"
#import "BWMetadataDetectorGatingNode.h"
#import "BWMRCNode.h"
#import "BWPreviewHistogramNode.h"
#import "BWFaceTrackingNode.h"
#import "BWFaceDetectionNode.h"

@interface FigCaptureMetadataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWMetadataDetectorGatingNode *_metadataGatingNode;
    BWMRCNode *_mrcNode;
    BOOL _mrcSuspended;
    BOOL _mrcConnectionDisabled;
    BWPreviewHistogramNode *_previewHistogramNode;
    BWFaceTrackingNode *_faceTrackingNode;
    BWFaceDetectionNode *_faceDetectionNode;
    NSString *_sourceID;
    int _sourceDeviceType;
}




+(void)initialize;
-(void)dealloc;


@end


#endif