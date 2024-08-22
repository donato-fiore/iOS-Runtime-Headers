// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYERITEMMETADATAOUTPUTINTERNAL_H
#define AVPLAYERITEMMETADATAOUTPUTINTERNAL_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReferencingDelegateStorage.h"
#import "AVWeakReference.h"

@interface AVPlayerItemMetadataOutputInternal : NSObject {
    NSArray *metadataIdentifiers;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSObject<OS_dispatch_queue> *accumulationQueue;
    AVWeakReference *weakReferenceToHost;
    CGFloat advanceInterval;
    *__CFDictionary accumulatedMetadataGroups;
}






@end


#endif