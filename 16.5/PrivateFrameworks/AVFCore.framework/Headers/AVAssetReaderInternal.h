// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETREADERINTERNAL_H
#define AVASSETREADERINTERNAL_H

@class NSMutableArray, NSMutableSet, NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVAsset.h"

@interface AVAssetReaderInternal : NSObject {
    AVWeakReference *weakReference;
    AVAsset *asset;
    *OpaqueFigAssetReader figAssetReader;
    ? timeRange;
    BOOL readSingleSample;
    NSMutableArray *outputs;
    NSMutableSet *outputFinishedCallbackInvokers;
    NSInteger status;
    NSError *error;
    NSError *errorThatOccurredBeforeStartReading;
    NSObject<OS_dispatch_queue> *statusReadWriteQueue;
}






@end


#endif