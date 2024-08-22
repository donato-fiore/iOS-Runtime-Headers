// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETREADEROUTPUTINTERNAL_H
#define AVASSETREADEROUTPUTINTERNAL_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVRunLoopCondition.h"

@interface AVAssetReaderOutputInternal : NSObject {
    AVWeakReference *weakReference;
    BOOL alwaysCopiesSampleData;
    BOOL supportsRandomAccess;
    NSArray *currentTimeRanges;
    AVWeakReference *weakReferenceToAssetReader;
    *OpaqueFigAssetReader figAssetReader;
    int extractionID;
    AVRunLoopCondition *sampleBufferAvailabilityCondition;
    BOOL currentConfigurationIsFinal;
    BOOL extractionCompleteForCurrentConfiguration;
    int finished;
    BOOL maximizePowerEfficiency;
}






@end


#endif