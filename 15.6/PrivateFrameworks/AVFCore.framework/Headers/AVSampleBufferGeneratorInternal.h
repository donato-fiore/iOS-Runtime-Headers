// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSAMPLEBUFFERGENERATORINTERNAL_H
#define AVSAMPLEBUFFERGENERATORINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVSampleBufferGeneratorInternal : NSObject {
    *OpaqueFigSampleGenerator figSampleGenerator;
    AVWeakReference *weakReferenceToAsset;
    *OpaqueCMTimebase timebase;
    NSObject<OS_dispatch_queue> *batchGenerationQueue;
    NSObject<OS_dispatch_queue> *batchCallbackQueue;
}






@end


#endif