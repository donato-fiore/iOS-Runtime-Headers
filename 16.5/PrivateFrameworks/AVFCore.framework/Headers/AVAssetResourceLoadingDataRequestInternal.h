// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETRESOURCELOADINGDATAREQUESTINTERNAL_H
#define AVASSETRESOURCELOADINGDATAREQUESTINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVAssetResourceLoadingDataRequestInternal : NSObject {
    NSInteger requestedOffset;
    NSInteger requestedLength;
    NSInteger currentOffset;
    NSObject<OS_dispatch_queue> *dataResponseQueue;
    BOOL requestsAllDataToEndOfResource;
    BOOL canSupplyIncrementalDataImmediately;
    AVWeakReference *weakReferenceToLoadingRequest;
}






@end


#endif