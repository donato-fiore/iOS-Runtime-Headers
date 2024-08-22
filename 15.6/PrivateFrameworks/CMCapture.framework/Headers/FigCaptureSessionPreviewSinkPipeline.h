// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURESESSIONPREVIEWSINKPIPELINE_H
#define FIGCAPTURESESSIONPREVIEWSINKPIPELINE_H

@class NSString;


#import "FigCapturePreviewSinkPipeline.h"

@interface FigCaptureSessionPreviewSinkPipeline : FigCapturePreviewSinkPipeline

@property (nonatomic) BOOL imageQueueUpdatedNotificationSent; // ivar: _imageQueueUpdatedNotificationSent
@property (nonatomic) BOOL previewRunning; // ivar: _previewRunning
@property (nonatomic) BOOL previewSinkEnabled; // ivar: _previewSinkEnabled
@property (retain, nonatomic) NSString *sourceID; // ivar: _sourceID


-(void)dealloc;


@end


#endif