// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREDATAOUTPUTSYNCHRONIZERINTERNAL_H
#define AVCAPTUREDATAOUTPUTSYNCHRONIZERINTERNAL_H

@class AVWeakReference, NSArray;

#import <Foundation/Foundation.h>

#import "AVCaptureDataOutputDelegateCallbackHelper.h"

@interface AVCaptureDataOutputSynchronizerInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    NSArray *dataOutputs;
    *OpaqueFigSimpleMutex dataOutputsStorageMutex;
    NSArray *dataOutputsStorage;
    int masterSynchronizedDataQueueMaxDepth;
    BOOL synchronizingVideoAndDepth;
    BOOL synchronizingVideoAndVisionData;
}






@end


#endif