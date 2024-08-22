// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETWRITERINTERNAL_H
#define AVASSETWRITERINTERNAL_H

@protocol OS_dispatch_queue, AVAssetWriterFinishWritingDelegate;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVAssetWriterHelper.h"
#import "AVKeyPathDependencyManager.h"

@interface AVAssetWriterInternal : NSObject {
    AVWeakReference *weakReference;
    AVAssetWriterHelper *helper;
    NSObject<OS_dispatch_queue> *helperReadWriteQueue;
    AVKeyPathDependencyManager *keyPathDependencyManager;
    id<AVAssetWriterFinishWritingDelegate> *finishWritingDelegate;
}






@end


#endif