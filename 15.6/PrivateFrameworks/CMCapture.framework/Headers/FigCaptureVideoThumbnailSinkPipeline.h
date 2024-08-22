// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREVIDEOTHUMBNAILSINKPIPELINE_H
#define FIGCAPTUREVIDEOTHUMBNAILSINKPIPELINE_H

@class NSString;
@protocol BWImageQueueSinkNodePreviewTapDelegate, OS_dispatch_queue, BWPipelineNotificationDelegate;


#import "FigCaptureSinkPipeline.h"
#import "BWPixelTransferNode.h"
#import "BWImageQueueSinkNode.h"

@interface FigCaptureVideoThumbnailSinkPipeline : FigCaptureSinkPipeline <BWImageQueueSinkNodePreviewTapDelegate>

 {
    BWPixelTransferNode *_scalerNode;
    BWImageQueueSinkNode *_imageQueueSinkNode;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _didPropagateCurrentImageQueue;
    id<BWPipelineNotificationDelegate> *_notificationDelegate;
    NSString *_sourceID;
    int _sourceDeviceType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(void)dealloc;
-(void)imageQueueSinkNode:(id)arg0 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withSuccess:(BOOL)arg2 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg0 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg0 atHostTime:(NSInteger)arg1 ;
-(void)setDiscardsSampleData:(BOOL)arg0 ;


@end


#endif