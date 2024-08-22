// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETWRITERINPUTINTERNAL_H
#define AVASSETWRITERINPUTINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVAssetWriterInputHelper.h"
#import "AVKeyPathDependencyManager.h"
#import "AVAssetWriterInputPassDescriptionResponder.h"

@interface AVAssetWriterInputInternal : NSObject {
    AVWeakReference *weakReference;
    AVAssetWriterInputHelper *helper;
    NSObject<OS_dispatch_queue> *helperQueue;
    AVWeakReference *weakReferenceToAttachedAdaptor;
    AVWeakReference *weakReferenceToAssetWriter;
    AVKeyPathDependencyManager *keyPathDependencyManager;
    NSInteger numberOfAppendFailures;
    BOOL markAsFinishedCalled;
    NSObject<OS_dispatch_queue> *appendFailureReadWriteQueue;
    AVAssetWriterInputPassDescriptionResponder *passDescriptionResponder;
}






@end


#endif