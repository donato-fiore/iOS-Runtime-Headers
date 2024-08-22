// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVSAMPLEBUFFERRENDERSYNCHRONIZERINTERNAL_H
#define AVSAMPLEBUFFERRENDERSYNCHRONIZERINTERNAL_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVSampleBufferDisplayLayer.h"

@interface AVSampleBufferRenderSynchronizerInternal : NSObject {
    AVWeakReference *weakObserver;
    *OpaqueCMTimebase readOnlyTimebase;
    NSObject<OS_dispatch_queue> *rateQueue;
    float rate;
    ? mostRecentlySetTime;
    NSObject<OS_dispatch_queue> *rendererListQueue;
    NSMutableArray *renderers;
    NSMutableArray *timedRenderRemovals;
    NSObject<OS_dispatch_queue> *figSynchronizerAccessQueue;
    *OpaqueFigSampleBufferRenderSynchronizer figSynchronizer;
    NSString *STSLabel;
    AVSampleBufferDisplayLayer *layerTrackedBySTS;
}






@end


#endif