// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVSAMPLEBUFFERVIDEOOUTPUTINTERNAL_H
#define AVSAMPLEBUFFERVIDEOOUTPUTINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVWeakReferencingDelegateStorage.h"

@interface AVSampleBufferVideoOutputInternal : NSObject {
    AVWeakReference *weakReference;
    *OpaqueFigVisualContext vc;
    *OpaqueVTPixelBufferConformer pixelBufferConformer;
    NSObject<OS_dispatch_queue> *stateQueue;
    AVWeakReferencingDelegateStorage *delegateStorage;
    ? lastImageTime;
}






@end


#endif