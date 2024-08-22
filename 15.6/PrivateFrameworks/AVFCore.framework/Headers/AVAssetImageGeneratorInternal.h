// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETIMAGEGENERATORINTERNAL_H
#define AVASSETIMAGEGENERATORINTERNAL_H

@class NSString, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVAsset.h"
#import "AVVideoComposition.h"
#import "AVCustomVideoCompositorSession.h"

@interface AVAssetImageGeneratorInternal : NSObject {
    AVWeakReference *weakReference;
    *OpaqueFigAssetImageGenerator generator;
    AVAsset *asset;
    BOOL appliesPreferredTrackTransform;
    CGSize maximumSize;
    NSString *apertureMode;
    ? requestedTimeToleranceBefore;
    ? requestedTimeToleranceAfter;
    NSMutableArray *requests;
    NSObject<OS_dispatch_queue> *requestsQueue;
    int nextRequestID;
    AVVideoComposition *videoComposition;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSObject<OS_dispatch_queue> *imageRequestQueue;
    int cancelledRequestIDThreshold;
    NSObject<OS_dispatch_queue> *generateImagesAsyncQueue;
    BOOL prefersStandardDynamicRange;
}






@end


#endif