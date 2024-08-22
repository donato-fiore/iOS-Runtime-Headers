// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTUREVIDEOPREVIEWLAYERINTERNAL_H
#define AVCAPTUREVIDEOPREVIEWLAYERINTERNAL_H

@class NSString, CALayer, AVWeakReference, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVCaptureSession.h"
#import "AVCaptureConnection.h"
#import "AVSemanticStyle.h"

@interface AVCaptureVideoPreviewLayerInternal : NSObject {
    NSString *sinkID;
    AVCaptureSession *session;
    AVCaptureConnection *connection;
    *OpaqueFigCaptureSession figCaptureSession;
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    CALayer *sublayer;
    CGSize sensorSize;
    NSString *sensorToPreviewVTScalingMode;
    unsigned int imageQueueSlot;
    CGSize previewSize;
    CGFloat previewRotationDegrees;
    NSString *gravity;
    BOOL disableActions;
    AVWeakReference *weakReference;
    BOOL isPreviewing;
    NSInteger orientation;
    BOOL automaticallyAdjustsMirroring;
    BOOL mirrored;
    BOOL isPresentationLayer;
    BOOL visible;
    BOOL isPaused;
    BOOL chromaNoiseReductionEnabled;
    int changeSeed;
    CGAffineTransform captureDeviceTransform;
    CGFloat rollAdjustment;
    BOOL depthDataDeliverySupported;
    BOOL depthDataDeliveryEnabled;
    BOOL filterRenderingEnabled;
    BOOL unoptimizedFilterRenderingEnabled;
    NSArray *videoPreviewFilters;
    BOOL semanticStyleRenderingSupported;
    BOOL semanticStyleRenderingEnabled;
    AVSemanticStyle *semanticStyle;
    CGFloat oddScreenWidth;
    CGFloat oddScreenScale;
}






@end


#endif