// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERITEMMETADATACOLLECTORINTERNAL_H
#define AVPLAYERITEMMETADATACOLLECTORINTERNAL_H

@class NSArray, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReferencingDelegateStorage.h"
#import "AVWeakReference.h"

@interface AVPlayerItemMetadataCollectorInternal : NSObject {
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSArray *identifiers;
    NSArray *classifyingLabels;
    NSDate *mostRecentlyModifiedMetadataGroupTimestamp;
    AVWeakReference *weakReferenceToPlayerItem;
}






@end


#endif